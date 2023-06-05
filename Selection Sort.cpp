#include<bits/stdc++.h>
using namespace std;


void SelectionSort(int a[], int n)
{
    int i, j,min_index;
    for(i=0;i<n;i++){
        min_index = i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min_index]) min_index = j;
        if(min_index != i) swap(a[min_index],a[i]);
    }
}
int main()
{

        int n;
        cin>>n;
         int a[n];
        for(int i=0;i<n;i++)
          cin>>a[i];
            SelectionSort(a,n);
            for(int i=0;i<n;i++)
            cout<<a[i]<<endl;
    return 0;
}

