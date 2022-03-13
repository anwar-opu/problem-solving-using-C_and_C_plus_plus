#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int arr[10];

    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int j = 0; j < 5 ;j++){
        if (max<arr[j])
            max = arr[j];
    }
    printf("%d", max);

    return 0;
}