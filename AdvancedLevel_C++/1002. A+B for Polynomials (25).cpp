#include <iostream>
using namespace std;
int main() {
    float c[1001] = {0};
    int m, n, t;
    float num;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d%f", &t, &num);
        c[t] += num;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%f", &t, &num);
        c[t] += num;
    }
    int cnt = 0;
    for (int i = 0; i < 1001; i++) {
        if (c[i] != 0) cnt++;
    }
    printf("%d", cnt);
    for (int i = 1000; i >= 0; i--) {
        if (c[i] != 0.0)
            printf(" %d %.1f", i, c[i]);
    }
    return 0;
}

// 下面的解法更简洁，但是运行时间可能更长，总体而言就是以数组下标和数组来传递信息的

#include <iostream>
using namespace std;
int main(){
    double a[1010]={0};
    int m,n,k=0,k1;
    double k2;
    cin >> m;
    for(int i=0;i<m;i++){
        cin>> k1 >> k2;
        a[k1]+=k2;
    }
    cin >> n;
    for (int j=0;j<n;j++){
        cin>> k1 >> k2;
        a[k1]+=k2;
    }
    for (int i=0; i<1001;i++){
        if(a[i]!=0) k++;
    }
    cout << k;
    for (int i=1000;i>=0;i--){
        if(a[i]!=0) printf(" %d %.1f",i,a[i]);
    }
    return 0;
}
