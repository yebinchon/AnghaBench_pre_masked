
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {scalar_t__ family; } ;
struct TYPE_10__ {TYPE_1__ ip; } ;
struct TYPE_9__ {unsigned int path_nodes_index_bs; TYPE_2__* path_nodes_bs; } ;
struct TYPE_8__ {int public_key; TYPE_4__ ip_port; } ;
typedef TYPE_3__ Onion_Client ;
typedef TYPE_4__ IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*,int ) ;
 scalar_t__ FUNC_1 (int const*,int ) ;

int FUNC_2(Onion_Client *VAR_4, IP_Port VAR_5, const uint8_t *VAR_6)
{
    if (VAR_5.ip.family != VAR_0 && VAR_5.ip.family != VAR_1)
        return -1;

    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
        if (FUNC_1(VAR_6, VAR_4->path_nodes_bs[VAR_7].public_key) == 0)
            return -1;
    }

    VAR_4->path_nodes_bs[VAR_4->path_nodes_index_bs % VAR_2].ip_port = VAR_5;
    FUNC_0(VAR_4->path_nodes_bs[VAR_4->path_nodes_index_bs % VAR_2].public_key, VAR_6,
           VAR_3);

    uint16_t VAR_8 = VAR_4->path_nodes_index_bs;
    ++VAR_4->path_nodes_index_bs;

    if (VAR_4->path_nodes_index_bs < VAR_8)
        VAR_4->path_nodes_index_bs = VAR_2 + 1;

    return 0;
}
