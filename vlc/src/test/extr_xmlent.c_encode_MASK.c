
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6 (const char *VAR_0, const char *VAR_1)
{
    char *VAR_2;

    FUNC_2 ("\"%s\" -> \"%s\" ?\n", VAR_0, VAR_1);
    VAR_2 = FUNC_5 (VAR_0);

    if (VAR_2 == ((void*)0))
    {
        FUNC_3(" ERROR: got NULL");
        FUNC_0(2);
    }

    if (FUNC_4 (VAR_2, VAR_1))
    {
        FUNC_2 (" ERROR: got \"%s\"\n", VAR_2);
        FUNC_0 (2);
    }
    FUNC_1 (VAR_2);
}
