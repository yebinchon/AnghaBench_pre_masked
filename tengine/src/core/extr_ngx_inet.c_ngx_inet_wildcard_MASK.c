
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int ngx_uint_t ;




 int FUNC_0 (int *) ;
 int VAR_0 ;

ngx_uint_t
FUNC_1(struct sockaddr *VAR_1)
{
    struct sockaddr_in *VAR_2;




    switch (VAR_1->sa_family) {

    case 129:
        VAR_2 = (struct sockaddr_in *) VAR_1;

        if (VAR_2->sin_addr.s_addr == VAR_0) {
            return 1;
        }

        break;
    }

    return 0;
}
