ASSIGNMENT 1

QUES 1.
#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"enter a number ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if (count>0)
    {
        cout<<"Composite number"<<endl;
        cout<<"factors: ";
        for(i =1;i<n;i++)
        {
            if(n%i==0)
            {
            cout<<i<<",";
                
            }
        }
    }
    else{
        cout<<"Prime number"<<endl;
        int x=n+1;
        int check=0;
        while(check==0)
        {
            for(i=2;i<x;i++)
            {
                if(x%i==0)
                {
                    x=x+1;
                    check=0;
                    break;
                }
                else
                {
                    check=1;
                }
            if(check==1){
                cout<<"next prime no.= "<<x;
                break;
            }}
            
        }
    return 0;
}}

Q 2 )
#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int n,i,j;
    cout<<"1.) Enter no. of elements to enter = ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl<<"2.) Reverse array = ";
    for(i=n-1;i>=0;i--){
        cout<<arr[i];
    }
    int maxele=arr[0];
    int minele=arr[0];
    for(i=1;i<n;++i){
        if(arr[i]>maxele){
            maxele=arr[i]-1;
        }
        if(arr[i]<minele){
            minele=arr[i]+1;
        }
    }
    cout<<endl<<"Second largest value = "<<maxele;
    cout<<endl<<"Second smallest value = "<<minele;
    return 0;
}

Q 3 )
#include <iostream>
using namespace std;

int main(){
    // A. Accept a string from user
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

    
    int i=0, j=str.length()-1;
    bool isPalindrome = true;
    while(i<j){
        if((str[i]) != (str[j])){
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    if(isPalindrome){
        cout<<"The string is a palindrome"<<endl;
    }
    else{
        cout<<"The string is not a palindrome"<<endl;
    }
    
    for(int i=0; i<str.length(); i++){
        if(str[i] != ' '){
            str[i] = '*';
        }
    }
    cout<<"The string after replacing all characters with * is: "<<str<<endl;
}

Q 4 )
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout <<"enter size: ";
    cin>> n;
    int m[n][n];
    int x = 1;
    int top = 0, bottom = n-1, left = 0, right = n-1;
    while (x <= n*n) 
{
        for (int i = left; i <= right; i++){
            m[top][i] = x++;}
        top++;
        for (int i = top; i <= bottom; i++){
            m[i][right] = x++;}
        right--;
        for (int i = right; i >= left; i--){
            m[bottom][i] = x++;}
        bottom--;
        for (int i = bottom; i >= top; i--){
            m[i][left] = x++;}
        left++;
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++){
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
 
Q 5 )
#include <iostream>

using namespace std;

int main(){
    // Rotate a matrix by 90 degrees
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The original matrix is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The rotated matrix is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
}