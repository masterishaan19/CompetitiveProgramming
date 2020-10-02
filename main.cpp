#include <iostream>
using namespace std;

int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// <<<<<<< code1
    int b,flag=0;
    cout<<"Enter";
    cin>>b;
// =======
    
// >>>>>>> master
    for(int c=0;c<4;c++)
    {
        for(int r=0;r<3;r++)
        {
// <<<<<<< code1
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
// =======
            cout<<a[r][c]<<" ";
        }
        cout<<endl;
    }
// >>>>>>> master
    return 0;
    
}

// <<<<<<< code1



// =======
// >>>>>>> master
