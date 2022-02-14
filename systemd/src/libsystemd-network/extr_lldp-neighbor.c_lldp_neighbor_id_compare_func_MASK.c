
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int port_id_size; int port_id; int chassis_id_size; int chassis_id; } ;
typedef TYPE_1__ LLDPNeighborID ;


 int FUNC_0 (int ,int ,int ,int ) ;

int FUNC_1(const LLDPNeighborID *VAR_0, const LLDPNeighborID *VAR_1) {
        return FUNC_0(VAR_0->chassis_id, VAR_0->chassis_id_size, VAR_1->chassis_id, VAR_1->chassis_id_size)
            ?: FUNC_0(VAR_0->port_id, VAR_0->port_id_size, VAR_1->port_id, VAR_1->port_id_size);
}
