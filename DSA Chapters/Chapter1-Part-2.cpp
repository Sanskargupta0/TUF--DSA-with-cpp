#include<bits\stdc++.h>
using namespace std;

// Binary Search
bool binary_search(vector<int> v, int x){
    int l = 0, r = v.size()-1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(v[mid] == x) return true;
        else if(v[mid] < x) l = mid+1;
        else r = mid-1;
    }
    return false;
}

int main(){
    /*

    // binary_search
    vector<int> v = {1, 3, 5, 7, 9, 11, 13, 15};

    cout << binary_search(v, 5) << endl; // 1

    // now using STL

    if(binary_search(v.begin(), v.end(), 5)) cout << "Found" << endl; // Found
    else cout << "Not Found" << endl;

    // lower_bound

    // it returns the index of the element which is just greater than or equal to the given element
    // works in log(n) time
    

    int ind = lower_bound(v.begin(), v.end(), 5) - v.begin();

    int ind1 = lower_bound(v.begin(), v.end(), 6) - v.begin();

    int ind2 = lower_bound(v.begin(), v.end(), 17) - v.begin();

    cout<<ind<<" "<<ind1<<" "<<ind2<<endl; // 2 3 8

    // upper_bound

    // it returns the index of the element which is just greater than the given element
    // works in log(n) time

    int ind3 = upper_bound(v.begin(), v.end(), 5) - v.begin();

    int ind4 = upper_bound(v.begin(), v.end(), 6) - v.begin();

    int ind5 = upper_bound(v.begin(), v.end(), 17) - v.begin();

    cout<<ind3<<" "<<ind4<<" "<<ind5<<endl; // 3 3 8

    */

    /*
    
    Q. Find the first occurance of a X in a sorted array.
       If it does not exist return -1.

       A[] = {1, 2, 2, 2, 3, 4, 5}
    */

    int a[] = {1, 2, 2, 2, 3, 4, 5};

    int ind = lower_bound(a, a+7, 2) - a;

    if(ind < 7 && a[ind] == 2) cout << ind << endl; // 1
    else cout << -1 << endl;


    /*
    Q. Find the last occurance of a X in a sorted array.
       If it does not exist return -1.

       A[] = {1, 2, 2, 2, 3, 4, 5}
    */

    int ind1 = upper_bound(a, a+7, 2) - a;
    ind1--;

    if(ind1 >= 0 && a[ind1] == 2) cout << ind1 << endl; // 3
    else cout << -1 << endl;

    /*
    Q.Find the largest number smaller than X in a sorted array.
      If it does not exist return -1.

      A[] = {1, 2, 3, 4, 5}
    
    */

    int a2[]= {1, 2, 3, 4, 5};

    int ind4 = lower_bound(a, a+5, 3) - a;
    ind4--;

    if(ind4 >= 0) cout << a[ind4] << endl; // 2
    else cout << -1 << endl;



}