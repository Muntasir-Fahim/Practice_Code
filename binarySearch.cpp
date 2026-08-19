#include <iostream>
#include<vector>


using namespace std;

int binarySearch(vector<int> v, int tar){
    int st=0,end=v.size()-1;

    while (st <= end)
    {
        int mid = (st+end)/2; //optimized formula: st + (end - st)/2
        if(tar > v[mid]){
            st = mid + 1;
        }else if (tar < v[mid])
        {
            end = mid - 1;
        }else{
            return mid;
        }
        
    }

    return -1;
    
}

int main() 
{
    vector<int> v ={1,5,4,6,7,9,13,44}; //for binary search, the data must be sorted
    int start = 0, end = v.size() - 1; //end =  total size -1
    int target = 13; // the element we want to search
   
    cout<<binarySearch(v,target);
    

}
