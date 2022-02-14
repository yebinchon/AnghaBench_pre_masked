
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_4__ {int ip_masquerade_done; int prefixlen; int family; union in_addr_union in_addr; struct TYPE_4__* link; } ;
typedef TYPE_1__ Address ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int ,int ,union in_addr_union*,int ,int *,int *,int ) ;
 int FUNC_2 (int ,union in_addr_union*,int ) ;

__attribute__((used)) static int FUNC_3(Address *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->link);


        if (VAR_1->ip_masquerade_done) {
                union in_addr_union VAR_3 = VAR_1->in_addr;
                FUNC_2(VAR_1->family, &VAR_3, VAR_1->prefixlen);

                VAR_2 = FUNC_1(0, VAR_0, 0, &VAR_3, VAR_1->prefixlen, ((void*)0), ((void*)0), 0);
                if (VAR_2 < 0)
                        return VAR_2;

                VAR_1->ip_masquerade_done = 0;
        }

        return 0;
}
