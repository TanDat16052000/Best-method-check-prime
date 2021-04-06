#include<iostream>
#include<math.h>

using namespace std;
int a[100000];

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void addXtoArray(int x, int arr[], int &n) {
    a[n++] = x;
}

bool checkErathor(int arr[], int lent, int number) {
    int bootNumber = sqrt(number);
    for (int i = 0; i < lent && a[i] <= bootNumber; i++)
        if (number % arr[i] == 0)return false;
    return true;
}

void Erathor23toN(int arr[], int &N) {
    arr[0] = 2;
    arr[1] = 3;
    int lent = 2;
    for (int i = 3; i <= N - 2; i += 6) {
        if (checkErathor(arr, lent, i + 2))addXtoArray(i + 2, arr, lent);
        if (checkErathor(arr, lent, i + 4))addXtoArray(i + 4, arr, lent);
    }
    for (int i = lent - 1; arr[i] > N && i >= 0; i--)
        lent--;
    N = lent;
}

void Erathor23LengthN(int arr[], int N) {
    arr[0] = 2;
    arr[1] = 3;
    int lent = 2;
    for (int i = 3; lent < N; i += 6) {
        if (checkErathor(arr, lent, i + 2))addXtoArray(i + 2, arr, lent);
        if (checkErathor(arr, lent, i + 4))addXtoArray(i + 4, arr, lent);
    }
}

void Erathor235(int arr[], int &n) {
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 5;
    int lent = 3;
    for (int i = 5; i <= n - 2; i += 30) {
        if (checkErathor(arr, lent, i + 2))addXtoArray(i + 2, arr, lent);
        if (checkErathor(arr, lent, i + 6))addXtoArray(i + 6, arr, lent);
        if (checkErathor(arr, lent, i + 8))addXtoArray(i + 8, arr, lent);
        if (checkErathor(arr, lent, i + 12))addXtoArray(i + 12, arr, lent);
        if (checkErathor(arr, lent, i + 14))addXtoArray(i + 14, arr, lent);
        if (checkErathor(arr, lent, i + 18))addXtoArray(i + 18, arr, lent);
        if (checkErathor(arr, lent, i + 24))addXtoArray(i + 24, arr, lent);
        if (checkErathor(arr, lent, i + 26))addXtoArray(i + 26, arr, lent);
    }
    for (int i = lent - 1; arr[i] > n && i >= 0; i--)
        lent--;
    n = lent;
}

void Erathor235LengthN(int arr[], int N) {
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 5;
    int lent = 3;
    for (int i = 5; lent <= N; i += 30) {
        if (checkErathor(arr, lent, i + 2))addXtoArray(i + 2, arr, lent);
        if (checkErathor(arr, lent, i + 6))addXtoArray(i + 6, arr, lent);
        if (checkErathor(arr, lent, i + 8))addXtoArray(i + 8, arr, lent);
        if (checkErathor(arr, lent, i + 12))addXtoArray(i + 12, arr, lent);
        if (checkErathor(arr, lent, i + 14))addXtoArray(i + 14, arr, lent);
        if (checkErathor(arr, lent, i + 18))addXtoArray(i + 18, arr, lent);
        if (checkErathor(arr, lent, i + 24))addXtoArray(i + 24, arr, lent);
        if (checkErathor(arr, lent, i + 26))addXtoArray(i + 26, arr, lent);
    }
}

