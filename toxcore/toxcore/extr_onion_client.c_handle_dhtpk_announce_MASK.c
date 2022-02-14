
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int no_replay ;
struct TYPE_10__ {scalar_t__ family; } ;
struct TYPE_14__ {TYPE_1__ ip; } ;
struct TYPE_13__ {int public_key; TYPE_6__ ip_port; } ;
struct TYPE_12__ {TYPE_2__* friends_list; int dht; } ;
struct TYPE_11__ {scalar_t__ last_noreplay; int (* tcp_relay_node_callback ) (void*,int ,TYPE_6__,int ) ;int tcp_relay_node_callback_number; void* tcp_relay_node_callback_object; int dht_public_key; int last_seen; int dht_pk_callback_number; int dht_pk_callback_object; int (* dht_pk_callback ) (int ,int ,scalar_t__ const*) ;} ;
typedef TYPE_3__ Onion_Client ;
typedef TYPE_4__ Node_format ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_6__*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__ const*) ;
 int FUNC_4 (TYPE_3__*,int,scalar_t__ const*) ;
 int FUNC_5 (int ,int ,scalar_t__ const*) ;
 int FUNC_6 (void*,int ,TYPE_6__,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_4__*,int,int ,scalar_t__ const*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_8, const uint8_t *VAR_9, const uint8_t *VAR_10, uint16_t VAR_11)
{
    Onion_Client *VAR_12 = VAR_8;

    if (VAR_11 < VAR_3)
        return 1;

    if (VAR_11 > VAR_2)
        return 1;

    int VAR_13 = FUNC_3(VAR_12, VAR_9);

    if (VAR_13 == -1)
        return 1;

    uint64_t VAR_14;
    FUNC_1(&VAR_14, VAR_10 + 1, sizeof(uint64_t));
    FUNC_2((uint8_t *) &VAR_14, sizeof(VAR_14));

    if (VAR_14 <= VAR_12->friends_list[VAR_13].last_noreplay)
        return 1;

    VAR_12->friends_list[VAR_13].last_noreplay = VAR_14;

    if (VAR_12->friends_list[VAR_13].dht_pk_callback)
        VAR_12->friends_list[VAR_13].dht_pk_callback(VAR_12->friends_list[VAR_13].dht_pk_callback_object,
                VAR_12->friends_list[VAR_13].dht_pk_callback_number, VAR_10 + 1 + sizeof(uint64_t));

    FUNC_4(VAR_12, VAR_13, VAR_10 + 1 + sizeof(uint64_t));
    VAR_12->friends_list[VAR_13].last_seen = FUNC_7();

    uint16_t VAR_15 = VAR_11 - VAR_3;

    if (VAR_15 != 0) {
        Node_format VAR_16[VAR_4];
        int VAR_17 = FUNC_8(VAR_16, VAR_4, 0, VAR_10 + 1 + sizeof(uint64_t) + VAR_7,
                                     VAR_15, 1);

        if (VAR_17 <= 0)
            return 1;

        int VAR_18;

        for (VAR_18 = 0; VAR_18 < VAR_17; ++VAR_18) {
            uint8_t VAR_19 = VAR_16[VAR_18].ip_port.ip.family;

            if (VAR_19 == VAR_0 || VAR_19 == VAR_1) {
                FUNC_0(VAR_12->dht, &VAR_16[VAR_18].ip_port, VAR_16[VAR_18].public_key, VAR_12->friends_list[VAR_13].dht_public_key);
            } else if (VAR_19 == VAR_5 || VAR_19 == VAR_6) {
                if (VAR_12->friends_list[VAR_13].tcp_relay_node_callback) {
                    void *VAR_20 = VAR_12->friends_list[VAR_13].tcp_relay_node_callback_object;
                    uint32_t VAR_21 = VAR_12->friends_list[VAR_13].tcp_relay_node_callback_number;
                    VAR_12->friends_list[VAR_13].tcp_relay_node_callback(VAR_20, VAR_21, VAR_16[VAR_18].ip_port, VAR_16[VAR_18].public_key);
                }
            }
        }
    }

    return 0;
}
