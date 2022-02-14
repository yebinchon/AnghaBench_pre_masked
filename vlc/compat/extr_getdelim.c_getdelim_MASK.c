
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,size_t) ;

ssize_t FUNC_3 (char **restrict VAR_0, size_t *restrict VAR_1,
                  int VAR_2, FILE *restrict VAR_3)
{
    char *VAR_4 = *VAR_0;
    size_t VAR_5 = (VAR_4 != ((void*)0)) ? *VAR_1 : 0;
    size_t VAR_6 = 0;

    for (;;)
    {
        if ((VAR_5 - VAR_6) <= 2)
        {
            VAR_5 = VAR_5 ? (VAR_5 * 2) : 256;
            VAR_4 = FUNC_2 (*VAR_0, VAR_5);
            if (VAR_4 == ((void*)0))
                return -1;
            *VAR_0 = VAR_4;
            *VAR_1 = VAR_5;
        }

        int VAR_7 = FUNC_1 (VAR_3);
        if (VAR_7 == -1)
        {
            if (VAR_6 == 0 || FUNC_0 (VAR_3))
                return -1;
            break;
        }
        VAR_4[VAR_6++] = VAR_7;
        if (VAR_7 == VAR_2)
            break;
    }

    VAR_4[VAR_6] = '\0';
    return VAR_6;
}
