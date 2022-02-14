
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; scalar_t__ ai_addrlen; scalar_t__ ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; } ;
typedef int socklen_t ;
typedef int p_timeout ;
typedef int p_socket ;
typedef int SA ;


 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

const char *FUNC_9(p_socket VAR_0, int *VAR_1, const char *VAR_2,
        const char *VAR_3, p_timeout VAR_4, struct addrinfo *VAR_5)
{
    struct addrinfo *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    const char *VAR_8 = ((void*)0);

    VAR_8 = FUNC_5(FUNC_1(VAR_2, VAR_3,
                VAR_5, &VAR_7));
    if (VAR_8 != ((void*)0)) {
        if (VAR_7) FUNC_0(VAR_7);
        return VAR_8;
    }
    for (VAR_6 = VAR_7; VAR_6; VAR_6 = VAR_6->ai_next) {
        FUNC_8(VAR_4);





        if (*VAR_1 != VAR_6->ai_family) {
            FUNC_4(VAR_0);
            VAR_8 = FUNC_7(FUNC_3(VAR_0, VAR_6->ai_family,
                VAR_6->ai_socktype, VAR_6->ai_protocol));
            if (VAR_8 != ((void*)0)) {
                FUNC_0(VAR_7);
                return VAR_8;
            }
            *VAR_1 = VAR_6->ai_family;

            FUNC_6(VAR_0);
        }

        VAR_8 = FUNC_7(FUNC_2(VAR_0, (SA *) VAR_6->ai_addr,
            (socklen_t) VAR_6->ai_addrlen, VAR_4));

        if (VAR_8 == ((void*)0)) break;
    }
    FUNC_0(VAR_7);

    return VAR_8;
}
