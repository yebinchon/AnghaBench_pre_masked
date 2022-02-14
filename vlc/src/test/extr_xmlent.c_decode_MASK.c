
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,...) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6 (const char *VAR_0, const char *VAR_1)
{
    char VAR_2[FUNC_4 (VAR_0) + 1];

    FUNC_1 ("\"%s\" -> \"%s\" ?\n", VAR_0, VAR_1);
    FUNC_3 (VAR_2, VAR_0);
    FUNC_5 (VAR_2);

    if (FUNC_2 (VAR_2, VAR_1))
    {
        FUNC_1 (" ERROR: got \"%s\"\n", VAR_2);
        FUNC_0 (2);
    }
}
