
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
typedef int vlc_tls_client_t ;
struct addrinfo {struct addrinfo* ai_next; int ai_protocol; int ai_socktype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *,char*,char const*,...) ;
 int FUNC_4 (char const*,unsigned int,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,int *,char const*,char const*,char const* const*,char**) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (struct addrinfo const*,int) ;

vlc_tls_t *FUNC_9(vlc_tls_client_t *VAR_3, const char *VAR_4,
                                 unsigned VAR_5, const char *VAR_6,
                                 const char *const *VAR_7, char **VAR_8)
{
    struct addrinfo VAR_9 =
    {
        .ai_socktype = VAR_1,
        .ai_protocol = VAR_0,
    }, *VAR_10;

    FUNC_2(VAR_3, "resolving %s ...", VAR_4);

    int VAR_11 = FUNC_4(VAR_4, VAR_5, &VAR_9, &VAR_10);
    if (VAR_11 != 0)
    {
        FUNC_3(VAR_3, "cannot resolve %s port %u: %s", VAR_4, VAR_5,
                FUNC_1(VAR_11));
        return ((void*)0);
    }

    for (const struct addrinfo *VAR_12 = VAR_10; VAR_12 != ((void*)0); VAR_12 = VAR_12->ai_next)
    {
        vlc_tls_t *VAR_13 = FUNC_8(VAR_12, 1);
        if (VAR_13 == ((void*)0))
        {
            FUNC_3(VAR_3, "socket error: %s", FUNC_5(VAR_2));
            continue;
        }

        vlc_tls_t *VAR_14 = FUNC_6(VAR_3, VAR_13, VAR_4, VAR_6,
                                                     VAR_7, VAR_8);
        if (VAR_14 != ((void*)0))
        {
            FUNC_0(VAR_10);
            return VAR_14;
        }

        FUNC_3(VAR_3, "connection error: %s", FUNC_5(VAR_2));
        FUNC_7(VAR_13);
    }


    FUNC_0(VAR_10);
    return ((void*)0);
}
