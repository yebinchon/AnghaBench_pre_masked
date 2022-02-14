
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int links_by_name; int netdevs_by_name; int networks_by_name; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(Context *VAR_3) {
        if (!VAR_3)
                return;

        FUNC_0(VAR_3->networks_by_name, VAR_2);
        FUNC_0(VAR_3->netdevs_by_name, VAR_1);
        FUNC_0(VAR_3->links_by_name, VAR_0);
}
