
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,...) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8 (const char *VAR_0, const char *VAR_1)
{
    bool VAR_2 = !FUNC_6 (VAR_0, VAR_1);
    char *VAR_3 = FUNC_7 (VAR_0);
    if (VAR_3 == ((void*)0))
        FUNC_2 ();

    if (VAR_2)
        FUNC_5 ("\"%s\" should be accepted...\n", VAR_0);
    else
        FUNC_5 ("\"%s\" should be rewritten as \"%s\"...\n", VAR_0, VAR_1);

    if ((FUNC_1 (VAR_0) != ((void*)0)) != VAR_2)
    {
        FUNC_5 (" ERROR: IsUTF8 (%s) failed\n", VAR_0);
        FUNC_3 (1);
    }

    if ((FUNC_0 (VAR_3) != ((void*)0)) != VAR_2)
    {
        FUNC_5 (" ERROR: EnsureUTF8 (%s) failed\n", VAR_0);
        FUNC_3 (2);
    }

    if (FUNC_6 (VAR_3, VAR_1))
    {
        FUNC_5 (" ERROR: got \"%s\"\n", VAR_3);
        FUNC_3 (3);
    }

    if ((FUNC_0 (VAR_3) == ((void*)0)) || FUNC_1 (VAR_3) == ((void*)0))
    {
        FUNC_5 (" ERROR: EnsureUTF8 (%s) is not UTF-8\n", VAR_0);
        FUNC_3 (4);
    }
    FUNC_4 (VAR_3);
}
