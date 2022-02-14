
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* psz_password; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int key ;
typedef int HKEY ;
typedef int DWORD ;
typedef unsigned char BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int *,int *,unsigned char*,int*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,char*) ;
 char* FUNC_11 (TYPE_1__*) ;

char *FUNC_12(const char *VAR_3)
{
    FUNC_3(VAR_3);

    char *VAR_4 = FUNC_4( "http-proxy" );
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    char *VAR_5 = FUNC_4( "http-proxy-pwd" );
    if (VAR_5 == ((void*)0))
        return VAR_4;

    vlc_url_t VAR_6;
    if (FUNC_10(&VAR_6, VAR_4) < 0) {
        FUNC_9(&VAR_6);
        FUNC_5 (VAR_4);
        FUNC_5 (VAR_5);
        return ((void*)0);
    }

    if (VAR_6.psz_password == ((void*)0) )
        VAR_6.psz_password = VAR_5;

    char *VAR_7 = FUNC_11 (&VAR_6);
    FUNC_9 (&VAR_6);

    FUNC_5 (VAR_5);
    FUNC_5 (VAR_4);
    return VAR_7;
}
