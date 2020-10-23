/* 2.7.6 ASCII pg 65
Write a program that outputs every character between [33,255]
  ascii #: ascii symbol
*/

#include <iostream>

using namespace std;

int main()
{
   int i,j;


   for (i = 33; i < 255; i++)
   {
           cout << i << ':' << (char)i << ' ';
          // if (i % 105) no idea how to break the cout! bedtime

            //   cout << endl;
       

   }



    return 0;
}