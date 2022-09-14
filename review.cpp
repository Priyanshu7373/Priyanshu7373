/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{  int n;
cin>>n;
    int arr[n];
    vector<int>x;
    int j=1;
    x.push_back(0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            x.push_back(i);
            j++;
        }
    }
    x.push_back(n-1);
    int count=0,max=-1,a,b;
    for(int i=1;i<j;i++)
    {
        if(i==1)
        {
            count=x.at(i+2)-x.at(0);
            if(count>max)
            {
                max=count;
                a=x[i];
                b=x[i+1];
            }
        }
        else if(i==j-2)
        {
            count=x.at(j)-x.at(i-1)+1;
            if(count>max)
            {
                max=count;
                a=x[i];
                b=x[i+1];
            }
        }
        else
        {
            count=x.at(i-1)-x.at(i+2)-1;
            if(count>max)
            {
                max=count;
                a=x[i];
                b=x[i+1];
            }
        }
    }
    cout<<count<<" "<<a<<"  "<<b<<endl;
    return 0;
}
