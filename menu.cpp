#include <iostream>
using namespace std;
int main () {

   int n[ 10 ];
       
   for ( int i = 0; i < 10; i++ ) {
      n[ i ] = i + 100;
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
                     
   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}