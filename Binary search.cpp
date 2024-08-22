// WAP for a simple Binary searh program.
# include <iostream>
using namespace std;

int  main()
{
    int arr[5] = {1,3,6,8,9};
    int size = sizeof(arr)/4;
    cout<<"Size of array : "<<size<<endl;
    
    int left = 0 , right = size - 1;
    int target = 8 , index = -1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] == target)
        {
            index = mid;
            break;
        }
        else if(arr[mid] < target)
        {
            // Move right
            left = mid + 1;
        }
        else
        {
            // Move left
            right = mid - 1;
        }
    }
    
    cout<<"Index = "<<index;
    return 0;
}




// WAP for a first and last occurance of  number using binary search.
# include <iostream>
#include <vector>
using namespace std;

int  main()
{
    int arr[5] = {8,8,8,8,9};
    int size = sizeof(arr)/4;
    cout<<"Size of array : "<<size<<endl;
    
    int left = 0 , right = size - 1;
    int target = 8;
    
    // First occurance
    int first = -1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] == target)
        {
            first = mid;
            right = mid - 1;
        }
        else if(arr[mid] < target)
        {
            // Move right
            left = mid + 1;
        }
        else
        {
            // Move left
            right = mid - 1;
        }
    }
    
    // Last occurance
    int last = -1;
    left = 0;
    right = size -1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] == target)
        {
            left = mid + 1;
            last = mid;
        }
        else if(arr[mid] < target)
        {
            // Move right
            left = mid + 1;
        }
        else
        {
            // Move left
            right = mid - 1;
        }
    }
    
    vector <int> a(2);
    a[0] = first;
    a[1] = last;
    cout<<"First occurance = "<<a[0]<<endl;
    cout<<"Last occurance = "<<a[1]<<endl;
    return 0;
}
