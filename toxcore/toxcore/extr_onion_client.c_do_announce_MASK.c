
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_8__ {int public_key; int ip_port; } ;
struct TYPE_7__ {unsigned int path_nodes_index; unsigned int path_nodes_index_bs; TYPE_3__* path_nodes; TYPE_3__* path_nodes_bs; int onion_paths_self; TYPE_1__* clients_announce_list; } ;
struct TYPE_6__ {int timestamp; int last_pinged; int path_used; int ping_id; int public_key; int ip_port; scalar_t__ is_stored; } ;
typedef TYPE_1__ Onion_Node ;
typedef TYPE_2__ Onion_Client ;
typedef TYPE_3__ Node_format ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 unsigned int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(Onion_Client *VAR_5)
{
    unsigned int VAR_6, VAR_7 = 0;
    Onion_Node *VAR_8 = VAR_5->clients_announce_list;

    for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
        if (FUNC_1(VAR_8[VAR_6].timestamp, VAR_4))
            continue;

        ++VAR_7;


        if (VAR_8[VAR_6].last_pinged == 0) {
            VAR_8[VAR_6].last_pinged = 1;
            continue;
        }

        unsigned int VAR_9 = VAR_1;

        if (VAR_8[VAR_6].is_stored && FUNC_2(&VAR_5->onion_paths_self, VAR_8[VAR_6].path_used)) {
            VAR_9 = VAR_0;
        }

        if (FUNC_1(VAR_8[VAR_6].last_pinged, VAR_9)) {
            if (FUNC_0(VAR_5, 0, VAR_8[VAR_6].ip_port, VAR_8[VAR_6].public_key,
                                             VAR_8[VAR_6].ping_id, VAR_8[VAR_6].path_used) == 0) {
                VAR_8[VAR_6].last_pinged = FUNC_4();
            }
        }
    }

    if (VAR_7 != VAR_2) {
        unsigned int VAR_10;
        Node_format *VAR_11;

        if (FUNC_3() % 2 == 0 || VAR_5->path_nodes_index == 0) {
            VAR_10 = (VAR_5->path_nodes_index_bs < VAR_3) ? VAR_5->path_nodes_index_bs : VAR_3;
            VAR_11 = VAR_5->path_nodes_bs;
        } else {
            VAR_10 = (VAR_5->path_nodes_index < VAR_3) ? VAR_5->path_nodes_index : VAR_3;
            VAR_11 = VAR_5->path_nodes;
        }

        if (VAR_7 < (uint32_t)FUNC_3() % VAR_2) {
            if (VAR_10 != 0) {
                for (VAR_6 = 0; VAR_6 < (VAR_2 / 2); ++VAR_6) {
                    unsigned int VAR_12 = FUNC_3() % VAR_10;
                    FUNC_0(VAR_5, 0, VAR_11[VAR_12].ip_port, VAR_11[VAR_12].public_key, 0, ~0);
                }
            }
        }
    }
}
