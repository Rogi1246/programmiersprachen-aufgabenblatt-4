#ifndef BUW_LIST_HPP
#define BUW_LIST_HPP

#include <cstddef>

using namespace std;

// List .hpp

template <typename T>
class List;

template <typename T>
struct ListNode
{
    T value = T();
    ListNode *prev = nullptr;
    ListNode *next = nullptr;
};

template <typename T>
class ListIterator
{
  public:
    using Current = ListIterator<T>; //previously : Self
    using value_type = T;
    using pointer = T *;
    using reference = T &;
    using dif_type = ptrdiff_t;
    using iterator_categ = bidirectional_iterator_tag;

    ListIterator() : node{nullptr} {};

    ListIterator(ListNode<T> *n) : node{n} {};

    pointer operator->() const
    {
        T *res = node->value;
        return res;
    }

    reference operator*() const
    {
        return node->value;
    }

    Current &operator++()
    {
        node = node->next;
        return *this;
    }

    Current operator++(int)
    {
        Current it(*this);
        ++(*this);
        return it;
    }

    bool operator==(Current const &a) const
    {
        return node == a.node;
    }

    bool operator!=(Current const &a) const
    {
        return node != a.node;
    }

    Current next() const
    {
        if (node)
        {
            return ListIterator(node->next);
        }

        else
        {
            return ListIterator(nullptr);
        }
    }

    ListNode<T> &get_Node()
    {
        return *node;
    }

    ListIterator<T> begin() const
    {
        return ListIterator<T>{head_};
    }

    ListIterator<T> end() const
    {
        return ListIterator<T>{tail_}.next();
    }

    ListIterator<T> tail() const
    {
        return ListIterator<T>{tail_};
    }

  private:
    ListNode<T> *node;
};

template <typename T>
class ListConstIterator
{

  public:

  private:
    ListNode<T> *node;
};

template <typename T>
class List
{

  public:
    using value_type = T;
    using pointer = T *;
    using const_pointer = T const *;
    using reference = T &;
    using const_reference = T const &;
    using iterator = ListIterator<T>;
    using const_iterator = ListConstIterator<T>;

    List() : head_{nullptr},
             tail_{nullptr},
             size_{0} {};

    List(ListNode<T> *head) : head_{head},
                              tail_{head},
                              size_{1} {};

    List(List<T> const &aList) : head_{nullptr},
                                 tail_{nullptr},
                                 size_{0}
    {
        for (auto it = aList.begin(); it != aList.end(); it++)
        {
            push_back(*it);
        }
    };

    ~List()
    {
        clear();
    }

    bool is_empty() const
    {
        return size_ == 0;
    }

    size_t size() const
    {
        return size_;
    }

    T head() const
    {
        if (is_empty())
        {
            cout << "No first value in empty list";
            return 0;
        }

        return (*head_).value;
    }

    T tail() const
    {
        if (is_empty())
        {
            cout << "No last value in empty list";
            return 0;
        }

        return tail_->value;
    }

    void push_front(T const object)
    {
        ListNode<T> *node = new ListNode<T>;
        (*node).value = object;

        if (!is_empty())
        {
            (*head_).prev = node;
            (*node).next = head_;
        }

        else
        {
            tail_ = node;
        }

        head_ = node;
        size_++;
        node = nullptr;
    }

    void push_back(T const object)
    {
        ListNode<T> *node = new ListNode<T>;
        (*node).value = object;

        if (!is_empty())
        {
            tail_->next = node;
            node->prev = tail_;
        }

        else
        {
            head_ = node;
        }

        tail_ = node;
        size_++;
        node = nullptr;
    }

    void pop_front()
    {
        if (!is_empty())
        {
            ListNode<T> *toDelete = head_;
            head_ = (*head_).next;
            (*head_).prev = nullptr;
            delete toDelete;
            toDelete = nullptr;
            size_--;
        }

        else
        {
            cout << "Can´t remove element from an empty list";
        }
    }

    void pop_back()
    {
        if (!is_empty())
        {
            ListNode<T> *toDelete = tail_;
            tail_ = (*tail_).prev;

            if (tail_ != nullptr)
            {
                (*tail_).next = nullptr;
            }

            delete toDelete;
            toDelete = nullptr;
            size_--;
        }

        else
        {
            cout << "Can´t remove element from an empty list";
        }
    }

    void clear()
    {
        while (!is_empty())
        {
            pop_back();
        }
    }

    void insert(ListIterator<T> position, T const &object)
    {
        ListIterator<T> it = begin();
        while (it != position)
        {
            it++;
        }

        ListNode<T> *node = new ListNode<T>;
        node->value = object;
        node->prev = it.get_Node().prev;
        it.get_Node().prev->next = node;
        it.get_Node().prev = node;

        if (it != end())
        {
            (*node).next = it.next().get_Node().prev;
        }

        size_++;
    }

    List<T> &operator=(List<T> const &aList)
    {
        clear();
        for (ListIterator<T> it = aList.begin(); it != aList.end(); it++)
        {
            push_back(*it);
        }
    }

  private:
    size_t size_;
    ListNode<T> *head_;
    ListNode<T> *tail_;
};

template <typename T>
bool operator==(List<T> const &aList, List<T> const &bList)
{
    if (aList.size() != bList.size())
    {
        return false;
    }

    ListIterator<T> aListIt = aList.begin();
    ListIterator<T> bListIt = bList.begin();
    while (aListIt != bListIt)
    {
        if (*aListIt != *bListIt)
        {
            return false;
        }

        aListIt++;
        bListIt++;
    }
    return true;
}

template <typename T>
bool operator!=(List<T> const &aList, List<T> const &bList)
{
    return !(aList == bList);
}

template <typename T>
List<T> &reverse(List<T> const &aList)
{
    List<T> *res = new List<T>{aList};
    res->reverse();
    return *res;
}

template <typename T>
List<T> operator+(List<T> const &firstList, List<T> secList)
{
    List<T> concat{firstList};
    for (auto const &it : secList)
    {
        concat.push_back(it);
    }

    return concat;
}

#endif // # define BUW_LIST_HPP