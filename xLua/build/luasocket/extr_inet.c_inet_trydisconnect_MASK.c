
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; void* sin6_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; void* sin_family; } ;
typedef int sin6 ;
typedef int sin ;
typedef int p_timeout ;
typedef int p_socket ;
typedef int SA ;


 void* VAR_0 ;
 struct in6_addr VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int *,int,int ) ;
 char const* FUNC_2 (int ) ;

const char *FUNC_3(p_socket VAR_3, int VAR_4, p_timeout VAR_5)
{
    switch (VAR_4) {
        case 129: {
            struct sockaddr_in VAR_6;
            FUNC_0((char *) &VAR_6, 0, sizeof(VAR_6));
            VAR_6.sin_family = VAR_0;
            VAR_6.sin_addr.s_addr = VAR_2;
            return FUNC_2(FUNC_1(VAR_3, (SA *) &VAR_6,
                sizeof(VAR_6), VAR_5));
        }
        case 128: {
            struct sockaddr_in6 VAR_7;
            struct in6_addr VAR_8 = VAR_1;
            FUNC_0((char *) &VAR_7, 0, sizeof(VAR_7));
            VAR_7 = VAR_0;
            VAR_7 = VAR_8;
            return FUNC_2(FUNC_1(VAR_3, (SA *) &VAR_7,
                sizeof(VAR_7), VAR_5));
        }
    }
    return ((void*)0);
}
