
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int link; int scope; int flags; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ LinkAddress ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

int FUNC_5(LinkAddress *VAR_0, sd_netlink_message *VAR_1) {
        int VAR_2;
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = FUNC_3(VAR_1, &VAR_0->flags);
        if (VAR_2 < 0)
                return VAR_2;

        FUNC_4(VAR_1, &VAR_0->scope);

        FUNC_2(VAR_0->link);
        FUNC_1(VAR_0->link, 0);

        return 0;
}
