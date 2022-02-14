
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int psz_password; int psz_username; int i_port; int * psz_host; int * psz_protocol; } ;
typedef TYPE_1__ vlc_url_t ;
struct TYPE_15__ {int * p; int * ops; } ;
typedef TYPE_2__ vlc_tls_t ;
struct TYPE_16__ {TYPE_2__ tls; TYPE_2__* sock; } ;
typedef TYPE_3__ vlc_tls_proxy_t ;
typedef int vlc_tls_client_t ;
struct vlc_http_msg {int dummy; } ;
struct vlc_http_conn {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 struct vlc_http_conn* FUNC_8 (void*,TYPE_2__*,int) ;
 int FUNC_9 (struct vlc_http_conn*) ;
 struct vlc_http_msg* FUNC_10 (struct vlc_http_conn*,char const*,unsigned int,int ,int ) ;
 TYPE_2__* FUNC_11 (int *,int *,int ,int*) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 TYPE_2__* FUNC_15 (int *,TYPE_2__*,char const*,char*,char const**,char**) ;
 int FUNC_16 (TYPE_2__*) ;
 TYPE_2__* FUNC_17 (int *,int *,int ) ;
 int VAR_0 ;

vlc_tls_t *FUNC_18(void *VAR_1, vlc_tls_client_t *VAR_2,
                                   const char *VAR_3, unsigned VAR_4,
                                   bool *restrict VAR_5, const char *VAR_6)
{
    vlc_url_t VAR_7;
    int VAR_8;

    FUNC_0(VAR_6 != ((void*)0));

    if (VAR_4 == 0)
        VAR_4 = 443;

    VAR_8 = FUNC_14();
    FUNC_7(&VAR_7, VAR_6);
    FUNC_13(VAR_8);

    if (VAR_7.psz_protocol == ((void*)0) || VAR_7.psz_host == ((void*)0))
    {
        FUNC_6(&VAR_7);
        return ((void*)0);
    }

    vlc_tls_t *VAR_9 = ((void*)0);
    bool VAR_10 = 0;
    if (!FUNC_3(VAR_7.psz_protocol, "https"))
        VAR_9 = FUNC_11(VAR_2, VAR_7.psz_host, VAR_7.i_port, &VAR_10);
    else
    if (!FUNC_3(VAR_7.psz_protocol, "http"))
        VAR_9 = FUNC_17(VAR_2 ? FUNC_12(VAR_2) : ((void*)0),
                                     VAR_7.psz_host, VAR_7.i_port);
    else
        VAR_9 = ((void*)0);

    if (VAR_9 == ((void*)0))
    {
        FUNC_6(&VAR_7);
        return ((void*)0);
    }

    FUNC_0(!VAR_10);

    vlc_tls_proxy_t *VAR_11 = FUNC_2(sizeof (*VAR_11));
    if (FUNC_5(VAR_11 == ((void*)0)))
    {
        FUNC_6(&VAR_7);
        goto error;
    }

    VAR_11->tls.ops = &VAR_0;
    VAR_11->tls.p = ((void*)0);
    VAR_11->sock = VAR_9;

    struct vlc_http_conn *VAR_12 = FUNC_8(VAR_1, &VAR_11->tls, 0);

    if (FUNC_5(VAR_12 == ((void*)0)))
    {
        FUNC_16(&VAR_11->tls);
        FUNC_6(&VAR_7);
        goto error;
    }

    struct vlc_http_msg *VAR_13 = FUNC_10(VAR_12, VAR_3, VAR_4,
                                                     VAR_7.psz_username,
                                                     VAR_7.psz_password);
    FUNC_6(&VAR_7);


    FUNC_9(VAR_12);

    if (VAR_13 == ((void*)0))
        goto error;

    vlc_tls_t *VAR_14;
    const char *VAR_15[] = { "h2", "http/1.1", ((void*)0) };
    char *VAR_16;

    VAR_14 = FUNC_15(VAR_2, VAR_9, VAR_3, "https",
                                      VAR_15 + !*VAR_5, &VAR_16);
    if (VAR_14 == ((void*)0))
        goto error;

    *VAR_5 = (VAR_16 != ((void*)0)) && !FUNC_4(VAR_16, "h2");
    FUNC_1(VAR_16);
    return VAR_14;
error:
    FUNC_16(VAR_9);
    return ((void*)0);
}
