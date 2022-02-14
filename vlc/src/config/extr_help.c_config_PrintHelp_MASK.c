
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int) ;

bool FUNC_8 (vlc_object_t *VAR_1)
{
    char *VAR_2;


    if (FUNC_5 (VAR_1, "help"))
    {
        FUNC_0 (VAR_1, "help");
        return 1;
    }


    if (FUNC_5 (VAR_1, "version"))
    {
        FUNC_2();
        return 1;
    }


    VAR_2 = FUNC_6 (VAR_1, "module");
    if (VAR_2 != ((void*)0))
    {
        FUNC_0 (VAR_1, VAR_2);
        FUNC_3 (VAR_2);
        return 1;
    }


    if (FUNC_5 (VAR_1, "full-help"))
    {
        FUNC_4 (VAR_1, "help-verbose", VAR_0);
        FUNC_7 (VAR_1, "help-verbose", 1);
        FUNC_0 (VAR_1, "full-help");
        return 1;
    }


    if (FUNC_5 (VAR_1, "longhelp"))
    {
        FUNC_0 (VAR_1, "longhelp");
        return 1;
    }


    if (FUNC_5 (VAR_1, "list"))
    {
        FUNC_1 (VAR_1, 0 );
        return 1;
    }

    if (FUNC_5 (VAR_1, "list-verbose"))
    {
        FUNC_1 (VAR_1, 1);
        return 1;
    }

    return 0;
}
