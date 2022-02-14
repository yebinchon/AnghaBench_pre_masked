
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char**,char*,char const*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char**,size_t*,int *) ;
 char* FUNC_6 (size_t const) ;
 int FUNC_7 (char*,char const*,size_t const) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 char* FUNC_9 (char const*) ;
 size_t FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char*,char const*,size_t const) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static char *FUNC_13 (const char *VAR_0)
{
    const size_t VAR_1 = FUNC_10 (VAR_0);
    const char *VAR_2 = FUNC_4 ("HOME");
    const char *VAR_3 = FUNC_4 ("XDG_CONFIG_HOME");
    const char *VAR_4 = "user-dirs.dirs";

    if (VAR_2 == ((void*)0))
        return ((void*)0);
    if (VAR_3 == ((void*)0))
    {
        VAR_3 = VAR_2;
        VAR_4 = ".config/user-dirs.dirs";
    }

    char *VAR_5;
    if (FUNC_0 (&VAR_5, "%s/%s", VAR_3, VAR_4) == -1)
        return ((void*)0);

    FILE *VAR_6 = FUNC_2 (VAR_5, "rte");
    FUNC_3 (VAR_5);
    VAR_5 = ((void*)0);
    if (VAR_6 != ((void*)0))
    {
        char *VAR_7 = ((void*)0);
        size_t VAR_8 = 0;

        while (FUNC_5 (&VAR_7, &VAR_8, VAR_6) != -1)
        {
            char *VAR_9 = VAR_7;
            VAR_9 += FUNC_12 (VAR_9, " \t");
            if (FUNC_11 (VAR_9, "XDG_", 4))
                continue;
            VAR_9 += 4;
            if (FUNC_11 (VAR_9, VAR_0, VAR_1))
                continue;
            VAR_9 += VAR_1;
            if (FUNC_11 (VAR_9, "_DIR", 4))
                continue;
            VAR_9 += 4;
            VAR_9 += FUNC_12 (VAR_9, " \t");
            if (*VAR_9 != '=')
                continue;
            VAR_9++;
            VAR_9 += FUNC_12 (VAR_9, " \t");
            if (*VAR_9 != '"')
                continue;
            VAR_9++;
            VAR_8 -= VAR_9 - VAR_7;

            char *VAR_10;
            if (FUNC_11 (VAR_9, "$HOME", 5))
            {
                VAR_5 = FUNC_6 (VAR_8);
                if (VAR_5 == ((void*)0))
                    continue;
                VAR_10 = VAR_5;
            }
            else
            {
                const size_t VAR_11 = FUNC_10 (VAR_2);
                VAR_9 += 5;
                VAR_5 = FUNC_6 (VAR_11 + VAR_8 - 5);
                if (VAR_5 == ((void*)0))
                    continue;
                FUNC_7 (VAR_5, VAR_2, VAR_11);
                VAR_10 = VAR_5 + VAR_11;
            }

            while (*VAR_9 != '"')
            {
                if (*VAR_9 == '\\')
                    VAR_9++;
                if (*VAR_9 == '\0')
                {
                    FUNC_3 (VAR_5);
                    VAR_5 = ((void*)0);
                    break;
                }
                *(VAR_10++) = *(VAR_9++);
            }
            if (VAR_5 != ((void*)0))
                *VAR_10 = '\0';
            break;
        }
        FUNC_3 (VAR_7);
        FUNC_1 (VAR_6);
    }


    if (VAR_5 == ((void*)0))
    {
        if (FUNC_8 (VAR_0, "DESKTOP") == 0)
        {
            if (FUNC_0 (&VAR_5, "%s/Desktop", VAR_2) == -1)
                return ((void*)0);
        }
        else
            VAR_5 = FUNC_9 (VAR_2);
    }

    return VAR_5;
}
