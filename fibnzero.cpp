#include <iostream>

using namespace std;

int fib(int n){ //recursive way to create the Fibonacci sequence that starts from 0, 1,...
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n; cin >> n;
    int cur_var = n - 1;
    if (cur_var>=0){
        int answer = fib(cur_var);
        cout << answer;
    }
    else cout << "0";
}
