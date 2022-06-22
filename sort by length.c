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