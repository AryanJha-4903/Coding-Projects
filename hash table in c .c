int ch_count(const char* s)
{
    int count_of_string[128];
    int length=strlen(s);
    for (int i = 0; i <128 ; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i=s[j];)
            {
                count_of_string[i]+=1;
            }
            else
            {
                continue;
            }
            
            
        }
    }
    return count_of_string;

}