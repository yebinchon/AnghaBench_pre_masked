
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_8__ {scalar_t__ family; scalar_t__ scope; int ip_masquerade_done; int prefixlen; union in_addr_union in_addr; TYPE_1__* network; } ;
struct TYPE_7__ {scalar_t__ ip_masquerade; } ;
typedef TYPE_2__ Link ;
typedef TYPE_2__ Address ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,scalar_t__,int ,union in_addr_union*,int ,int *,int *,int ) ;
 int FUNC_2 (scalar_t__,union in_addr_union*,int ) ;

__attribute__((used)) static int FUNC_3(Address *VAR_2, Link *VAR_3) {
        bool VAR_4;
        int VAR_5;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_4 = VAR_3->network &&
               VAR_3->network->ip_masquerade &&
               VAR_2->family == VAR_0 &&
               VAR_2->scope < VAR_1;


        if (VAR_2->ip_masquerade_done != VAR_4) {
                union in_addr_union VAR_6 = VAR_2->in_addr;
                FUNC_2(VAR_2->family, &VAR_6, VAR_2->prefixlen);

                VAR_5 = FUNC_1(VAR_4, VAR_0, 0, &VAR_6, VAR_2->prefixlen, ((void*)0), ((void*)0), 0);
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_2->ip_masquerade_done = VAR_4;
        }

        return 0;
}
