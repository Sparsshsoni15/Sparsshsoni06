//only works on sorted arrays

#include <iostream>
using namespace std;
void search(int a[],int item,int beg,int end){
    int mid;
    mid=(beg+end)/2;
     if(beg>end){
            cout<<"Element not found!";
            return ;
        }
       
        if(a[mid]==item){
            cout<<"The element is in the array."<<endl;
        }
        else{
            if(a[mid]<item){
                beg=mid+1;
                mid=(beg+end)/2;
                search(a,item,beg,end);
            }
            else{
                end=mid-1;
                mid=(beg+end)/2;
                search(a,item,beg,end);
            }
        }
    }
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    if(n!=0){
     int a[n];
        cout<<"Enter the elements for the array: "<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int item;
        cout<<"Enter the element you want to check for: "<<endl;
        cin>>item;
        int beg,end,mid;
        beg=0;
        end=n-1;
        mid=(beg+end)/2;
        search(a,item,beg,end);
    }
    else{
        cout<<"No array given.";
    }
}