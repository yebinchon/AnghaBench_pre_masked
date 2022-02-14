
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_sysdir_t ;







 int FUNC_0 (char**,char*,char*,char const*) ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;

char *FUNC_6(vlc_sysdir_t VAR_0, const char *VAR_1)
{
    char *VAR_2 = ((void*)0);

    switch (VAR_0)
    {
        case 131:
            VAR_2 = FUNC_1();
            break;
        case 129:
        case 130:
            VAR_2 = FUNC_2();
            break;
        case 128:
            break;
        case 132:
            VAR_2 = FUNC_6(131, "locale");
            break;
        default:
            FUNC_5();
    }

    if (VAR_1 == ((void*)0) || FUNC_4(VAR_2 == ((void*)0)))
        return VAR_2;

    char *VAR_3;
    if (FUNC_4(FUNC_0(&VAR_3, "%s/%s", VAR_2, VAR_1) == -1))
        VAR_3 = ((void*)0);
    FUNC_3(VAR_2);
    return VAR_3;
}
