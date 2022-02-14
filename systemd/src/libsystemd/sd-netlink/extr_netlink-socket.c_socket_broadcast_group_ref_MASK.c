
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int broadcast_group_refs; } ;
typedef TYPE_1__ sd_netlink ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(sd_netlink *VAR_0, unsigned VAR_1) {
        unsigned VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_1(VAR_0, VAR_1);

        VAR_2++;

        VAR_3 = FUNC_4(&VAR_0->broadcast_group_refs, ((void*)0));
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        if (VAR_2 > 1)

                return 0;

        VAR_3 = FUNC_2(VAR_0, VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
