#include <iostream>
using namespace std;

int main()
{

    //printing fibonacci series 0 1 1 2 3 5  13 21 

    int n = 10 ; //10th element tak series

    int a = 0 ;
    int b = 1 ;

    cout << a << " " << b << " ";

    for (int i = 1 ; i <= n ; i++ ) {    //i start from 1 till n = 10th series tak after out of loop
        int temp = a + b ;  //storing the new no
        cout << temp << " " ;  

        a = b ;        // a ko b ki value miil jaayegi
        b= temp ;     // b ko temp ki value mil jaayegi
    

}

}

