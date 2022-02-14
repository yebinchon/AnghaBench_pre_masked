
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct addrinfo {int ai_socktype; int ai_protocol; int ai_flags; int ai_addrlen; int ai_addr; int ai_family; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int*,unsigned int) ;
 int FUNC_9 (int ,int,int,int ,int ) ;
 int FUNC_10 (char const*,unsigned int,struct addrinfo*,struct addrinfo**) ;
 int FUNC_11 (int) ;

int *FUNC_12 (vlc_object_t *VAR_5, const char *VAR_6,
                 unsigned VAR_7, int VAR_8, int VAR_9)
{
    struct addrinfo VAR_10 = {
        .ai_socktype = VAR_8,
        .ai_protocol = VAR_9,
        .ai_flags = VAR_2 | VAR_1 | VAR_0,
    }, *VAR_11;

    FUNC_4 (VAR_5, "net: listening to %s port %u",
             (VAR_6 != ((void*)0)) ? VAR_6 : "*", VAR_7);

    int VAR_12 = FUNC_10 (VAR_6, VAR_7, &VAR_10, &VAR_11);
    if (VAR_12)
    {
        FUNC_5 (VAR_5, "Cannot resolve %s port %u : %s",
                 (VAR_6 != ((void*)0)) ? VAR_6 : "", VAR_7,
                 FUNC_2 (VAR_12));
        return ((void*)0);
    }

    int *VAR_13 = ((void*)0);
    unsigned VAR_14 = 0;

    for (struct addrinfo *VAR_15 = VAR_11; VAR_15 != ((void*)0); VAR_15 = VAR_15->ai_next)
    {
        int VAR_16 = FUNC_7 (VAR_5, VAR_15->ai_family, VAR_15->ai_socktype,
                             VAR_15->ai_protocol);
        if (VAR_16 == -1)
        {
            FUNC_4 (VAR_5, "socket error: %s", FUNC_11(VAR_4));
            continue;
        }


        if (FUNC_0 (VAR_16, VAR_15->ai_addr, VAR_15->ai_addrlen))
        {
            int VAR_17 = VAR_4;
            FUNC_6 (VAR_16);

            VAR_16 = FUNC_9 (VAR_15->ai_family, VAR_15->ai_socktype,
                                VAR_15->ai_protocol,
                                VAR_15->ai_addr, VAR_15->ai_addrlen);
            if (VAR_16 != -1)
            {
                FUNC_4 (VAR_5, "got socket %d from rootwrap", VAR_16);
            }
            else

            {
                FUNC_5 (VAR_5, "socket bind error: %s", FUNC_11(VAR_17));
                continue;
            }
        }


        if (FUNC_3(VAR_16, VAR_3))
        {
            FUNC_5(VAR_5, "socket listen error: %s",
                    FUNC_11(VAR_4));
            FUNC_6(VAR_16);
            continue;
        }

        int *VAR_18 = (int *)FUNC_8 (VAR_13, (VAR_14 + 2) * sizeof (int));
        if (VAR_18 != ((void*)0))
        {
            VAR_18[VAR_14++] = VAR_16;
            VAR_13 = VAR_18;
        }
        else
            FUNC_6 (VAR_16);
    }

    FUNC_1 (VAR_11);

    if (VAR_13 != ((void*)0))
        VAR_13[VAR_14] = -1;

    return VAR_13;
}
