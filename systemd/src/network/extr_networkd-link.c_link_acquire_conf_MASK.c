
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_9__ {int ipv6ll_address; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,union in_addr_union const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,char*) ;

__attribute__((used)) static int FUNC_7(Link *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_2(VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        if (!FUNC_1(VAR_0, (const union in_addr_union*) &VAR_1->ipv6ll_address)) {
                VAR_2 = FUNC_3(VAR_1);
                if (VAR_2 < 0)
                        return VAR_2;
        }

        if (FUNC_4(VAR_1)) {
                VAR_2 = FUNC_5(VAR_1);
                if (VAR_2 < 0)
                        return FUNC_6(VAR_1, VAR_2, "Failed to start LLDP transmission: %m");
        }

        return 0;
}
