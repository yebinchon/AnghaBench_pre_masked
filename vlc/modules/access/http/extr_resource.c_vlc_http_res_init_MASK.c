
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* psz_host; char const* psz_username; char const* psz_password; char* psz_path; int * psz_option; int i_port; int * psz_protocol; } ;
typedef TYPE_1__ vlc_url_t ;
struct vlc_http_resource_cbs {int dummy; } ;
struct vlc_http_resource {int secure; int negotiate; int failure; int * path; int * authority; int * host; struct vlc_http_mgr* manager; int * referrer; int * agent; int * password; int * username; int port; int * response; struct vlc_http_resource_cbs const* cbs; } ;
struct vlc_http_mgr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,char*,char const*,int *) ;
 int VAR_2 ;
 int * FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (char const*,int ) ;
 int FUNC_7 (struct vlc_http_resource*) ;

int FUNC_8(struct vlc_http_resource *restrict VAR_3,
                      const struct vlc_http_resource_cbs *VAR_4,
                      struct vlc_http_mgr *VAR_5,
                      const char *VAR_6, const char *VAR_7, const char *VAR_8)
{
    vlc_url_t VAR_9;
    bool VAR_10;

    if (FUNC_4(&VAR_9, VAR_6))
        goto error;
    if (VAR_9.psz_protocol == ((void*)0) || VAR_9.psz_host == ((void*)0))
    {
        VAR_2 = VAR_0;
        goto error;
    }

    if (!FUNC_5(VAR_9.psz_protocol, "https"))
        VAR_10 = 1;
    else if (!FUNC_5(VAR_9.psz_protocol, "http"))
        VAR_10 = 0;
    else
    {
        VAR_2 = VAR_1;
        goto error;
    }

    VAR_3->cbs = VAR_4;
    VAR_3->response = ((void*)0);
    VAR_3->secure = VAR_10;
    VAR_3->negotiate = 1;
    VAR_3->failure = 0;
    VAR_3->host = FUNC_1(VAR_9.psz_host);
    VAR_3->port = VAR_9.i_port;
    VAR_3->authority = FUNC_6(VAR_9.psz_host, VAR_9.i_port);
    VAR_3->username = (VAR_9.psz_username != ((void*)0)) ? FUNC_1(VAR_9.psz_username)
                                               : ((void*)0);
    VAR_3->password = (VAR_9.psz_password != ((void*)0)) ? FUNC_1(VAR_9.psz_password)
                                               : ((void*)0);
    VAR_3->agent = (VAR_7 != ((void*)0)) ? FUNC_1(VAR_7) : ((void*)0);
    VAR_3->referrer = (VAR_8 != ((void*)0)) ? FUNC_1(VAR_8) : ((void*)0);

    const char *VAR_11 = VAR_9.psz_path;
    if (VAR_11 == ((void*)0))
        VAR_11 = "/";

    if (VAR_9.psz_option != ((void*)0))
    {
        if (FUNC_0(&VAR_3->path, "%s?%s", VAR_11, VAR_9.psz_option) == -1)
            VAR_3->path = ((void*)0);
    }
    else
        VAR_3->path = FUNC_1(VAR_11);

    FUNC_3(&VAR_9);
    VAR_3->manager = VAR_5;

    if (FUNC_2(VAR_3->host == ((void*)0) || VAR_3->authority == ((void*)0)
              || VAR_3->path == ((void*)0)))
    {
        FUNC_7(VAR_3);
        return -1;
    }
    return 0;
error:
    FUNC_3(&VAR_9);
    return -1;
}
