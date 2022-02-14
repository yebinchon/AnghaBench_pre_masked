
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct TYPE_8__ {int uint32; } ;
struct TYPE_9__ {TYPE_1__ ip4; void* family; } ;
struct TYPE_10__ {TYPE_2__ ip; } ;
struct TYPE_12__ {TYPE_3__ ip_port; } ;
struct TYPE_11__ {unsigned int path_nodes_index; unsigned int path_nodes_index_bs; TYPE_5__* path_nodes_bs; TYPE_5__* path_nodes; int c; int dht; } ;
typedef TYPE_4__ Onion_Client ;
typedef TYPE_5__ Node_format ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 () ;

__attribute__((used)) static uint16_t FUNC_3(const Onion_Client *VAR_2, Node_format *VAR_3, uint16_t VAR_4)
{
    unsigned int VAR_5;

    if (!VAR_4)
        return 0;

    unsigned int VAR_6 = (VAR_2->path_nodes_index < VAR_0) ? VAR_2->path_nodes_index : VAR_0;


    if (FUNC_0(VAR_2->dht)) {
        if (VAR_6 == 0)
            return 0;

        for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
            VAR_3[VAR_5] = VAR_2->path_nodes[FUNC_2() % VAR_6];
        }
    } else {
        int VAR_7 = FUNC_1(VAR_2->c);

        if (VAR_7 == -1) {
            return 0;
        }

        if (VAR_6 >= 2) {
            VAR_3[0].ip_port.ip.family = VAR_1;
            VAR_3[0].ip_port.ip.ip4.uint32 = VAR_7;

            for (VAR_5 = 1; VAR_5 < VAR_4; ++VAR_5) {
                VAR_3[VAR_5] = VAR_2->path_nodes[FUNC_2() % VAR_6];
            }
        } else {
            unsigned int VAR_8 = (VAR_2->path_nodes_index_bs < VAR_0) ? VAR_2->path_nodes_index_bs :
                                        VAR_0;

            if (VAR_8 == 0)
                return 0;

            VAR_3[0].ip_port.ip.family = VAR_1;
            VAR_3[0].ip_port.ip.ip4.uint32 = VAR_7;

            for (VAR_5 = 1; VAR_5 < VAR_4; ++VAR_5) {
                VAR_3[VAR_5] = VAR_2->path_nodes_bs[FUNC_2() % VAR_8];
            }
        }
    }

    return VAR_4;
}
