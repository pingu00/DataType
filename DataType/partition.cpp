////
////  partition.cpp
////  DataType
////
////  Created by Phil on 2022/05/18.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 10001
//#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )
//
//int list[MAX_SIZE];
//int n;
//
//int partition(int list[], int left, int right)
//{
//    int pivot, temp;
//    int low, high;
//
//    low = left;
//    high = right + 1;
//    pivot = list[left];
//    do {
//        do
//            low++;
//        while (low <= right && list[low] < pivot);
//        do
//            high--;
//        while (high >= left && list[high] > pivot);
//        if (low < high) SWAP(list[low], list[high], temp);
//    } while (low < high);
//
//    SWAP(list[left], list[high], temp);
//    return high;
//}
//
//int main(void)
//{
//    n = MAX_SIZE;
//    int left = 0, right = n - 1;
//    int pivot;
//    int median_index = (left + right) / 2;//n은 홀수라 가정
//
//    int i;
//
//    srand(1);
//    for (i = 0; i < n; i++)
//        list[i] = rand()%10000;
//    do {
//        //아래를 완성하시오.
//
//            pivot = partition(list, left, right);
//            if (pivot > median_index) {
//
//                right = pivot - 1;
//            }
//
//            else if(pivot < median_index) {
//                left = pivot + 1;
//            }
//            
//    } while (pivot != median_index);
//
//    printf("중앙값: %d\n", list[pivot]);
//
//    return list[pivot];
//}
///*
//실제 출력
// 중앙값: 4926
// 계속하려면 아무 키나 누르십시오 . . .
//*/
///*
//예시 출력:
//중앙값: 4536
//계속하려면 아무 키나 누르십시오 . . .
//*/
