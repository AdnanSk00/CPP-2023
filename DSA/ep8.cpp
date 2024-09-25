#include<iostream>
using namespace std;

// ***********************  Bitwise Operator  **********************

int main(){
    int a = 4;
    int b = 6;
    cout<<" a&b = " << (a&b) <<endl;
    cout<<" a|b = " << (a|b) <<endl;
    cout<<" a~b = " << (~a) <<endl;
    cout<<" a^b = " << (a^b) <<endl;
    cout<< (17>>1) << endl;
    cout<< (17>>2) << endl;
    cout<< (19<<1) << endl;
    cout<< (21<<2) << endl;
    int i = 7 ;
    cout<< (++i) <<endl;
    // 8
    cout<< (i++) <<endl;
    // 8, i = 9
    cout<< (i--) <<endl;
    // 9, i = 8
    cout<< (--i)<<endl;
    // 7, i = 7
    return 0;
}

// 5 Questions :

// int main(){
//     int a, b = 1;
//     a = 10;
//     if(++a)
//         cout << b;
//     else
//         cout << ++b;    
//     return 0;
// }

// int main(){
//     int a = 1;
//     int b = 2;
//     if(a-- > 0 && ++b > 2){
//         cout << "Stage1 - Inside of ";
//     }
//     else{
//         cout << "Stage2 - Inside else " ;    
//     }
//     cout << a << " " << b << endl;
//     return 0;
// }

// int main(){
//     int a = 1;
//     int b = 2;
//     if(a-- > 0 || ++b > 2){
//         cout << "Stage1 - Inside of ";
//     }
//     else{
//         cout << "Stage2 - Inside else " ;    
//     }
//     cout << a << " " << b << endl;
//     return 0;
// }

// int main(){
//     int number = 3;
//     cout << (25 * (++number));
//     return 0;
// }

// int main(){
    // int a = 1;
    // int b = a++;
    // int c = ++b;
    // cout << a <<endl;
    // cout << b <<endl;
    // cout << c <<endl;
    
    // return 0;
// }

