
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_sysdir_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (char**,char*,char*,char const*) ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;

char *FUNC_8(vlc_sysdir_t VAR_2, const char *VAR_3)
{
    char *VAR_4 = ((void*)0);

    switch (VAR_2)
    {
        case 131:
            VAR_4 = FUNC_1();
            break;
        case 129:
            VAR_4 = FUNC_2();
            break;
        case 130:
            VAR_4 = FUNC_3();
            break;
        case 128:
            VAR_4 = FUNC_4( VAR_1 );
            break;
        case 132:
            VAR_4 = FUNC_4( VAR_0 );
            break;
        default:
            FUNC_7();
    }

    if (VAR_3 == ((void*)0) || FUNC_6(VAR_4 == ((void*)0)))
        return VAR_4;

    char *VAR_5;
    FUNC_0(&VAR_5, "%s/%s", VAR_4, VAR_3);
    FUNC_5(VAR_4);
    return VAR_5;
}
