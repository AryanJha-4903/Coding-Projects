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