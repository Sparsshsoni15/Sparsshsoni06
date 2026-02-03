#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0; i<=2; i++){
        {
            for(j=0; j<=17; j++)
            {
                if((j>=3-i && j<=6+i)||(j>=12-i && j<=15+i))
                cout<<"*";
                else
                cout<<" ";
            }
            cout<<endl;
        }
    }
    for(i=0; i<9; i++)
    {
        for(j=0; j<=17; j++)
        {
            if(j>=i+1 && j<=17-i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}