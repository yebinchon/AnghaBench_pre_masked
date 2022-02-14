
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
struct vlc_http_stream {int dummy; } ;
struct vlc_http_msg {int dummy; } ;
struct vlc_http_conn {int dummy; } ;
struct addrinfo {struct addrinfo* ai_next; int ai_protocol; int ai_socktype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char const*,unsigned int,struct addrinfo*,struct addrinfo**) ;
 struct vlc_http_conn* FUNC_4 (void*,int *,int) ;
 int FUNC_5 (struct vlc_http_conn*) ;
 int FUNC_6 (void*,char*,char const*) ;
 int FUNC_7 (void*,char*,char const*,...) ;
 struct vlc_http_stream* FUNC_8 (struct vlc_http_conn*,struct vlc_http_msg const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (struct addrinfo const*,int) ;

struct vlc_http_stream *FUNC_12(void *VAR_3, const char *VAR_4,
                                       unsigned VAR_5, bool VAR_6,
                                       const struct vlc_http_msg *VAR_7,
                                       bool VAR_8,
                                       struct vlc_http_conn **restrict VAR_9)
{
    struct addrinfo VAR_10 =
    {
        .ai_socktype = VAR_1,
        .ai_protocol = VAR_0,
    }, *VAR_11;

    FUNC_6(VAR_3, "resolving %s ...", VAR_4);

    int VAR_12 = FUNC_3(VAR_4, VAR_5, &VAR_10, &VAR_11);
    if (VAR_12 != 0)
    {
        FUNC_7(VAR_3, "cannot resolve %s: %s", VAR_4,
                     FUNC_1(VAR_12));
        return ((void*)0);
    }

    for (const struct addrinfo *VAR_13 = VAR_11; VAR_13 != ((void*)0); VAR_13 = VAR_13->ai_next)
    {
        vlc_tls_t *VAR_14 = FUNC_11(VAR_13, VAR_8);
        if (VAR_14 == ((void*)0))
        {
            FUNC_7(VAR_3, "socket error: %s", FUNC_9(VAR_2));
            continue;
        }

        struct vlc_http_conn *VAR_15 = FUNC_4(VAR_3, VAR_14, VAR_6);
        if (FUNC_2(VAR_15 == ((void*)0)))
        {
            FUNC_10(VAR_14);
            continue;
        }


        struct vlc_http_stream *VAR_16 = FUNC_8(VAR_15, VAR_7);

        if (VAR_16 != ((void*)0))
        {
            if (VAR_9 != ((void*)0))
                *VAR_9 = VAR_15;
            else
                FUNC_5(VAR_15);

            FUNC_0(VAR_11);
            return VAR_16;
        }

        FUNC_5(VAR_15);

        if (!VAR_8)
            break;
    }


    FUNC_0(VAR_11);
    return ((void*)0);
}
