#include<iostream>
#include<iomanip>
using namespace std;

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int space = n - row;
//         while(space){
//             // Print space -
//             // cout<<space<<"  ";
//             cout<<"  ";
//             space = space - 1;
//         } 
//             // Print star *
//         int col=1;
//         while(col<=row){
//             cout<<"* ";
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
//         int star = n - row + 1;
//         while(col<=row){
//             while(star){
//             cout<<"* ";
//             star -= 1;
//             }
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
//         int col = 1;
//         // while(col<=n){
//             int space = row - 1;
//             while(space){
//                 // cout<<space<<"  ";
//                 cout<<"  ";
//                 space = space - 1;
//             }
//             int star = n - row + 1;
//             while(star){
//                 cout<<"* ";
//                 star = star - 1;
//             }
//             // col = col + 1;
//         // }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int space = row - 1;
//         while(space){
//             // cout<<space<<"  ";
//                 cout<<"  ";
//                 space = space - 1;
//         }
//         int number = n - row + 1;
//         while(number){
//             cout<<row<<" ";
//             number = number - 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int space = n - row;
//         while(space){
//             // cout<<space<<"  ";
//                 cout<<"  ";
//                 space = space - 1;
//         }
//         int col = 1;
//         while(col<=row){
//             cout<<row<<" ";
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int space = row - 1;
//         while(space){
//             cout<<"  ";
//             space = space - 1;
//         }
//         int count = row;
//         int number = n - row + 1;
//         while(number){
//             cout << count<<" ";
//             count = count + 1;
//             number = number - 1;
//         }
//         cout<<endl;
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
//         int space = n - row;
//         while(space){
//             cout<<"  ";
//             space = space - 1;
//         }
//         int col = 1;
//         while(col<=row){
//             cout  << setw(0) << count<<" ";
//             count = count + 1;
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int space = n - row;
//         while(space){
//             cout<<"  ";
//             space = space - 1;
//         }
//         int col = 1;
//         while(col<=row){
//             cout << col <<" ";
//             // cout << "* ";
//             col = col + 1;
//         }
//         int start = row - 1;
//         while(start){
//         cout << start <<" ";
//         // cout << "* ";
//         start = start - 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int space = n - row ;
//         while(space){
//             cout<<"  ";
//             space = space - 1;
//         }
//         int num = 1;
//         while(num<row){
//             // cout << "* ";
//             cout << num <<" ";
//             num = num + 1;
//         }
//         int start = row ;
//         while(start){
//         cout << start <<" ";
//         // cout << "* ";
//         start = start - 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n, row=1;
//     cout << "Enter the quantity of rows & columns : ";
//     cin >> n;
//     while(row<=n){
//         int num1 = 1;
//         int count1 = n - row + 1;
//         while(count1){
//             cout << num1 <<" ";
//             num1 = num1 + 1;
//             count1 = count1 - 1;
//         }
//         // int star1 = row - 1;
//         // while(star1){
//         //     cout<<"* ";
//         //     star1 = star1 - 1;
//         // }
//         // int star2 = row - 1;
//         // while(star2){
//         //     cout<<"* ";
//         //     star2 = star2 - 1;
//         // }
//         int value = 1;
//         while(value<=2){
//             int star1 = row - 1;
//             while(star1){
//                 cout<<"* ";
// //                cout<<"  ";
//                 star1 = star1 - 1;
//             }
//             value += 1;
//         }
//         int count2 = n - row + 1;
//         while(count2){
//             cout << count2 <<" ";
//             count2 = count2 - 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

int main(){
    int n, row=1;
    cout << "Enter the quantity of rows & columns : ";
    cin >> n;
    int h1 = n/2;
    while(row<=h1){
        int space1 = h1 - row + 1;
        while(space1){
            cout<<"  ";
            space1 = space1 - 1;
        }
        int star1 = 1;
        while(star1<=row){
            // cout << col <<" ";
            cout << "* ";
            star1 = star1 + 1;
        }
        int star2 = row - 1;
        while(star2){
        // cout << start <<" ";
        cout << "* ";
        star2 = star2 - 1;
        }
        cout<<endl;
        row = row + 1;
    }
    int row2 = 1;
    int h2 = n - h1;
    while(row2<=h2){
        int space2 = row2 - 1;
        while(space2){
            cout<<"  ";
            space2 = space2 - 1;
        }
        int star3 = h2 - row2 + 1;
        while(star3){
            cout<<"* ";
            star3 = star3 - 1;
        }
        int star4 = h2 - row2 ;
        while(star4){
            cout<<"* ";
            star4 = star4 - 1;
        }
        cout<<endl;
        row2 = row2 + 1;
    }
    return 0;
}