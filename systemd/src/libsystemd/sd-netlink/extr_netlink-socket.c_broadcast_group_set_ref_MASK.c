
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int broadcast_group_refs; } ;
typedef TYPE_1__ sd_netlink ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(sd_netlink *VAR_0, unsigned VAR_1, unsigned VAR_2) {
        int VAR_3;

        FUNC_1(VAR_0);

        VAR_3 = FUNC_2(VAR_0->broadcast_group_refs, FUNC_0(VAR_1), FUNC_0(VAR_2));
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
