#include <iostream>
using namespace std;
/*
Q1.Add integers from 1 to N and display the sum on console.

void main(){
    int n;
    cin>>n;
    int8_t sum=0;
    for(int i=0;i<n;++i){
        sum+=i;
    }
    cout<<sum<<endl;
		return 0;
}

ans:-
int main(){
    int n;
    cin>>n;
    int8_t sum=0;
    for(int i=1;i<=n;++i){
        sum+=i;
    }
    cout<<(int)sum<<endl;
    return 0;
}

Q2.Print full pyramid like an Equilateral Triangle.
n=5
     1
    121
   12321
  1234321
 123454321

#include <iostream>
using namespace std;
int main()
{
int k, n;
cout << "Enter the number of rows : ";
cin >> n;
cout << " ";
for (int i=1; i<=n; i++){
for (int j=1; j<=n-i; j++)
cout << " ';

for (j=1,k=i-1; j<=2*i-1; j++,k--)
{
if (1 || j <= k)
cout << j;
else
cout << k;
}
cout << endl;

cout << " ";

}
return 0;
}

Ans:-
int main()
{
int k, n;
cout << "Enter the number of rows : ";
cin >> n;
cout << " ";
for (int i=1; i<=n; i++)
{

for (int j=1; j<=n-i; j++)
cout << " ";

for (int j=1,k=2*i-1; j<=2*i-1; j++,k--)
{
if (j <= k)
cout << j;
else
cout << k;
}
cout << endl;

cout << " ";

}
return 0;
}

Q3.Left Triangle star Pattern
E.g., For N = 5
*
**
***
****
*****

#include <iostream>
using namespace std;

int main() {
  // size of the triangle
  int size = N;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j < i; j++) {
      cout << "**";
    }
    cout << "\n";
  }
  return 0;
}

Ans:-
int main() {
  // size of the triangle
  int N; cin>>N;
  int size = N;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

Q4.Reverse Pyramid star pattern.
e.g., N=5
*********
 *******
  *****
   ***
    *

int main() {
  // size of the pyramid
  int size; cin>>size;
  for (int i = 0; i < size; i++){
    // print spaces
    for (int j = 0; j < i; j++){
      cout << "  ";
    }
    // print stars
    for(k = 0; k < 2 * size - 1; k++){
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

Ans:-
int main() {
  // size of the pyramid
  int size;
  cin>>size;
  for(int i = 0; i < size; i++){
    // print spaces
  for(int j = 0; j < i; j++){
      cout << " ";
    }
    // print stars
  for(int k = 0; k < 2 * (size - i) - 1; k++){
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

Q5.Reverse Pyramid star pattern.
 e.g., for size=6;
 ***   ***
***** *****
***********
 *********
  *******
   *****
    ***
     *
     
  #include <iostream>
using namespace std;

int main() {
  // heart star pattern
  int size;
  cin>>size;

  for (int i = size / 2; i < size; i += 2) {
    // print first spaces
    for (int j = 1; j < size - i; j += 2) {
      cout << " ";
    }
    // print first stars
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    // print second spaces
    for (int j = 1; j < size - i + 1; j++) {
      cout << " ";
    }
    // print second stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  // lower part
  // inverted pyramid
  for (int i = size; i > 0; i++) {
    for (int j = 0; j < size - i; j++) {
      cout << " ";
    }
    for (int j = 1; j < i * 2; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

Ans:-
int main(){
  // heart star pattern
  int size;
  cin>>size;

  for (int i = size / 2; i < size; i += 2) {
    // print first spaces
    for (int j = 1; j < size - i; j += 2) {
      cout << " ";
    }
    // print first stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    // print second spaces
    for (int j = 1; j < size - i + 1; j++) {
      cout << " ";
    }
    // print second stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  // lower part
  // inverted pyramid
  for (int i = size; i > 0; i--) {
    for (int j = 0; j < size - i; j++) {
      cout << " ";
    }
    for (int j = 1; j < i * 2; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

Q6.Convert given Binary number to Decimal.
int binaryToDecimal(int b){
    int ans;
    int c=0;
    while(b){
        ans=(b % 10) * (1 << c++);
        b/=10;
    }
    return ans;
}
Ans:-
int binaryToDecimal(int b){
    int ans=0;
    int c=0;
    while(b){
        ans=ans+(b % 10) * (1 << c++);
        b/=10;
    }
    return ans;
}

Q7.Simple Calculator.
#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case +:
            cout << num1 << " + " << num2 << " = " << num1 + num2;
        case -:
            cout << num1 << " - " << num2 << " = " << num1 - num2;
        case /:
            cout << num1 << " * " << num2 << " = " << num1 * num2;
        case *:
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
Ans:-
int main(){
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}


*/