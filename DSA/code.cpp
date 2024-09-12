#include<bits/stdc++.h>
using namespace std;

// void piramid(int row){
//     //row for the rows
//     for(int i=1; i<=row; i++){
//         static int space = row;
//         //space for the spaces
//         for(int j=0; j<space-1; j++){
//             cout << " ";
//         }
//         space--;
//         //star for the stars
//         for(int k=0; k<2*i-1; k++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void piramid_reverse(int row){
//     //row for the rows
//     for(int i=0; i<row; i++){
//         //space for the spaces
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }
//         int stars = row-i;
//         //star for the stars
//         for(int j=0; j<2*stars-1; j++){
//             cout << "*";
//         }
//         stars--;
//         cout<< endl;
//     }
// }

// void diamond(int row){
//     piramid(row);
//     piramid_reverse(row);
// }

// void right_hand_triange(int row){

//     // for the rows
//     for(int i=0; i<row*2-1; i++){
//         int mid = row;
//         if(i<mid){
//         //for the stars
//         for(int j=0; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//         }
//         else{
//             //for the stars
//             for(int j=0; j<row*2-1-i; j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }

// }


// void number_triangle_01(int row){
//     // MAIN LOOP 
//     for(int i=0; i<row; i++){
//         static int number = 0;
//         // number loop
//         for(int j=0; j<=i; j++){
//             if(number==0){
//                 number = 1;
//             }
//             else{
//                 number = 0;
//             }
//             cout << number << " ";
//         }
//         cout << endl;
//     }
// }





// void number_triangle_01_striver_edition(int row){
//     // MAIN LOOP 
//     int start = 1;
//     for(int i=0; i<row; i++){
//         if(i%2==0){
//             start = 1;
//         }
//         else{
//             start = 0;
//         }
//         // number loop
//         for(int j=0; j<=i; j++){
//             cout << start << " ";
//             start = 1 - start;
//         }
//         cout << endl;
//     }
// }


// void print12(int row){
//     //Main loop
//     for(int i=0; i<row; i++){
//         //First number triangle 
//         for(int j=0; j<=i; j++){
//             cout << j+1<<" ";
//         }
//         //Space reverse triangle
//         for(int k=0; k<2*row-2*i-2; k++){
//             cout << "  ";
//         }
//         //Second number triangle
//         for(int j=i; j>=0; j--){
//             cout << j+1 << " ";
//         }
//         cout << endl;
//     }
// }

// void increaing_number_right_angle_triangle(int row){
//     //Main loop for rows
//     int number = 1;
//     for(int i=0; i<row; i++){
//         //Number loop
//         for(int j=0; j<=i; j++){
//             cout << number << " ";
//             number++;
//         }
//         cout << endl;
//     }
// }



// void right_angle_character_triangle(int row){
// //main loop

// for(int i=0; i<row; i++){
//     char ch = 65;
// for(int j=0; j<=i; j++){
//     cout << ch << " ";
//     ch++;
// }
// cout << endl;
// }

// }

// void print15(int row){
//     for(int i=0; i<row; i++){
//         char ch = 65;
//         for(int j=row-i; j>0; j--){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout << endl;
//     }
// }


// void print16(int row){
// //main loop
//     char ch = 65;
// for(int i=0; i<row; i++){
// for(int j=0; j<=i; j++){
//     cout << ch << " ";   
// }
// ch++;
// cout << endl;
// }

// }


// void print17(int row){
//     for(int i=0; i<row; i++){
//         char ch= 65;
//         //space reverse triangle
//         for(int j=0; j<row-i-1; j++){
//             cout<<"  ";
//         }
//         for(int k=0; k<i*2+1; k++){
//             cout<<ch<<" ";
//             if(i>k){
//             ch++;
//             }else{
//                 ch--;
//             }
//         }
//         cout << endl;
//     }
// }


// void print18(int row){
//     // Mian loop
//     for(int i=0; i<row; i++){
//         char ch = 65;
//         ch+= row - i -1;
//         //charter loop
//         for(int j=0; j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }


// void print19(int row){
//     //Mian Loop
//     for(int i=0; i<row*2; i++){
//         if(row>i){
//         // First triangle  loop
//         for(int j=row-i; j>0; j--){
//             cout<<"* ";
//         }
//         // Space loop
//         for(int k=0; k<i*2; k++){
//             cout<<"  ";
//         }
//         // Second triangle  loop
//         for(int j=row-i; j>0; j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//         }
//         else{
//         // First triangle  loop
//         for(int k=0; k<=i-row; k++){
//             cout<<"* ";
//         }
//         // Space loop
//         for(int l=0; l<2*row-2*(i-row+1); l++){
//             cout<<"  ";
//         }
//         // Second triangle  loop
//         for(int m=0; m<=i-row; m++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// }


// void print20(int row){
//     //mian loop;
//     for(int i=0; i<row*2-1; i++){
//         if(i<row){
//         //first triangle
//         for(int j=0; j<=i; j++){
//             cout<<"* ";
//         }
//         //space
//         for(int k=0; k<2*row-2*(i+1); k++){
//             cout<<"  ";
//         }
//         //second triangle
//         for(int j=0; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//         }else{
//         //first triangle
//         for(int l=0; l<row*2-1-i; l++){
//             cout<<"* ";
//         }
//         //space
//         for(int m=0; m<2*(i-row+1); m++){
//             cout<<"  ";
//         }
//         //second triangle
//         for(int l=0; l<row*2-1-i; l++){
//             cout<<"* ";
//         }
//         cout<<endl;
//         }
//     }
// }


// void print21(int row){
//     //Main loop;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<row; j++){
//             if(i==0 || i==row-1 || j==0 || j==row-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }


// void print22(int row){
//     //main loop
//     for(int i=0; i<row*2-1; i++){
//         for(int j=0; j<row*2-1; j++){
//             int top=i , left=j, bottom=row*2-2-i, right=row*2-2-j;
//             int min_horizontal = min(left, right);
//             int min_vertical = min(top, bottom);
//             int min_distance = min(min_horizontal, min_vertical);
//             cout<<row-min_distance<<" ";
//         }
//         cout<<endl;
//     }
// }

// factorial function in recursion
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// factorial function in loop
// int factorial_loop(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }

//Testing




int main(){
    
    
    
    return 0;
}