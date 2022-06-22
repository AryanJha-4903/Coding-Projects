#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int* s;
  s[0]=a;
  s[1]=b;
  s[2]=c;
  for(int i=3;i<=n;i++)
  {
      int x =s[i-1]+s[i-2]+s[i-3];
      s[i]=x;
  }
  return s[n-1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}