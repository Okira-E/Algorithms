#include <cstdlib>
#include <iostream>
#include <vector>
#include <chrono>

#define string std::string
#define print(x) std::cout << x << std::endl;


long long maxPairwiseProductFast(const std::vector<long long>& arr, int size) {
    auto now = std::chrono::high_resolution_clock::now();
    long long max = 0;
    for (long long i : arr) {
        if (i > max) {
            max = i;
        }
    }
    long long secondMax = 0;
    for (long long i : arr) {
        if (i > secondMax && i != max) {
            secondMax = i;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - now;
    float ms = duration.count() * 1000.0f;
    print("Time took maxPairwiseProductFast: " << ms << "ms");
    return secondMax * max;
}


long long maxPairwiseProduct(const std::vector<long long>& arr, int size) {
    auto now = std::chrono::high_resolution_clock::now();
    long long max = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if ((arr[i] * arr[j]) > max) {
                max = arr[i] * arr[j];
            }
        }
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - now;
    float ms = duration.count() * 1000.0f;
    print("Time took maxPairwiseProduct: " << ms << "ms");
    return max;
}


int dmain() {
//    while (true) {
//        int n = rand() % 100 + 2;
//        std::vector<long long> a;
//        for (int i = 0; i < n; ++i) {
//            a.push_back(rand() % 100000);
//        }
//        for (long long i : a) {
//            std::cout << i;
//        }
//        long long res1 = maxPairwiseProduct(a, n);
//        long long res2 = maxPairwiseProductFast(a, n);
//        if (res1 != res2) {
//            print(res1 << ":" << res2);
//        } else {
//            print("OK");
//        }
//    }

    int n;
    std::cin >> n;
    std::vector<long long> arr;

    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        arr.push_back(a);
    }

    std::cout << maxPairwiseProductFast(arr, n) << std::endl;
    print("----------------");
    std::cout << maxPairwiseProduct(arr, n) << std::endl;

    return 0;
}
