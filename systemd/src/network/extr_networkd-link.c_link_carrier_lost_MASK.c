
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int state; int dhcp_server; scalar_t__ setting_mtu; TYPE_1__* network; } ;
struct TYPE_12__ {scalar_t__ ignore_carrier_loss; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,char*,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(Link *VAR_2) {
        int VAR_3;

        FUNC_1(VAR_2);

        if (VAR_2->network && VAR_2->network->ignore_carrier_loss)
                return 0;




        if (VAR_2->setting_mtu)
                return 0;

        VAR_3 = FUNC_8(VAR_2, 0);
        if (VAR_3 < 0) {
                FUNC_5(VAR_2);
                return VAR_3;
        }

        if (FUNC_2(VAR_2))
                (void) FUNC_10(VAR_2->dhcp_server);

        VAR_3 = FUNC_3(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        if (!FUNC_0(VAR_2->state, VAR_1, VAR_0)) {
                FUNC_9(VAR_2, "State is %s, dropping config", FUNC_7(VAR_2->state));
                VAR_3 = FUNC_4(VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        VAR_3 = FUNC_6(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
