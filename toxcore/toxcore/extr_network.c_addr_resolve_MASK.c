
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct addrinfo {int ai_family; int ai_addrlen; scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_socktype; } ;
typedef scalar_t__ sa_family_t ;
typedef int hints ;
struct TYPE_10__ {int in6_addr; } ;
struct TYPE_9__ {int in_addr; } ;
struct TYPE_11__ {scalar_t__ family; TYPE_2__ ip6; TYPE_1__ ip4; } ;
typedef TYPE_3__ IP ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_5 () ;

int FUNC_6(const char *VAR_4, IP *VAR_5, IP *VAR_6)
{
    if (!VAR_4 || !VAR_5)
        return 0;

    sa_family_t VAR_7 = VAR_5->family;

    struct addrinfo *VAR_8 = ((void*)0);
    struct addrinfo *VAR_9 = ((void*)0);
    struct addrinfo VAR_10;
    int VAR_11;
    int VAR_12 = 0;
    int VAR_13 = 0;

    FUNC_4(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.ai_family = VAR_7;
    VAR_10.ai_socktype = VAR_1;

    if (FUNC_5() != 0)
        return 0;

    VAR_11 = FUNC_1(VAR_4, ((void*)0), &VAR_10, &VAR_8);


    if (VAR_11 != 0) {
        return 0;
    }

    IP VAR_14;
    FUNC_3(&VAR_14, 0);
    IP VAR_15;
    FUNC_3(&VAR_15, 1);

    for (VAR_9 = VAR_8; (VAR_9 != ((void*)0)) && !VAR_13; VAR_9 = VAR_9->ai_next) {
        switch (VAR_9->ai_family) {
            case 129:
                if (VAR_9->ai_family == VAR_7) {
                    struct sockaddr_in *VAR_16 = (struct sockaddr_in *)VAR_9->ai_addr;
                    VAR_5->ip4.in_addr = VAR_16->sin_addr;
                    VAR_12 = VAR_2;
                    VAR_13 = 1;
                } else if (!(VAR_12 & VAR_2)) {
                    struct sockaddr_in *VAR_17 = (struct sockaddr_in *)VAR_9->ai_addr;
                    VAR_14 = VAR_17->sin_addr;
                    VAR_12 |= VAR_2;
                }

                break;

            case 128:
                if (VAR_9->ai_family == VAR_7) {
                    if (VAR_9->ai_addrlen == sizeof(struct sockaddr_in6)) {
                        struct sockaddr_in6 *VAR_18 = (struct sockaddr_in6 *)VAR_9->ai_addr;
                        VAR_5->ip6.in6_addr = VAR_18->sin6_addr;
                        VAR_12 = VAR_3;
                        VAR_13 = 1;
                    }
                } else if (!(VAR_12 & VAR_3)) {
                    if (VAR_9->ai_addrlen == sizeof(struct sockaddr_in6)) {
                        struct sockaddr_in6 *VAR_19 = (struct sockaddr_in6 *)VAR_9->ai_addr;
                        VAR_15 = VAR_19->sin6_addr;
                        VAR_12 |= VAR_3;
                    }
                }

                break;
        }
    }

    if (VAR_7 == VAR_0) {
        if (VAR_12 & VAR_3) {
            FUNC_2(VAR_5, &VAR_15);

            if ((VAR_12 & VAR_2) && (VAR_6 != ((void*)0))) {
                FUNC_2(VAR_6, &VAR_14);
            }
        } else if (VAR_12 & VAR_2) {
            FUNC_2(VAR_5, &VAR_14);
        } else {
            VAR_12 = 0;
        }
    }

    FUNC_0(VAR_8);
    return VAR_12;
}
