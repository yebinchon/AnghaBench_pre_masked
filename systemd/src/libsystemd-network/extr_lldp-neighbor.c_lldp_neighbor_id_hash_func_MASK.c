
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct siphash {int dummy; } ;
struct TYPE_3__ {int* chassis_id; int chassis_id_size; int* port_id; int port_id_size; } ;
typedef TYPE_1__ LLDPNeighborID ;


 int FUNC_0 (int*,int,struct siphash*) ;

__attribute__((used)) static void FUNC_1(const LLDPNeighborID *VAR_0, struct siphash *VAR_1) {
        FUNC_0(VAR_0->chassis_id, VAR_0->chassis_id_size, VAR_1);
        FUNC_0(&VAR_0->chassis_id_size, sizeof(VAR_0->chassis_id_size), VAR_1);
        FUNC_0(VAR_0->port_id, VAR_0->port_id_size, VAR_1);
        FUNC_0(&VAR_0->port_id_size, sizeof(VAR_0->port_id_size), VAR_1);
}
