#include <cstdio>
#include <cmath>

using namespace std;
const int N = 100010;
int a[N];

int main(){

    int n, res, sum = 0, dep = 1;
    
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);

    res = a[1];

    int e = 1;
    for (int i = 2; i <= n; i++){
        sum += a[i];
        if (pow(2, e + 1) - 1 == i){
            if(sum > res){
                res = sum;
                dep = e + 1;
            }
            sum = 0;
            e ++ ;
        }
    }
    if(sum > res){
        res = sum;
        dep = e + 1;
    }
    printf("%d", dep);
    return 0;
}