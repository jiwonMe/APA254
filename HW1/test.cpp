#include <iostream>

namespace ds
{
    template <class T>
    class Chain
    {
    public:
        Chain();
        ~Chain();
        bool isEmpty() const;
        int Length() const;
        bool Find(int k, T &x) const;
        int Search(const T &x) const;
        Chain<T> &Delete(int k, T &x);
        Chain<T> &Insert(int k, const T &x);
        void Output(ostream &out) const;

    private:
        ChainNode<T> *first;
        void checkIndex(int index) const;
        int listSize;
    };

    template <class T>
    class ChainNode
    {
        friend Chain<T>;

    private:
        T data;
        ChainNode<T> *link;
    };
    /**
     * @brief Destroy the Chain< T>:: Chain object
     * TC: O(n)
     * @tparam T 
     */
    template <class T>
    Chain<T>::~Chain()
    {
        ChainNode<T> *next;
        while (first)
        {
            next = first->link;
            delete first;
            first = next;
        }
    }

    /**
     * @brief get chain length
     * TC: O(n)
     * @tparam T 
     * @return int 
     */
    template <class T>
    int Chain<T>::Length() const
    {
        ChainNode<T> *current = first;
        int len = 0;
        while (current)
        {
            len++;
            current = current->link;
        }
        return len;
    }

    template <class T>
    bool Chain<T>::Find(int k, T &x) const
    {
        checkIndex(k); // left as excercise

        // move to desired node
        ChainNode<T>* current = first;
        for (int i=0; i<k; i++)
            current = current->link;
        x = current->data;
        return true;
    }

    template <class T>
    void Chain<T>::checkIndex(int index) const
    {
        if (index<0 || index>=listSize)
        {
            ostringstream s;
            s << "index = " << index << "size = " << listSize;
            throw illegalIndex(s.str());
        }
    }

};

int main()
{
}