
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct TYPE_3__ {unsigned int path_nodes_index; int * path_nodes; } ;
typedef TYPE_1__ Onion_Client ;
typedef int Node_format ;


 unsigned int VAR_0 ;

uint16_t FUNC_0(const Onion_Client *VAR_1, Node_format *VAR_2, uint16_t VAR_3)
{
    unsigned int VAR_4;

    if (!VAR_3)
        return 0;

    unsigned int VAR_5 = (VAR_1->path_nodes_index < VAR_0) ? VAR_1->path_nodes_index : VAR_0;

    if (VAR_5 == 0)
        return 0;

    if (VAR_5 < VAR_3)
        VAR_3 = VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        VAR_2[VAR_4] = VAR_1->path_nodes[(VAR_1->path_nodes_index - (1 + VAR_4)) % VAR_5];
    }

    return VAR_3;
}
