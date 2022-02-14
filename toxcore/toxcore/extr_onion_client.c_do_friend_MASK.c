
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_11__ {size_t num_friends; unsigned int path_nodes_index; TYPE_2__* friends_list; TYPE_1__* path_nodes; } ;
struct TYPE_10__ {scalar_t__ timestamp; scalar_t__ last_pinged; int public_key; int ip_port; } ;
struct TYPE_9__ {scalar_t__ status; scalar_t__ run_count; scalar_t__ last_dht_pk_onion_sent; scalar_t__ last_dht_pk_dht_sent; int is_online; TYPE_3__* clients_list; } ;
struct TYPE_8__ {int public_key; int ip_port; } ;
typedef TYPE_3__ Onion_Node ;
typedef TYPE_4__ Onion_Client ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_4__*,size_t,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,size_t,int) ;
 void* FUNC_4 () ;

__attribute__((used)) static void FUNC_5(Onion_Client *VAR_8, uint16_t VAR_9)
{
    if (VAR_9 >= VAR_8->num_friends)
        return;

    if (VAR_8->friends_list[VAR_9].status == 0)
        return;

    unsigned int VAR_10 = VAR_0;

    if (VAR_8->friends_list[VAR_9].run_count < VAR_7)
        VAR_10 = VAR_1;

    unsigned int VAR_11, VAR_12 = 0;
    Onion_Node *VAR_13 = VAR_8->friends_list[VAR_9].clients_list;

    if (!VAR_8->friends_list[VAR_9].is_online) {
        for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
            if (FUNC_1(VAR_13[VAR_11].timestamp, VAR_3))
                continue;

            ++VAR_12;


            if (VAR_13[VAR_11].last_pinged == 0) {
                VAR_13[VAR_11].last_pinged = FUNC_4();
                continue;
            }

            if (FUNC_1(VAR_13[VAR_11].last_pinged, VAR_10)) {
                if (FUNC_0(VAR_8, VAR_9 + 1, VAR_13[VAR_11].ip_port, VAR_13[VAR_11].public_key, 0, ~0) == 0) {
                    VAR_13[VAR_11].last_pinged = FUNC_4();
                }
            }
        }

        if (VAR_12 != VAR_4) {
            unsigned int VAR_14 = (VAR_8->path_nodes_index < VAR_5) ? VAR_8->path_nodes_index : VAR_5;

            unsigned int VAR_15 = VAR_14;

            if (VAR_14 > (VAR_4 / 2))
                VAR_15 = (VAR_4 / 2);

            if (VAR_14 != 0) {
                unsigned int VAR_16;

                for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16) {
                    unsigned int VAR_17 = FUNC_2() % VAR_14;
                    FUNC_0(VAR_8, VAR_9 + 1, VAR_8->path_nodes[VAR_17].ip_port,
                                                 VAR_8->path_nodes[VAR_17].public_key, 0, ~0);
                }

                ++VAR_8->friends_list[VAR_9].run_count;
            }
        } else {
            ++VAR_8->friends_list[VAR_9].run_count;
        }


        if (FUNC_1(VAR_8->friends_list[VAR_9].last_dht_pk_onion_sent, VAR_6))
            if (FUNC_3(VAR_8, VAR_9, 0) >= 1)
                VAR_8->friends_list[VAR_9].last_dht_pk_onion_sent = FUNC_4();

        if (FUNC_1(VAR_8->friends_list[VAR_9].last_dht_pk_dht_sent, VAR_2))
            if (FUNC_3(VAR_8, VAR_9, 1) >= 1)
                VAR_8->friends_list[VAR_9].last_dht_pk_dht_sent = FUNC_4();

    }
}
