#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false; 
    if (n == 2) return true;  
    if (n % 2 == 0) return false; 

    int sqrtN = sqrt(n);
    for (int i = 3; i <= sqrtN; i +) { 
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "กรุณาใส่จำนวน: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " เป็นจำนวนเฉพาะ" << endl;
    }
    else {
        cout << num << " ไม่ใช่จำนวนเฉพาะ" << endl;
    }

    return 0;
}


