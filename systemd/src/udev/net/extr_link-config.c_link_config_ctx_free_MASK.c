
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rtnl; int ethtool_fd; } ;
typedef TYPE_1__ link_config_ctx ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(link_config_ctx *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_2(VAR_0->ethtool_fd);

        FUNC_3(VAR_0->rtnl);

        FUNC_1(VAR_0);

        FUNC_0(VAR_0);

        return;
}
