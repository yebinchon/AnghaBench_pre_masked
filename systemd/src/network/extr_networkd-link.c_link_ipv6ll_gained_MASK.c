
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_8__ {int state; struct in6_addr ipv6ll_address; } ;
typedef TYPE_1__ Link ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

int FUNC_6(Link *VAR_2, const struct in6_addr *VAR_3) {
        int VAR_4;

        FUNC_1(VAR_2);

        FUNC_5(VAR_2, "Gained IPv6LL");

        VAR_2->ipv6ll_address = *VAR_3;
        FUNC_3(VAR_2);

        if (FUNC_0(VAR_2->state, VAR_1, VAR_0)) {
                VAR_4 = FUNC_2(VAR_2);
                if (VAR_4 < 0) {
                        FUNC_4(VAR_2);
                        return VAR_4;
                }
        }

        return 0;
}
