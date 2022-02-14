
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int slaves; int ifindex; int manager; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(Link *VAR_0, NetDev *VAR_1) {
        Link *VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_3 = FUNC_1(VAR_0->manager, VAR_1->ifindex, &VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_3(&VAR_2->slaves, ((void*)0));
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_4(VAR_2->slaves, VAR_0);
        if (VAR_3 <= 0)
                return VAR_3;

        FUNC_2(VAR_0);
        return 0;
}
