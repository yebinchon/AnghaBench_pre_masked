
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int network; void* slaves; int bound_by_links; int bound_to_links; int sd_device; int state_file; int ssid; int kind; int ifname; int lldp_file; int lease_file; int * pool_addresses; void* addresses_foreign; void* addresses; void* neighbors_foreign; void* neighbors; void* nexthops_foreign; void* nexthops; void* routes_foreign; void* routes; } ;
typedef TYPE_1__ Link ;
typedef int Address ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 void* FUNC_16 (void*,int (*) (int *)) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static Link *FUNC_18(Link *VAR_1) {
        Address *VAR_2;

        FUNC_2(VAR_1);

        FUNC_8(VAR_1);
        FUNC_5(VAR_1);

        VAR_1->routes = FUNC_16(VAR_1->routes, FUNC_14);
        VAR_1->routes_foreign = FUNC_16(VAR_1->routes_foreign, FUNC_14);

        VAR_1->nexthops = FUNC_16(VAR_1->nexthops, FUNC_13);
        VAR_1->nexthops_foreign = FUNC_16(VAR_1->nexthops_foreign, FUNC_13);

        VAR_1->neighbors = FUNC_16(VAR_1->neighbors, FUNC_11);
        VAR_1->neighbors_foreign = FUNC_16(VAR_1->neighbors_foreign, FUNC_11);

        VAR_1->addresses = FUNC_16(VAR_1->addresses, FUNC_1);
        VAR_1->addresses_foreign = FUNC_16(VAR_1->addresses_foreign, FUNC_1);

        while ((VAR_2 = VAR_1->pool_addresses)) {
                FUNC_0(VAR_0, VAR_1->pool_addresses, VAR_2);
                FUNC_1(VAR_2);
        }

        FUNC_7(VAR_1);
        FUNC_6(VAR_1);
        FUNC_3(VAR_1->lease_file);
        FUNC_3(VAR_1->lldp_file);

        FUNC_3(VAR_1->ifname);
        FUNC_3(VAR_1->kind);
        FUNC_3(VAR_1->ssid);

        (void) FUNC_17(VAR_1->state_file);
        FUNC_3(VAR_1->state_file);

        FUNC_15(VAR_1->sd_device);

        FUNC_4(VAR_1->bound_to_links);
        FUNC_4(VAR_1->bound_by_links);

        FUNC_16(VAR_1->slaves, FUNC_9);

        FUNC_12(VAR_1->network);

        return FUNC_10(VAR_1);
}
