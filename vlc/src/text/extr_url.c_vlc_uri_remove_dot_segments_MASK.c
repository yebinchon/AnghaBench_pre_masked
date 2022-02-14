
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (char*,char,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_6(char *VAR_0)
{
    char *VAR_1 = VAR_0, *VAR_2 = VAR_0;

    while (VAR_1[0] != '\0')
    {
        FUNC_0(VAR_2 <= VAR_1);

        if (FUNC_5(VAR_1, "../", 3) == 0)
        {
            VAR_1 += 3;
            continue;
        }
        if (FUNC_5(VAR_1, "./", 2) == 0)
        {
            VAR_1 += 2;
            continue;
        }
        if (FUNC_5(VAR_1, "/./", 3) == 0)
        {
            VAR_1 += 2;
            continue;
        }
        if (FUNC_3(VAR_1, "/.") == 0)
        {
            VAR_1[1] = '\0';
            continue;
        }
        if (FUNC_5(VAR_1, "/../", 4) == 0)
        {
            VAR_1 += 3;
            VAR_2 = FUNC_2(VAR_0, '/', VAR_2 - VAR_0);
            if (VAR_2 == ((void*)0))
                VAR_2 = VAR_0;
            continue;
        }
        if (FUNC_3(VAR_1, "/..") == 0)
        {
            VAR_1[1] = '\0';
            VAR_2 = FUNC_2(VAR_0, '/', VAR_2 - VAR_0);
            if (VAR_2 == ((void*)0))
                VAR_2 = VAR_0;
            continue;
        }
        if (FUNC_3(VAR_1, ".") == 0)
        {
            VAR_1++;
            continue;
        }
        if (FUNC_3(VAR_1, "..") == 0)
        {
            VAR_1 += 2;
            continue;
        }

        if (VAR_1[0] == '/')
            *(VAR_2++) = *(VAR_1++);

        size_t VAR_3 = FUNC_4(VAR_1, "/");

        if (VAR_1 != VAR_2)
            FUNC_1(VAR_2, VAR_1, VAR_3);

        VAR_1 += VAR_3;
        VAR_2 += VAR_3;
    }

    VAR_2[0] = '\0';
    return VAR_0;
}
