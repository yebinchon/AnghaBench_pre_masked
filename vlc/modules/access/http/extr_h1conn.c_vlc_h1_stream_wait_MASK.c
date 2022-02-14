
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_http_stream {int dummy; } ;
struct vlc_http_msg {int dummy; } ;
struct TYPE_2__ {int * tls; } ;
struct vlc_h1_conn {int active; scalar_t__ content_length; int connection_close; TYPE_1__ conn; } ;


 int FUNC_0 (struct vlc_h1_conn*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct vlc_http_stream* FUNC_4 (struct vlc_http_stream*,int *) ;
 struct vlc_h1_conn* FUNC_5 (struct vlc_http_stream*) ;
 struct vlc_http_msg* FUNC_6 (struct vlc_h1_conn*) ;
 int FUNC_7 (int ,char*,int,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct vlc_http_msg*,struct vlc_http_stream*) ;
 int FUNC_10 (struct vlc_http_msg*) ;
 scalar_t__ FUNC_11 (struct vlc_http_msg*) ;
 char* FUNC_12 (struct vlc_http_msg*,char*,char*) ;
 struct vlc_http_msg* FUNC_13 (char*) ;
 int * FUNC_14 (char const*) ;
 char* FUNC_15 (int *,size_t*) ;

__attribute__((used)) static struct vlc_http_msg *FUNC_16(struct vlc_http_stream *VAR_1)
{
    struct vlc_h1_conn *VAR_2 = FUNC_5(VAR_1);
    struct vlc_http_msg *VAR_3;
    const char *VAR_4;
    size_t VAR_5;
    int VAR_6;

    FUNC_1(VAR_2->active);

    if (VAR_2->conn.tls == ((void*)0))
        return ((void*)0);

    char *VAR_7 = FUNC_15(VAR_2->conn.tls, &VAR_5);
    if (VAR_7 == ((void*)0))
        return FUNC_6(VAR_2);

    FUNC_7(FUNC_0(VAR_2), "incoming response:\n%.*s", (int)VAR_5, VAR_7);

    VAR_3 = FUNC_13(VAR_7);
    VAR_6 = FUNC_8(VAR_7);
    FUNC_2(VAR_7);

    if (VAR_3 == ((void*)0))
        return FUNC_6(VAR_2);

    FUNC_1(VAR_6 >= 0);

    VAR_2->content_length = FUNC_11(VAR_3);
    VAR_2->connection_close = 0;

    if (VAR_6 >= 1)
    {
        if (FUNC_12(VAR_3, "Connection", "close") != ((void*)0))
            VAR_2->connection_close = 1;

        VAR_4 = FUNC_12(VAR_3, "Transfer-Encoding", "chunked");
        if (VAR_4 != ((void*)0))
        {
            if (FUNC_14(VAR_4) != ((void*)0))
            {
                FUNC_10(VAR_3);
                return FUNC_6(VAR_2);
            }

            FUNC_1(VAR_2->content_length == VAR_0);
            VAR_1 = FUNC_4(VAR_1, VAR_2->conn.tls);
            if (FUNC_3(VAR_1 == ((void*)0)))
            {
                FUNC_10(VAR_3);
                return FUNC_6(VAR_2);
            }
        }
    }
    else
        VAR_2->connection_close = 1;

    FUNC_9(VAR_3, VAR_1);
    return VAR_3;
}
