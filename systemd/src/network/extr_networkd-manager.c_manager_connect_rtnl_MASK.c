
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rtnl; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int *,int ,int *,int *,TYPE_1__*,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(Manager *VAR_19) {
        int VAR_20, VAR_21;

        FUNC_0(VAR_19);

        VAR_20 = FUNC_6();
        if (VAR_20 < 0)
                VAR_21 = FUNC_4(&VAR_19->rtnl);
        else
                VAR_21 = FUNC_5(&VAR_19->rtnl, VAR_20);
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_3(VAR_19->rtnl, VAR_0);
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_2(VAR_19->rtnl, VAR_19->event, 0);
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_8, &VAR_14, ((void*)0), VAR_19, "network-rtnl_process_link");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_2, &VAR_14, ((void*)0), VAR_19, "network-rtnl_process_link");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_7, &VAR_13, ((void*)0), VAR_19, "network-rtnl_process_address");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_1, &VAR_13, ((void*)0), VAR_19, "network-rtnl_process_address");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_9, &VAR_15, ((void*)0), VAR_19, "network-rtnl_process_neighbor");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_3, &VAR_15, ((void*)0), VAR_19, "network-rtnl_process_neighbor");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_11, &VAR_17, ((void*)0), VAR_19, "network-rtnl_process_route");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_5, &VAR_17, ((void*)0), VAR_19, "network-rtnl_process_route");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_12, &VAR_18, ((void*)0), VAR_19, "network-rtnl_process_rule");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_6, &VAR_18, ((void*)0), VAR_19, "network-rtnl_process_rule");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_10, &VAR_16, ((void*)0), VAR_19, "network-rtnl_process_nexthop");
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_1(VAR_19->rtnl, ((void*)0), VAR_4, &VAR_16, ((void*)0), VAR_19, "network-rtnl_process_nexthop");
        if (VAR_21 < 0)
                return VAR_21;

        return 0;
}
