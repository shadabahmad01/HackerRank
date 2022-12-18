#include<stdio.h>
#include<bits/stdc++.h>

void update(int *a,int *b) {
    // Complete this function 
    int a_val = *a;
    int b_val = *b;   
    
    //updating the values
    *a = a_val + b_val;
    *b = abs(a_val - b_val);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}