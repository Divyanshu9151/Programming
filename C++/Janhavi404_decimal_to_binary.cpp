// written by Janhavi Jain (github: Janhavi404)

#include <iostream> 
using namespace std; 
  
// function to convert decimal number to binary number
void decToBinary(int n) 
{ 
    int binaryNum[32]; 

    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in the binary number array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
   
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
  
int main() 
{ 
    int n = 17; 
    decToBinary(n); 
    return 0; 
} 

