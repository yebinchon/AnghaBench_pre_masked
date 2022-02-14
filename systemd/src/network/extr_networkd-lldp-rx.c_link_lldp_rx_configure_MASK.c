
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int lldp; int mac; TYPE_1__* network; int ifindex; } ;
struct TYPE_6__ {scalar_t__ lldp_mode; } ;
typedef TYPE_2__ Link ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(Link *VAR_4) {
        int VAR_5;

        VAR_5 = FUNC_3(&VAR_4->lldp);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_6(VAR_4->lldp, VAR_4->ifindex);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_2(VAR_4->lldp,
                                       VAR_4->network->lldp_mode == VAR_0 ?
                                       VAR_2 :
                                       VAR_1);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_5(VAR_4->lldp, &VAR_4->mac);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_1(VAR_4->lldp, ((void*)0), 0);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_4(VAR_4->lldp, VAR_3, VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_0(VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        return 0;
}
