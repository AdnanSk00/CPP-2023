// cpp prog for patterns :-
#include<iostream>
#include<iomanip>
using namespace std;


// int main(){
    // int n, i=1;
    // cout << "Enter the quantity of rows & columns : ";
    // cin >> n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout << " * ";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }
    // return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << i <<" ";
//             // if(i==1)
//             //     cout << " 1 ";
//             // else if(i==2)
//             //     cout << " 2 ";
//             // else    
//             //     cout << " 3 ";
//             j += 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << j <<" ";
//             // if(j==1)
//             //     cout << " 1 ";
//             // else if(j==2)
//             //     cout << " 2 ";
//             // else    
//             //     cout << " 3 ";
//             j += 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << n-j+1 <<" ";
//             j += 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     int count = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << setw(4) << count <<"   ";
//             count += 1;
//             j += 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout <<" * ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout << row <<" ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     int count = 1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout << setw(3) << count <<" ";
//             count += 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int col=1;
//         // int value = row;
//         while(col<=row){
//             cout << setw(3) << row + col - 1 << " " ;
//             //value << value  <<" ";
//             // value = value + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(i<=n){
//         int j=1;
//         // int count = i;
//         while(j<=i){
//             // cout << count << " ";
//             // count -= 1;
//             cout << setw(3)<<( i-j+1 ) <<" ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     // char ch = 65;
//     // char ch = 'A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A'+i-1 ;
//             cout << setw(3) << ch <<" ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//         // ch = ch + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(i<=n){
//         int j=1;
//         // char ch = 'A';
//         while(j<=n){
//             char ch = 'A'+j-1 ;
//             cout << setw(3) << ch <<" ";
//             // ch = ch + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     char ch = 'A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << ch <<" ";
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(i<=n){
//         int j=1;
//         // char ch = 'A';
//         char ch = 'A' + i - 1;
//         while(j<=n){
//             // char ch = 'A' + i + j - 2;
//             cout << ch <<" ";
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(i<=n){ 
//         int j=1;
//         while(j<=i){
//             char ch = 'A' + i + j - 2 ;
//             cout << ch <<" ";
//             // ch += 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, i=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(i<=n){ 
//         int j=1;
//         char ch = 'A' + n - i;
//         while(j<=i){
//             cout << ch <<" ";
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }