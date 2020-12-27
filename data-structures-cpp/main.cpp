#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>



//using std::string;
//
//string reverse(string str) {
//    if (str.length() < 2) {
//        return str;
//    } else {
//        string reverse;
//        for (int i = str.length() - 1; i >= 0; --i) {
//            reverse += str[i];
//        }
//        return reverse;
//    }
//}
//
//template <typename T>
//std::vector<T> mergeSortedVectors(std::vector<T> arr1, std::vector<T> arr2) {
//    std::vector<T> mergedArray = {};
//    std::vector<T> values = {};
//
//    if (arr1.size() > 0 && arr2.size() > 0) {
//        for (T i : arr1) {
//            for (T j : arr2) {
//                if (i < j) {
//                    mergedArray.push_back(i);
//                } else {
//                    mergedArray.push_back(j);
//                }
//            }
//        }
//    }
//    return mergedArray;
//}
//
//
//class Person {
//private:
//    string name;
//public:
//public:
//    Person(string name) : name(name) {}
//
//    friend string getName(Person obj);
//};
//
//string getName(Person obj) {
//    return obj.name;
//}



template <class T>
int GetAverage(T arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return (sum / size);
}

class A {
    private:
    int a;
    public:
    int ba;
};


class B : private A {

};


int main() {

    int arr[5] = {100,200,400,500,1000};


    B b;
    b.ba;





    std::cout << GetAverage(arr, 5) << std::endl;





    return 0;
}