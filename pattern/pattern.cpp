#include <iostream>
using namespace std;

 // First pattern
// int main(){
//     int n = 4;
//     for (int  i = 0; i < n; i++) //outer loop
//     {
//        for (int j = 0; j < n; j++) //outer loop
//        {
//         cout<<"*"<<" "; 
//        }
//        cout<<endl;
//     }
//     return 0;
// }
// Output look like
// * * * * 
// * * * *
// * * * *
// * * * *

//=====================================================================
// Pattern two

// int main(){
 
//     int limit = 4;
//     for(int i = 0; i<limit; i++){
//         char ch = 'A';
//         for(int j=0; j<limit ;j++){
//             cout<<ch<<" ";
//             ch = ch +1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Output look like
// A B C D 
// A B C D
// A B C D
// A B C D

//====================================================================
//Pattern three

// int main(){
//     int limit=3;
//     int num=1;
//     for(int i=0; i<limit; i++){
//         for(int j=0; j<limit; j++){
//             cout<<num<<" ";
//             num ++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Output look like
// 1 2 3 
// 4 5 6
// 7 8 9

//================================================================
//pattern four

// int main(){
//     int limit = 4;
//        char ch = 'A';
//     for(int i = 0; i<limit; i++){
//         for(int j=0; j<limit ;j++){
//             cout<<ch<<" ";
//             ch = ch +1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Output look like
// A B C D 
// E F G H
// I J K L
// M N O P

//==================================================================
//pattern Five

// int main(){
//     int limit = 4;
//     for(int i=0; i<limit; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Output look like
// * 
// * *
// * * *
// * * * *

//===================================================================
//pattern six

// int main(){
//     int limit = 4;
//     char ch= 'A';
//     for(int i=0; i<limit; i++){
//         for(int j=0; j<=i; j++){
//             cout<<ch<<" ";
//         }
//         ch= ch+1;
//         cout<<endl;
//     }
//     return 0;
// }