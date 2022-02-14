
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
typedef int vlc_object_t ;
struct addrinfo {struct addrinfo* ai_next; int ai_protocol; int ai_socktype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,char const*,...) ;
 int FUNC_4 (int *,char*,char const*,...) ;
 int FUNC_5 (char const*,unsigned int,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (struct addrinfo const*,int) ;

vlc_tls_t *FUNC_8(vlc_object_t *VAR_3, const char *VAR_4,
                                 unsigned VAR_5)
{
    struct addrinfo VAR_6 =
    {
        .ai_socktype = VAR_1,
        .ai_protocol = VAR_0,
    }, *VAR_7;

    FUNC_0(VAR_4 != ((void*)0));
    FUNC_3(VAR_3, "resolving %s ...", VAR_4);

    int VAR_8 = FUNC_5(VAR_4, VAR_5, &VAR_6, &VAR_7);
    if (VAR_8 != 0)
    {
        FUNC_4(VAR_3, "cannot resolve %s port %u: %s", VAR_4, VAR_5,
                FUNC_2(VAR_8));
        return ((void*)0);
    }

    FUNC_3(VAR_3, "connecting to %s port %u ...", VAR_4, VAR_5);


    for (const struct addrinfo *VAR_9 = VAR_7; VAR_9 != ((void*)0); VAR_9 = VAR_9->ai_next)
    {
        vlc_tls_t *VAR_10 = FUNC_7(VAR_9, 0);
        if (VAR_10 == ((void*)0))
        {
            FUNC_4(VAR_3, "connection error: %s", FUNC_6(VAR_2));
            continue;
        }

        FUNC_1(VAR_7);
        return VAR_10;
    }

    FUNC_1(VAR_7);
    return ((void*)0);
}
