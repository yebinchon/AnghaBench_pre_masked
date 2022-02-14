
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ndisc; int ifindex; int mac; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(Link *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_2(&VAR_1->ndisc);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_1(VAR_1->ndisc, ((void*)0), 0);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_5(VAR_1->ndisc, &VAR_1->mac);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_4(VAR_1->ndisc, VAR_1->ifindex);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_3(VAR_1->ndisc, VAR_0, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        return 0;
}
