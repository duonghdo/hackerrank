#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <string>

using namespace std;

const int base = 1e9;

int a, b, n;
int F[22][15000], tmp[15000], multiplyNums_tmp[15000];

void addNums(int * a, int * b, int * c) {
    c[0] = max(a[0],b[0]);
    int remain = 0;
    for (int i = 1; i <= c[0]; ++i) {
        int num = (a[i]+b[i]+remain);
        remain = num/base;
        c[i] = num%base;
    }
    if (remain) c[++c[0]] = remain;
}

void multiplyNums(int * a, int * b, int * c) {
    for (int i = 1; i <= b[0]; ++i) {
        memset(tmp, 0, sizeof tmp);
        long long remain = 0;
        for (int j = 1; j <= a[0]; ++j) {
            long long num = ((long long)a[j]*(long long)b[i]+remain);
            remain = num/base;
            tmp[i+j-1] = num%base;
        }
        tmp[0] = i+a[0]-1;
        if (remain) tmp[++tmp[0]] = remain;
        addNums(tmp,c,c);
    }
}

int lengthNum(int x) {
    int res = 0;
    for(;x;x/=10) res++;
    return res;
}

void printRes(int * a) {
    printf("%d",a[a[0]--]);
    for (int i = a[0]; i >= 1; --i) {
        for (int k = lengthNum(a[i]); k < 9; ++k) printf("0");
        printf("%d",a[i]);
    }
}

int main(){
    cin >> a >> b >> n;
    F[1][0] = F[2][0] = 1;
    F[1][1] = a, F[2][1] = b;
    for (int i = 3; i <= n; ++i) {
        memset(multiplyNums_tmp, 0, sizeof multiplyNums_tmp);
        multiplyNums(F[i-1],F[i-1],multiplyNums_tmp);
        addNums(multiplyNums_tmp,F[i-2],F[i]);
    }
    printRes(F[n]);
    return 0;
}