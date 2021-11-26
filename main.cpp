#include <iostream>

using namespace std;

int main()
{
    char l = 65;
    for(int i=0;i<=6;i++)
      {
        l = 65;
        for(int j =0;j<=i;j++)
            {
             cout <<l;
            l++;
            }
            l--;
        if(i!=6)
            {
            for(int k=0;k<=10-2*i;k++)
            cout<<" ";
            }
        if(i==6)
            l--;
        for(int w=0;w<=i;w++)
            {
            cout<<l;
            l--;
            if(i==6 and w==5)
                w++;
        }
        cout<<endl;

    }
    for(int i=5;i>=0;i--)
        {
        l = 65;
        for(int j=0;j<=i;j++)
            {
            cout<<l;
            l++;
            }
        l--;
        for(int k=0;k<=10-2*i;k++)
            cout<<" ";
        for(int w=0;w<=i;w++)
            {
            cout<<l;
            l--;
            }
        cout<<endl;
        }
    return 0;
}
