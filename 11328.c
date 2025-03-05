#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);

    int result[n];
    char str1[1001], str2[1001];
    for(int i=0; i<n; i++) {
        int arr[26] = {0, }, check = 0;
        scanf("%s %s", str1, str2);
        int strlen1 = strlen(str1), strlen2 = strlen(str2);
        if(strlen1==strlen2) {
            for (int j = 0; j < strlen1; j++)
                arr[str1[j] - 'a']++;
            for(int j=0; j<strlen2; j++)
                arr[str2[j] - 'a']--;
            for(int j=0; j<26; j++) {
                if (arr[j] != 0)
                    break;
                else check++;
            }
            if(check == 26)
                result[i]=1;
            else
                result[i]=0;
        }
    }

    for(int i=0; i<n; i++) {
        if(result[i]==1)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
}