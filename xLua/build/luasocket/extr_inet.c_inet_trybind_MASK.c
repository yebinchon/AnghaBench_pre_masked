
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ t_socket ;
struct addrinfo {scalar_t__ ai_addrlen; scalar_t__ ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int socklen_t ;
typedef scalar_t__* p_socket ;
typedef int SA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (scalar_t__*,int *,int ) ;
 int FUNC_3 (scalar_t__*,int ,int ,int ) ;
 int FUNC_4 (scalar_t__*) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

const char *FUNC_8(p_socket VAR_1, const char *VAR_2, const char *VAR_3,
        struct addrinfo *VAR_4)
{
    struct addrinfo *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    const char *VAR_7 = ((void*)0);
    t_socket VAR_8 = *VAR_1;

    if (FUNC_7(VAR_2, "*") == 0) VAR_2 = ((void*)0);
    if (!VAR_3) VAR_3 = "0";

    VAR_7 = FUNC_5(FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6));
    if (VAR_7) {
        if (VAR_6) FUNC_0(VAR_6);
        return VAR_7;
    }

    for (VAR_5 = VAR_6; VAR_5; VAR_5 = VAR_5->ai_next) {
        if(VAR_8 == VAR_0) {
            VAR_7 = FUNC_6(FUNC_3(&VAR_8, VAR_5->ai_family,
                        VAR_5->ai_socktype, VAR_5->ai_protocol));
            if(VAR_7)
                continue;
        }

        VAR_7 = FUNC_6(FUNC_2(&VAR_8,
            (SA *) VAR_5->ai_addr,
            (socklen_t) VAR_5->ai_addrlen));


        if (VAR_7) {
            if(VAR_8 != *VAR_1)
                FUNC_4(&VAR_8);
        } else {

            *VAR_4 = *VAR_5;
            break;
        }
    }

    FUNC_0(VAR_6);
    *VAR_1 = VAR_8;
    return VAR_7;
}
