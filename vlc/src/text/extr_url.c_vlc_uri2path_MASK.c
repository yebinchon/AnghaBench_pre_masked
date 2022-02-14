
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char,int) ;
 char* FUNC_3 (char*,char*,scalar_t__) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char const*,char*,int) ;
 char* FUNC_9 (char*,int) ;
 char* FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*,char**,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*) ;

char *FUNC_14 (const char *VAR_0)
{
    char *VAR_1 = ((void*)0);
    char *VAR_2;

    char *VAR_3 = FUNC_10 (VAR_0, "://");
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_2 = FUNC_2 (VAR_0, '/', VAR_3 - VAR_0);
    size_t VAR_4 = ((VAR_2 != ((void*)0)) ? VAR_2 : VAR_3) - VAR_0;
    VAR_3 += 3;


    VAR_2 = VAR_3 + FUNC_5 (VAR_3, "?#");
    VAR_3 = FUNC_9 (VAR_3, VAR_2 - VAR_3);
    if (FUNC_12(VAR_3 == ((void*)0)))
        return ((void*)0);


    FUNC_13 (VAR_3);

    if (VAR_4 == 4 && !FUNC_8 (VAR_0, "file", 4))
    {


        if (*VAR_3 == '/')
            return VAR_3;

        if (!FUNC_8 (VAR_3, "localhost/", 10))
            return FUNC_3 (VAR_3, VAR_3 + 9, FUNC_7 (VAR_3 + 9) + 1);
    }
    else
    if (VAR_4 == 2 && !FUNC_8 (VAR_0, "fd", 2))
    {
        int VAR_5 = FUNC_11 (VAR_3, &VAR_2, 0);

        if (*VAR_2)
            goto out;


        switch (VAR_5)
        {
            case 0:
                VAR_1 = FUNC_6 ("/dev/stdin");
                break;
            case 1:
                VAR_1 = FUNC_6 ("/dev/stdout");
                break;
            case 2:
                VAR_1 = FUNC_6 ("/dev/stderr");
                break;
            default:
                if (FUNC_0 (&VAR_1, "/dev/fd/%d", VAR_5) == -1)
                    VAR_1 = ((void*)0);
        }





    }

out:
    FUNC_1 (VAR_3);
    return VAR_1;
}
