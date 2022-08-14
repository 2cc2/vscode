#include<iostream>
using namespace std;

//先决条件：有序数组
//数据量不能太大
int binarySearch(int* arr,int low,int high,int key)
{
    int mid;
    while(low<high)
        {
            mid=(low+high)/2;
            if(arr[mid]==key)
            {
                return mid+1;
            }
            else
            {
                if(arr[mid]<key)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        cout<<"未找到"<<endl;
        return -1;
}
