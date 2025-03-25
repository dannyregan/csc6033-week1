/*
Author: Danny Regan
Date: March 25, 2025
Class: CSC6033
Professor: Paulo Fernandes
*/

#include <iostream>

using namespace std;

// Compute the dot product of two vectors
int dot_product(int* arr1, int* arr2, int length) {
    int ans = 0;
    for (int i = 0; i < length; i++) {
        ans += arr1[i] * arr2[i];
    }
    return ans;
}

// Driver
int main() {
    int arr1[] = {3, 8};
    int arr2[] = {11, 22};

    int ans = dot_product(arr1, arr2, 2);
    cout << ans << endl;

    return 0;
}