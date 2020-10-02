#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"rows and col"<<endl;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter at"<<i<<" "<<j;
            cin>>a[i][j];
        }
    }
    cout<<"Done"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i%2==0)
            {
                cout<<a[j][i]<<" ";
            }
            else
            {
                cout<<a[r-j-1][i]<<" ";
            }
                
        }
        
    }
    return 0;
    
}

