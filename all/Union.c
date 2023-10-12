#include<stdio.h>
int n, m, i, j;
// int d;
int count = 0;
void sunion();
int sinter();
int a_b();
void display();
int big();

// int k = 0;
void sunion(int a[], int n, int b[], int m){
    int c[n+m], k = 0;
    for(i = 0; i<n; i++){
        c[k] = a[i];
        k++;
    }
    for(j = 0; j< m; j++){
        count = 0;
        for(int t = 0; t<k ;t++){
            // printf("t is upto:%d\n", t);
            if(b[j] == c[t]){
                // printf("element not added : %d\n", b[j]);
                count++;
                break;
            }
            
            
        }
        if(count == 0){
            
            c[k]= b[j];
            k++;
        }
        
    }
    // printf("Union Done\n");
    printf("Union: ");
    display(c, k);
    // return c[m+n];
}

int sinter(int a[], int n, int b[], int m){
    int mybig = big(n,m);
    int c[mybig];
    int d = 0;
    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            if(a[i]== b[j]){
                c[d]= a[i];
                d++;
            }
        }
    }
    printf("Intersection : ");
    display(c, d);

}

int sa_b(int a[], int n, int b[], int m){
    int n1=0, a_b[n];
    for(i = 0; i<n; i++){
    count = 0;
        for(j = 0; j<m; j++){
            if(a[i]==b[j]){
                // printf("at %d \n", a[i]);
                count++;
                break;
            }
            
        }
        if(count ==0){
            a_b[n1] = a[i];
            n1++;
            // printf("added %d\n",a[i]);
        }
    }
    printf("Difference : ");
    display(a_b, n1);
}

int ssymdiff(int a[],int n, int b[],int m){
    int c[n+m];
    int d = 0;
    
    for(i = 0; i<n; i++){
        count = 0;
        for(j = 0; j< m; j++){
            if(a[i]==b[j]){
                count ++;
            }
        }
        if(count == 0){
            c[d] = a[i];
            d++;
        }
    }
    for(j = 0; j<m; j++){
        count = 0;
        for(i = 0; i<n; i ++){
            if(b[j]==a[i]){
                count++;
            }
        }
        if(count == 0){
            c[d]= b[j];
            d++;
        }
    }
    printf("The Symmetric Difference : ");
    display(c, d);
}

int scartesian(int a[], int n, int b[], int m){
    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            printf("{ %d , %d  } ", a[i], b[j]);
        }
    }
}

int big(int n, int m){
    if(n>m){
        return n;
    }
    else{
        return m;
    }
}

void display();

int main(){
    int a[10], b[10];
    printf("Enter the no. of elements in A : ");
    scanf("%d", &n);
    printf("Enter the elements \n");
    for(i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the no. of elements in B : ");
    scanf("%d", &m);
    printf("Enter the elements \n");
    for(i = 0; i<m; i++){
        scanf("%d", &b[i]);
    }
    printf("A is : ");
    display(a,n);
    printf("B is : ");
    display(b,m);
    sunion(a, n, b, m);
    sinter(a, n, b, m);
    sa_b(a,n, b,m);
    sa_b(b,m, a,n);
    ssymdiff(a,n,b,m);
    printf("<<<Cartesian Product >>>\n");
    scartesian(a,n,b,m);

    
    
}

void display(int c[], int k){
    // printf("The elements are :\n");
        printf("[ ");
    for(i = 0; i<k; i++){
        printf("%d ", c[i]);
    }
        printf("]\n");
}