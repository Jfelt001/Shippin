//
//  main.cpp
//  Battleship
//
//  Created by Jared Felton on 11/3/18.
//  Copyright © 2018 Jared Felton. All rights reserved.
//
#include <stdio.h>
#include <iostream>

using namespace std;
int binarySearch(int arr[], int l, int r, int x) {
    int mid = l + (r - l)/2;
    
if (mid == x)
    return x;
    
if (mid > x)
    r = mid - l;
    
else l = mid - r;
    
    return -1;
    
}
int main(int argc, char **argv)
{
   int arr[] = {2, 3, 4, 10, 40, 53, 77, 94, 104, 204, 555, 1000};
    int binary = 4;
    int l = 0;
    int r = 11;
    int x = binarySearch(arr, l, r, binary);
    cout<<x;
    
    
    
}


