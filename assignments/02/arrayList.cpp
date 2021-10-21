#include <iostream>

template<class T>
class arrayList: public linearList<T> {
public:
    // constructor, copy constructor and destructor
    arrayList(int initialCapacity = 10);
    arrayList(const arrayList<T>&);
    *arrayList() {delete [] element;}

    // ADT methods
    bool empty() const {return listSize == 0;}
    int size() const {return listSize;}
    T& get(int theIndex) const;
    int indexOf(const T& theElement) const;
    void erase(int theIndex);
    void insert(int theIndex, const T& theElement);
    void output(ostream& out) const;

    // additional method
    int capacity() const {return arrayLength;
protected: 
    void checkIndex(int theIndex) const;
        // throw illegalIndex if the Index invalid
    T* element;         // 1D array to hold list elements
    int arrayLength;    // capacity of the 1D array
    int listSize;       // number of elements in list
};

template<class T>
const arrayList<T>::pop_back()
{








};