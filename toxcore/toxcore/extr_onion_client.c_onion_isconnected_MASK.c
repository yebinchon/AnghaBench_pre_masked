
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int path_nodes_index; TYPE_1__* clients_announce_list; int last_packet_recv; } ;
struct TYPE_4__ {scalar_t__ is_stored; int timestamp; } ;
typedef TYPE_2__ Onion_Client ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const Onion_Client *VAR_3)
{
    unsigned int VAR_4, VAR_5 = 0, VAR_6 = 0;

    if (FUNC_0(VAR_3->last_packet_recv, VAR_2))
        return 0;

    if (VAR_3->path_nodes_index == 0)
        return 0;

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        if (!FUNC_0(VAR_3->clients_announce_list[VAR_4].timestamp, VAR_1)) {
            ++VAR_5;

            if (VAR_3->clients_announce_list[VAR_4].is_stored) {
                ++VAR_6;
            }
        }
    }

    unsigned int VAR_7 = VAR_3->path_nodes_index;

    if (VAR_7 > VAR_0) {
        VAR_7 = VAR_0;
    }



    if (VAR_5 && VAR_6) {
        if ((VAR_5 / 2) <= VAR_6 && (VAR_7 / 2) <= VAR_5)
            return 1;
    }

    return 0;
}
