#include<stdio.h>

void insertionSort(int a[], int n){
    int i, j, current;
    for(i = 1; i<n; i++){
        current = a[i];
        j = i-1;
        while(a[j]>current && j>=0){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]= current;
    }
}

void selectionSort(int a[], int n){
    int i, j, temp;
    for(i = 0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[j]< a[i]){
                temp = a[j];
                a[j]= a[i];
                a[i] = temp;
            }
        }
    }
}

int main(){
    int a[10], n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    printf("enter the elements \n");
    for (int i  = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nBefore sorting >>>>\n");
    for (int i  = 0; i<n; i++){
        printf("%d ", a[i]);
    }
    // insertionSort(a, n);
    selectionSort(a, n);
    printf("\nAfter sorting >>>>\n");
    for (int i  = 0; i<n; i++){
        printf("%d ", a[i]);
    }
}