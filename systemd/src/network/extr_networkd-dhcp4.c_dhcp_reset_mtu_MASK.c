
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_9__ {scalar_t__ original_mtu; int dhcp_lease; TYPE_1__* network; } ;
struct TYPE_8__ {int dhcp_use_mtu; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int,char*) ;
 int FUNC_4 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(Link *VAR_0) {
        uint16_t VAR_1;
        int VAR_2;

        FUNC_0(VAR_0);

        if (!VAR_0->network->dhcp_use_mtu)
                return 0;

        VAR_2 = FUNC_4(VAR_0->dhcp_lease, &VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        if (VAR_0->original_mtu == VAR_1)
                return 0;

        VAR_2 = FUNC_2(VAR_0, VAR_0->original_mtu);
        if (VAR_2 < 0) {
                FUNC_3(VAR_0, VAR_2, "DHCP error: could not reset MTU: %m");
                FUNC_1(VAR_0);
                return VAR_2;
        }

        return 0;
}
