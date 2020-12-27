#pragma once

#include <iostream>
#include <map>

class LinkedList {
protected:
    int count;
    int list[20];
public:
    LinkedList();
    ~LinkedList();
    void isEmpty();
    void isFull();
    void print() const;
    int getCount();
    void addToPosition(int val, int pos);
    void deleteFromPosition(int pos);
    int search(int val) const;
};