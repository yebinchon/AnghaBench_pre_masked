
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_protocol; char* psz_path; char* psz_option; char* psz_fragment; int i_port; int * psz_host; int * psz_password; int * psz_username; } ;
typedef TYPE_1__ vlc_url_t ;
struct vlc_memstream {char* ptr; } ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vlc_memstream*) ;
 int FUNC_4 (struct vlc_memstream*) ;
 int FUNC_5 (struct vlc_memstream*,char const*,char*,...) ;
 int FUNC_6 (struct vlc_memstream*,char) ;
 int FUNC_7 (struct vlc_memstream*,char*) ;
 int FUNC_8 (struct vlc_memstream*,char*,int) ;
 char* FUNC_9 (int *) ;

char *FUNC_10(const vlc_url_t *VAR_0)
{
    struct vlc_memstream VAR_1;
    char *VAR_2;

    FUNC_4(&VAR_1);

    if (VAR_0->psz_protocol != ((void*)0))
        FUNC_5(&VAR_1, "%s:", VAR_0->psz_protocol);

    if (VAR_0->psz_host != ((void*)0))
    {
        FUNC_8(&VAR_1, "//", 2);

        if (VAR_0->psz_username != ((void*)0))
        {
            VAR_2 = FUNC_9(VAR_0->psz_username);
            if (VAR_2 == ((void*)0))
                goto error;

            FUNC_7(&VAR_1, VAR_2);
            FUNC_0(VAR_2);

            if (VAR_0->psz_password != ((void*)0))
            {
                VAR_2 = FUNC_9(VAR_0->psz_password);
                if (FUNC_2(VAR_2 == ((void*)0)))
                    goto error;

                FUNC_5(&VAR_1, ":%s", VAR_2);
                FUNC_0(VAR_2);
            }
            FUNC_6(&VAR_1, '@');
        }

        const char *VAR_3;

        if (FUNC_1(VAR_0->psz_host, ':') != ((void*)0))
            VAR_3 = (VAR_0->i_port != 0) ? "[%s]:%d" : "[%s]";
        else
            VAR_3 = (VAR_0->i_port != 0) ? "%s:%d" : "%s";

        FUNC_5(&VAR_1, VAR_3, VAR_0->psz_host, VAR_0->i_port);
    }

    if (VAR_0->psz_path != ((void*)0))
        FUNC_7(&VAR_1, VAR_0->psz_path);
    if (VAR_0->psz_option != ((void*)0))
        FUNC_5(&VAR_1, "?%s", VAR_0->psz_option);
    if (VAR_0->psz_fragment != ((void*)0))
        FUNC_5(&VAR_1, "#%s", VAR_0->psz_fragment);

    if (FUNC_3(&VAR_1))
        return ((void*)0);
    return VAR_1.ptr;

error:
    if (FUNC_3(&VAR_1) == 0)
        FUNC_0(VAR_1.ptr);
    return ((void*)0);
}
