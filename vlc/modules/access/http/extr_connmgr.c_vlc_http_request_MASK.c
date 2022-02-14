
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* psz_host; int i_port; } ;
typedef TYPE_1__ vlc_url_t ;
struct vlc_http_stream {int dummy; } ;
struct vlc_http_msg {int dummy; } ;
struct vlc_http_mgr {struct vlc_http_conn* conn; int logger; int * creds; } ;
struct vlc_http_conn {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct vlc_http_stream* FUNC_3 (int ,char const*,unsigned int,int,struct vlc_http_msg const*,int,struct vlc_http_conn**) ;
 int FUNC_4 (struct vlc_http_conn*) ;
 struct vlc_http_msg* FUNC_5 (struct vlc_http_mgr*,char const*,unsigned int,struct vlc_http_msg const*) ;
 struct vlc_http_msg* FUNC_6 (struct vlc_http_stream*) ;
 char* FUNC_7 (char const*,unsigned int,int) ;

__attribute__((used)) static struct vlc_http_msg *FUNC_8(struct vlc_http_mgr *VAR_0,
                                             const char *VAR_1, unsigned VAR_2,
                                             const struct vlc_http_msg *VAR_3)
{
    if (VAR_0->creds != ((void*)0) && VAR_0->conn != ((void*)0))
        return ((void*)0);

    struct vlc_http_msg *VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_4 != ((void*)0))
        return VAR_4;

    struct vlc_http_conn *VAR_5;
    struct vlc_http_stream *VAR_6;

    char *VAR_7 = FUNC_7(VAR_1, VAR_2, 0);
    if (VAR_7 != ((void*)0))
    {
        vlc_url_t VAR_8;

        FUNC_2(&VAR_8, VAR_7);
        FUNC_0(VAR_7);

        if (VAR_8.psz_host != ((void*)0))
            VAR_6 = FUNC_3(VAR_0->logger, VAR_8.psz_host,
                                    VAR_8.i_port ? VAR_8.i_port : 80, 1, VAR_3,
                                    1, &VAR_5);
        else
            VAR_6 = ((void*)0);

        FUNC_1(&VAR_8);
    }
    else
        VAR_6 = FUNC_3(VAR_0->logger, VAR_1, VAR_2 ? VAR_2 : 80, 0,
                                VAR_3, 1, &VAR_5);

    if (VAR_6 == ((void*)0))
        return ((void*)0);

    VAR_4 = FUNC_6(VAR_6);
    if (VAR_4 == ((void*)0))
    {
        FUNC_4(VAR_5);
        return ((void*)0);
    }

    VAR_0->conn = VAR_5;
    return VAR_4;
}
