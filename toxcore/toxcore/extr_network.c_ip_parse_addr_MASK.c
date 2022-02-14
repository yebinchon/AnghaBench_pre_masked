
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in_addr {int dummy; } ;
typedef struct in_addr in6_addr ;
struct TYPE_3__ {scalar_t__ family; int ip6; int ip4; } ;
typedef TYPE_1__ IP ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (scalar_t__,struct in_addr*,char*,size_t) ;

int FUNC_1(const IP *VAR_2, char *VAR_3, size_t VAR_4)
{
    if (!VAR_3 || !VAR_2) {
        return 0;
    }

    if (VAR_2->family == VAR_0) {
        struct in_addr *VAR_5 = (struct in_addr *)&VAR_2->ip4;
        return FUNC_0(VAR_2->family, VAR_5, VAR_3, VAR_4) != ((void*)0);
    } else if (VAR_2->family == VAR_1) {
        struct in6_addr *VAR_6 = (struct in6_addr *)&VAR_2->ip6;
        return FUNC_0(VAR_2->family, VAR_6, VAR_3, VAR_4) != ((void*)0);
    }

    return 0;
}
