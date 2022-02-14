
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ttl; int enabled_capabilities; int capability_mask; scalar_t__ has_capabilities; int source_address; int filter_address; } ;
typedef TYPE_1__ sd_lldp_neighbor ;
typedef TYPE_1__ sd_lldp ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(sd_lldp *VAR_0, sd_lldp_neighbor *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);


        if (VAR_1->ttl <= 0)
                return 0;


        if (!FUNC_2(&VAR_0->filter_address) &&
            FUNC_1(&VAR_0->filter_address, &VAR_1->source_address))
                return 0;



        if (VAR_1->has_capabilities &&
            (VAR_1->enabled_capabilities & VAR_0->capability_mask) == 0)
                return 0;


        return 1;
}
