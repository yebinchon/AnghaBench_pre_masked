
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* psz_path; int * psz_option; int i_port; int * psz_host; int psz_password; int psz_username; int * psz_protocol; } ;
typedef TYPE_1__ vlc_url_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;
 char* FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

char *FUNC_8(const char *VAR_0, const char *VAR_1)
{
    vlc_url_t VAR_2, VAR_3;
    vlc_url_t VAR_4;
    char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

    if (FUNC_4(&VAR_3, VAR_1))
    {
        FUNC_3(&VAR_3);
        return ((void*)0);
    }

    if (VAR_3.psz_protocol != ((void*)0))
    {
        FUNC_3(&VAR_3);
        return FUNC_1(VAR_1);
    }

    FUNC_4(&VAR_2, VAR_0);


    do
    {
        VAR_4 = VAR_3;
        VAR_4.psz_protocol = VAR_2.psz_protocol;

        if (VAR_3.psz_host != ((void*)0))
            break;

        VAR_4.psz_username = VAR_2.psz_username;
        VAR_4.psz_password = VAR_2.psz_password;
        VAR_4.psz_host = VAR_2.psz_host;
        VAR_4.i_port = VAR_2.i_port;

        if (VAR_3.psz_path == ((void*)0) || VAR_3.psz_path[0] == '\0')
        {
            VAR_4.psz_path = VAR_2.psz_path;
            if (VAR_3.psz_option == ((void*)0))
                VAR_4.psz_option = VAR_2.psz_option;
            break;
        }

        if (VAR_3.psz_path[0] == '/')
            break;

        VAR_5 = FUNC_6(VAR_2.psz_path, VAR_3.psz_path);
        if (FUNC_2(VAR_5 == ((void*)0)))
            goto error;

        VAR_4.psz_path = VAR_5;
    }
    while (0);

    if (VAR_4.psz_path != ((void*)0))
        FUNC_7(VAR_4.psz_path);

    VAR_6 = FUNC_5(&VAR_4);
error:
    FUNC_0(VAR_5);
    FUNC_3(&VAR_2);
    FUNC_3(&VAR_3);
    return VAR_6;
}
