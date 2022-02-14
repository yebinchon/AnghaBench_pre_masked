
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
struct vlc_http_msg {int dummy; } ;
struct vlc_http_mgr {struct vlc_http_conn* conn; int logger; int * creds; int obj; } ;
struct vlc_http_conn {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct vlc_http_conn* FUNC_2 (int ,int *,int) ;
 struct vlc_http_conn* FUNC_3 (int ,int *) ;
 struct vlc_http_msg* FUNC_4 (struct vlc_http_mgr*,char const*,unsigned int,struct vlc_http_msg const*) ;
 char* FUNC_5 (char const*,unsigned int,int) ;
 int * FUNC_6 (int *,char const*,unsigned int,int*) ;
 int * FUNC_7 (int *,int *,char const*,unsigned int,int*,char*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct vlc_http_msg *FUNC_10(struct vlc_http_mgr *VAR_0,
                                              const char *VAR_1, unsigned VAR_2,
                                              const struct vlc_http_msg *VAR_3)
{
    vlc_tls_t *VAR_4;
    bool VAR_5 = 1;

    if (VAR_0->creds == ((void*)0) && VAR_0->conn != ((void*)0))
        return ((void*)0);

    if (VAR_0->creds == ((void*)0))
    {
        VAR_0->creds = FUNC_8(VAR_0->obj);
        if (VAR_0->creds == ((void*)0))
            return ((void*)0);
    }


    struct vlc_http_msg *VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_6 != ((void*)0))
        return VAR_6;

    char *VAR_7 = FUNC_5(VAR_1, VAR_2, 1);
    if (VAR_7 != ((void*)0))
    {
        VAR_4 = FUNC_7(VAR_0->creds, VAR_0->creds,
                                      VAR_1, VAR_2, &VAR_5, VAR_7);
        FUNC_0(VAR_7);
    }
    else
        VAR_4 = FUNC_6(VAR_0->creds, VAR_1, VAR_2, &VAR_5);

    if (VAR_4 == ((void*)0))
        return ((void*)0);

    struct vlc_http_conn *VAR_8;
    if (VAR_5)
        VAR_8 = FUNC_3(VAR_0->logger, VAR_4);
    else
        VAR_8 = FUNC_2(VAR_0->logger, VAR_4, 0);

    if (FUNC_1(VAR_8 == ((void*)0)))
    {
        FUNC_9(VAR_4);
        return ((void*)0);
    }

    VAR_0->conn = VAR_8;

    return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
}
