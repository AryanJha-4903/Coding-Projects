#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) 
{
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) 
{
    return strcmp(b,a);
}
int ch_count(const char* s)
{
    int count_of_string[128]={0};
    int length=strlen(s);
    for (int i = 0; i <128 ; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i=s[j])
            {
                count_of_string[i]+=1;
            }
            else
            {
                continue;
            } 
        }
    }
    return ;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b)
{
     if (ch_count(a)<ch_count(b))
     {
         return a,b;
     }
     else if (ch_count(a)>ch_count(b))
     {
        return b,a;
     }
     else
     {
         return strcmp(a,b);
     }
}   
}

int sort_by_length(const char* a, const char* b)
{
    int x=strlen(a),y=strlen(b);
    if (x<y)
    {
        return a,b;
    }
    if (x>y)
    {
        return b,a;
    }
    if (x=y)
    {
        return strcmp(a,b);
    }
    
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){

}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}