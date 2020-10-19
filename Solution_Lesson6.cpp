#include <iostream>

using namespace std;

void task_for_1(){
        int k, n;
        cout << "K:";
        cin >> k;

        cout << "N:";
        cin >> n;

        int i;
        for  (i = 0; i < n;  ++i)
            cout << k << endl;
}
void task_for_12(){
    int N;
    double b = 1;
    double a = 1.1;
    cout << "N = ";
    cin >> N;
    for (int i = 1; i<=N; ++i) {
        b *= a;
        a += 0.1;
    }
    cout << "Res: " << b;

}
void task_for_31(){
    int N;
    cout << "Введите целое число N(>0): ";
    cin >> N;
    double A = 2;
    for (int i = 1; i <= N; ++i) {
        A = 2+1/A;
        cout << A << " ";
    }
    cout << endl;
}

void task_while_7(){
    int N;
    int K=1;
    cout << "Enter N: : ";
    cin >> N;
    while (K*K <= N) {
        ++K;
    }
    cout << K << endl;
}

void task_while_19(){
    int N;
    int R = 0; // число полученное при прочтении числа N справа налево
    cout << "Enter N (N>0): ";
    cin >> N;
    while (N>0) {
        int M = N%10;
        R = R*10+M;
        N /= 10;
    }
    cout << "New number: " << R << endl;
}

void task_while_28(){
    float e;
    cout << "e:";
    cin >> e;
    float ak1=0,ak=2;
    int k=1;
    while (abs(ak-ak1)>=e) {
        ++k;
        ak1=ak;
        ak=2+1/ak1;
    }
    cout << "K= " << k << ", A(k-1)=" << ak1 << ", A(k)=" << ak;
}

void task_series_10(){
    int n ,k , l = 0;
    cout << "Enter k: ";
    cin >> k;
    for (int i = 0;i > n;){
        if (n > 0) {
            ++l;

        }
    }
    if(l > 0) {
        cout << "true";
    }else{
        cout << "false";}
    }



int main() {
    task_for_1();
    task_for_12();
    task_for_31();
    task_while_7();
    task_while_19();
    task_while_28();
    task_series_10();
    return 0;
}
