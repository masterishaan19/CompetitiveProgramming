#include <iostream>
using namespace std;

int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int b,flag=0;
    cout<<"Enter";
    cin>>b;
    for(int c=0;c<4;c++)
    {
        for(int r=0;r<3;r++)
        {
           if(a[r][c]==b)
           {
               flag=1;
               cout<<"found at "<<(r+1)<<" "<<(c+1);
               break;
           }
            if(flag==1)
                break;
        }
    }
    if(flag==0)
        cout<<"Not";
    return 0;
    
}




