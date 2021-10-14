#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int i,k=0,l=0;
    int r=p,c=q;
    char arr[p][q];
    char ch = 'Y'; // Initialize the character to be stored in a[][]
  
    while (k<p && l<q)
    {
        for(i=l;i<q;++i)
          {a[k][i]=ch;}
        k++;
 
        for(i=k;i<p;++i)
            a[i][q-1]=ch;
        q--;
 
        if (k < p)
        {
            for(i=q-1;i>=l;--i)
                a[p-1][i]=ch;
            p--;
        }
 
        if (l < q)
        {
            for(i=p-1;i>=k;--i)
                a[i][l]=ch;
            l++;
        }
        ch=(ch == '0')? 'Y': '0';
    }
 
    // Print the filled matrix
    for (i=0;i<r;i++)
    {
        for (j=0;j<c; j++)
            cout <<" "<<arr[i][j];
        cout <<"\n";
    }
    return 0;
}
 
// This code is contributed by shivanisinghss2110