void Erathor2357LengthN(int arr[], int &N) {
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 5;
    arr[3] = 7;
    int lent = 4;
    for (int i = 7; lent <=N; i += 120) {
        if (checkErathor(arr, lent, i + 4))addXtoArray(i + 4, arr, lent);
        if (checkErathor(arr, lent, i + 6))addXtoArray(i + 6, arr, lent);
        if (checkErathor(arr, lent, i + 10))addXtoArray(i + 10, arr, lent);
        if (checkErathor(arr, lent, i + 12))addXtoArray(i + 12, arr, lent);
        if (checkErathor(arr, lent, i + 16))addXtoArray(i + 16, arr, lent);
        if (checkErathor(arr, lent, i + 22))addXtoArray(i + 22, arr, lent);
        if (checkErathor(arr, lent, i + 24))addXtoArray(i + 24, arr, lent);
        if (checkErathor(arr, lent, i + 30))addXtoArray(i + 30, arr, lent);
        if (checkErathor(arr, lent, i + 34))addXtoArray(i + 34, arr, lent);
        if (checkErathor(arr, lent, i + 36))addXtoArray(i + 36, arr, lent);
        if (checkErathor(arr, lent, i + 40))addXtoArray(i + 40, arr, lent);
        if (checkErathor(arr, lent, i + 46))addXtoArray(i + 46, arr, lent);
        if (checkErathor(arr, lent, i + 52))addXtoArray(i + 52, arr, lent);
        if (checkErathor(arr, lent, i + 54))addXtoArray(i + 54, arr, lent);
        if (checkErathor(arr, lent, i + 60))addXtoArray(i + 60, arr, lent);
        if (checkErathor(arr, lent, i + 64))addXtoArray(i + 64, arr, lent);
        if (checkErathor(arr, lent, i + 66))addXtoArray(i + 66, arr, lent);
        if (checkErathor(arr, lent, i + 72))addXtoArray(i + 72, arr, lent);
        if (checkErathor(arr, lent, i + 76))addXtoArray(i + 76, arr, lent);
        if (checkErathor(arr, lent, i + 82))addXtoArray(i + 82, arr, lent);
        if (checkErathor(arr, lent, i + 90))addXtoArray(i + 90, arr, lent);
        if (checkErathor(arr, lent, i + 94))addXtoArray(i + 94, arr, lent);
        if (checkErathor(arr, lent, i + 96))addXtoArray(i + 96, arr, lent);
        if (checkErathor(arr, lent, i + 100))addXtoArray(i + 100, arr, lent);
        if (checkErathor(arr, lent, i + 102))addXtoArray(i + 102, arr, lent);
        if (checkErathor(arr, lent, i + 106))addXtoArray(i + 106, arr, lent);
        if (checkErathor(arr, lent, i + 120))addXtoArray(i + 120, arr, lent);
    }
}

bool isPrime(int value) {
    if (value < 2)return false;
    int square_rootValue = sqrt(value);
    for (int i = 2; i <= square_rootValue; i++)
        if (value % i == 0) return false;
    return true;
}

bool isPrime23(int value) {
    if (value == 2 || value == 3) return true;
    if (value < 2 || value % 2 == 0 || value % 3 == 0) return false;
    int square_rootValue = (int) sqrt(value);
    for (int i = 3; i <= square_rootValue - 2; i += 6)
        if (value % (i + 2) == 0 || value % (i + 4) == 0) return false;
    return true;
}

bool isPrime235(int value) {
    if (value == 2 || value == 3 || value == 5) return true;
    if (value < 2 || value % 2 == 0 || value % 3 == 0 || value % 5 == 0) return false;
    int square_rootValue = (int) sqrt(value);
    for (int i = 5; i <= square_rootValue - 2; i += 30) {
        if (value % (i + 2) == 0)return false;
        if (value % (i + 6) == 0)return false;
        if (value % (i + 8) == 0)return false;
        if (value % (i + 12) == 0)return false;
        if (value % (i + 14) == 0)return false;
        if (value % (i + 18) == 0)return false;
        if (value % (i + 24) == 0)return false;
        if (value % (i + 26) == 0)return false;
    }
    return true;
}
void text7(int arr[], int n) {
    for (int i = 3; i < n; i++)
        arr[i] = arr[i] - 7;
}

int moc(int arr[], int n) {
    for (int i = 3; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            //  cout<<arr[i]<<endl;
            if ((arr[j] - arr[i]) % 4 == 0
                && (arr[j] - arr[i]) % 6 == 0
                && (arr[j] - arr[i]) % 10 == 0
                && (arr[j] - arr[i]) % 12 == 0 && (arr[i] - 4) % 7 == 0)cout << arr[i] << " " << arr[j] << endl;

    cout << endl;
}

void printPrime(int N) {
    for (int i = 2, j = 0; j <= N; i++)
        if (isPrime(i)) {
            cout << i << " ";
            j++;
        }
    cout << endl;
}

int main(int argc, char** argv) {
    int i = 10000;
    //Erathor2357LengthN(a, i);printArray(a, i);


    printPrime(i);
    Erathor235LengthN(a, i);
    //text7(a, i);
    printArray(a, i);
    //text7(a, i);
    //moc(a, i);


    return 0;
}