#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[12]={0,};
    int tmp1, tmp2;
    for(int i=0; i<n; i++){
        scanf("%d %d", &tmp1, &tmp2);
        arr[tmp1*6+tmp2-1]++;
    }

    int res=0;
    for(int i=0; i<12; i++){
        if(arr[i]%k==0)
            res+=arr[i]/k;
        else
            res+=(arr[i]/k+1);
    }

    printf("%d", res);
}