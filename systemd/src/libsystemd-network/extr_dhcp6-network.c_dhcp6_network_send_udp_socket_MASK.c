
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin6_addr; int sin6_port; int sin6_family; } ;
union sockaddr_union {int sa; TYPE_1__ in6; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in6_addr*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct in6_addr*,int) ;
 int FUNC_3 (int,void const*,size_t,int ,int *,int) ;

int FUNC_4(int VAR_3, struct in6_addr *VAR_4,
                                  const void *VAR_5, size_t VAR_6) {
        union sockaddr_union VAR_7 = {
                .in6.sin6_family = VAR_0,
                .in6.sin6_port = FUNC_1(VAR_1),
        };
        int VAR_8;

        FUNC_0(VAR_4);

        FUNC_2(&VAR_7.in6.sin6_addr, VAR_4, sizeof(VAR_7.in6.sin6_addr));

        VAR_8 = FUNC_3(VAR_3, VAR_5, VAR_6, 0, &VAR_7.sa, sizeof(VAR_7.in6));
        if (VAR_8 < 0)
                return -VAR_2;

        return 0;
}
