#include<iostream>
using namespace std;
int main()
{
    int A , B , C ,p = 0;
    cin >>  A >> B >> C;
    for ( ; A <= B ; A++)
    {
       if(A%C==0)
       {
           p = 1;
           cout << A << endl;
           break;
       }
       else
       {
        p = 0;
       }
    }
    if (  p == 0)
    {
        cout << -1 << endl;
    }

    return 0;
}

