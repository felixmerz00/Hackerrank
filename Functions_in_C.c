#include <stdio.h>

/*Link to the challenge:
https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=false */

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/


int max_of_four(int a, int b, int c, int d)
{
    int A[] = {a, b, c, d};
    for(int i = 1; i < 4; i++){
        if(A[i-1] > A[i]){
            A[i] = A[i-1];
        }
    }
    return A[3];
}

int main() {
    int a, b, c, d;
    printf("Enter four space seperated ints and confirm with ENTER:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("The biggest int is: %d\n", ans);
    
    return 0;
}