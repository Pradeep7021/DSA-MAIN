#include <iostream>
using namespace std;

int main()
{
/*
    //MUTIPLE CONDITION APPLY HERE

    for (int a = 5 , b = 5 ; a>=0 && b >= 1 ; a-- , b-- ) {
        cout << a << " " << b << endl;
    }
  */

    
   //  SUM PRINT 

    int n ;
    cin >> n ;

    int sum = 0 ;

    for (int i = 1 ; i <= n ; i++)  // i is start from 1 bcoz sum from 1 to n 
    {
        sum += i ;
    }

    cout << sum << endl ;

}  








