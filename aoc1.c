#include<stdio.h>
int main () {
    printf("okay then");
    return 0;
}

int listCounter (int arr[], int n) {

    int counter = 0;
    int counterList[n] = {}; 
    int currentI = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != "") {
            counter += arr[i];
        } else {
            counterList[currentI] = counter; 
            currentI += 1;
            counter = 0;
        }
    }

    printf("\n");
}

