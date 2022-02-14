
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct addrinfo {scalar_t__ ai_socktype; int ai_protocol; int ai_flags; scalar_t__ ai_family; int ai_addrlen; int ai_addr; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,char const*,unsigned int,char const*,unsigned int) ;
 int FUNC_4 (int *,char*,char const*,unsigned int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char const*,unsigned int,int) ;
 int FUNC_7 (int *,int,struct addrinfo*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_10 (int *,int,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_11 (char const*,unsigned int,struct addrinfo*,struct addrinfo**) ;
 int FUNC_12 (int ) ;

int FUNC_13( vlc_object_t *VAR_5, const char *VAR_6, unsigned VAR_7,
                   const char *VAR_8, unsigned VAR_9, int VAR_10 )
{
    if ((VAR_8 == ((void*)0)) || (VAR_8[0] == '\0'))
        return FUNC_6 (VAR_5, VAR_6, VAR_7, VAR_10);

    FUNC_3 (VAR_5, "net: connecting to [%s]:%u from [%s]:%u",
             VAR_8, VAR_9, VAR_6, VAR_7);

    struct addrinfo VAR_11 = {
        .ai_socktype = VAR_3,
        .ai_protocol = VAR_10,
        .ai_flags = VAR_1 | VAR_0,
    }, *VAR_12, *VAR_13;

    int VAR_14 = FUNC_11 (VAR_8, VAR_9, &VAR_11, &VAR_13);
    if (VAR_14)
    {
        FUNC_4 (VAR_5, "cannot resolve %s port %u : %s", VAR_8, VAR_9,
                 FUNC_2 (VAR_14));
        return -1;
    }

    VAR_11.ai_flags |= VAR_2;
    VAR_14 = FUNC_11 (VAR_6, VAR_7, &VAR_11, &VAR_12);
    if (VAR_14)
    {
        FUNC_4 (VAR_5, "cannot resolve %s port %u : %s", VAR_6, VAR_7,
                 FUNC_2 (VAR_14));
        FUNC_1 (VAR_13);
        return -1;
    }

    VAR_14 = -1;
    for (struct addrinfo *VAR_15 = VAR_12; VAR_15 != ((void*)0); VAR_15 = VAR_15->ai_next)
    {
        int VAR_16 = FUNC_9 (VAR_5, VAR_15->ai_family, VAR_15->ai_socktype,
                             VAR_15->ai_protocol);
        if (VAR_16 == -1)
            continue;

        VAR_16 = FUNC_7( VAR_5, VAR_16, VAR_15 );
        if( VAR_16 == -1 )
            continue;

        for (struct addrinfo *VAR_17 = VAR_13; VAR_17 != ((void*)0); VAR_17 = VAR_17->ai_next)
        {
            if ((VAR_17->ai_family != VAR_15->ai_family)
             || (VAR_17->ai_socktype != VAR_15->ai_socktype)
             || (VAR_17->ai_protocol != VAR_15->ai_protocol))
                continue;

            if (FUNC_8 (VAR_15->ai_addr, VAR_15->ai_addrlen)
              ? FUNC_10 (VAR_5, VAR_16,
                                     VAR_17->ai_addr, VAR_17->ai_addrlen,
                                     VAR_15->ai_addr, VAR_15->ai_addrlen)
              : FUNC_0 (VAR_16, VAR_17->ai_addr, VAR_17->ai_addrlen))
            {
                FUNC_4 (VAR_5, "cannot connect to %s port %u: %s",
                         VAR_8, VAR_9, FUNC_12(VAR_4));
                continue;
            }
            VAR_14 = VAR_16;
            break;
        }

        if (VAR_14 != -1)
            break;

        FUNC_5 (VAR_16);
    }

    FUNC_1 (VAR_13);
    FUNC_1 (VAR_12);
    return VAR_14;
}
