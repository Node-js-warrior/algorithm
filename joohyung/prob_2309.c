#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int mema, memb, checksum = 0;
    int arr[9];
    for (int i=0; i<9; i++) {
        scanf("%d", &arr[i]);
        checksum += arr[i];
    }
    qsort(arr, 9, sizeof(int), cmp);
    checksum = checksum - 100;
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if(i!=j) {
                if (arr[i]+arr[j] == checksum) {
                    mema = i;
                    memb = j;
                    break;
                }
            }
        }
    }
    for (int i=0; i<9; i++) {
        if (i!= mema && i!= memb) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
