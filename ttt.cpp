#include <iostream>
        #include <string.h>
using namespace std;
        class Newclass
        {
           public:
             Newclass ( ) { cout << " Constructing normally."<< endl; }
             Newclass ( char* pName )
                {
               strcpy( name, pName );
               cout << " Constructing with a name:" << name << endl;
             }
             ~Newclass ( ){ cout << " Destructing. " << endl;}
             
        void Display ( ) 
 {
          cout << " Display a name :" << name << endl;
        }

           protected:
             char name[20];
        };

        int main ( )
        {
           Newclass obj1;
           Newclass obj2( "jenney" );
           obj1.Display ( );
           obj2.Display ( );
        }
