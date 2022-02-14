
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int public_key; int ip_port; } ;
struct TYPE_6__ {unsigned int loaded_num_nodes; unsigned int loaded_nodes_index; TYPE_2__* loaded_nodes_list; } ;
typedef TYPE_1__ DHT ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(DHT *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return -1;

    if (!VAR_1->loaded_nodes_list)
        return -1;


    if (FUNC_1(VAR_1)) {
        FUNC_2(VAR_1->loaded_nodes_list);
        VAR_1->loaded_nodes_list = ((void*)0);
        VAR_1->loaded_num_nodes = 0;
        return 0;
    }

    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->loaded_num_nodes && VAR_2 < VAR_0; ++VAR_2) {
        unsigned int VAR_3 = VAR_1->loaded_nodes_index % VAR_1->loaded_num_nodes;
        FUNC_0(VAR_1, VAR_1->loaded_nodes_list[VAR_3].ip_port, VAR_1->loaded_nodes_list[VAR_3].public_key);
        ++VAR_1->loaded_nodes_index;
    }

    return 0;
}
