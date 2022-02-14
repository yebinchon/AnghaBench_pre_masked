
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static void FUNC_3 (const char *VAR_0, const char *VAR_1, ssize_t VAR_2)
{
    FUNC_1 ("\"%s\" should %sbe found in \"%s\"...\n", VAR_1,
            (VAR_2 != -1) ? "" : "not ", VAR_0);

    const char *VAR_3 = FUNC_2 (VAR_0, VAR_1);
    if (VAR_2 == -1)
    {
        if (VAR_3 != ((void*)0))
        {
            FUNC_1 ("ERROR: got \"%s\"\n", VAR_3);
            FUNC_0 (10);
        }
    }
    else
    {
        if (VAR_3 == ((void*)0))
        {
            FUNC_1 ("ERROR: not found\n");
            FUNC_0 (11);
        }
        if ((VAR_3 - VAR_0) != VAR_2)
        {
            FUNC_1 ("ERROR: got \"%s\" instead of \"%s\"\n",
                    VAR_3, VAR_0 + VAR_2);
            FUNC_0 (12);
        }
    }
}
