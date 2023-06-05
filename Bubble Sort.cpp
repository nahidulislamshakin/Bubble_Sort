#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int a[], int n)
{
    int i, temp;
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>=a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }

    }
}

int main()
{

        int n;
        cin>>n;
         int a[n];
        for(int i=0;i<n;i++)
          cin>>a[i];
            BubbleSort(a,n);
            for(int i=0;i<n;i++)
            cout<<a[i]<<endl;
    return 0;
}
