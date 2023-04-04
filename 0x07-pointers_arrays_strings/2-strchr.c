char *_strchr(char *s, char c)
{
    int outer_loop;
    int inner_loop;
    char tmp;
    int length = strlen(s);
    char new_S[length + 1];
    char *pr_2_New_s = new_S;
    for (outer_loop = 0; outer_loop < length + 1; outer_loop++)
    {

        if (s[outer_loop] == c)
        {
                for (inner_loop = outer_loop; inner_loop < length; inner_loop++)
                {
                tmp = s[inner_loop];
                new_S[inner_loop-outer_loop] = tmp;  
                }
                return pr_2_New_s;  
        }
                
        }
       return NULL;
    }
