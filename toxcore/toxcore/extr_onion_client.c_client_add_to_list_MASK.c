
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int num_friends; int const* temp_public_key; TYPE_2__* friends_list; TYPE_1__* c; TYPE_3__* clients_announce_list; } ;
struct TYPE_11__ {int const* public_key; int const* data_public_key; int const* ping_id; int is_stored; int path_used; scalar_t__ last_pinged; int timestamp; int ip_port; } ;
struct TYPE_10__ {int* real_public_key; TYPE_3__* clients_list; } ;
struct TYPE_9__ {int* self_public_key; } ;
typedef TYPE_3__ Onion_Node ;
typedef TYPE_4__ Onion_Client ;
typedef int IP_Port ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int const*,int const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*,int const*,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int const*) ;
 scalar_t__ FUNC_4 (int const*,int const*) ;
 int FUNC_5 (TYPE_3__*,unsigned int,int,int ) ;
 int FUNC_6 (TYPE_4__*,int,int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(Onion_Client *VAR_7, uint32_t VAR_8, const uint8_t *VAR_9, IP_Port VAR_10,
                              uint8_t VAR_11, const uint8_t *VAR_12, uint32_t VAR_13)
{
    if (VAR_8 > VAR_7->num_friends)
        return -1;

    Onion_Node *VAR_14 = ((void*)0);
    uint8_t *VAR_15 = ((void*)0);
    unsigned int VAR_16;

    if (VAR_8 == 0) {
        VAR_14 = VAR_7->clients_announce_list;
        VAR_15 = VAR_7->c->self_public_key;
        VAR_16 = VAR_1;

        if (VAR_11 == 1 && FUNC_4(VAR_12, VAR_7->temp_public_key) != 0) {
            VAR_11 = 0;
        }

    } else {
        if (VAR_11 >= 2)
            return -1;

        VAR_14 = VAR_7->friends_list[VAR_8 - 1].clients_list;
        VAR_15 = VAR_7->friends_list[VAR_8 - 1].real_public_key;
        VAR_16 = VAR_0;
    }

    FUNC_2(VAR_5, VAR_15, VAR_6);
    FUNC_5(VAR_14, VAR_16, sizeof(Onion_Node), VAR_4);

    int VAR_17 = -1, VAR_18 = 0;
    unsigned int VAR_19;

    if (FUNC_1(VAR_14[0].timestamp, VAR_2)
            || FUNC_0(VAR_15, VAR_14[0].public_key, VAR_9) == 2) {
        VAR_17 = 0;
    }

    for (VAR_19 = 0; VAR_19 < VAR_16; ++VAR_19) {
        if (FUNC_4(VAR_14[VAR_19].public_key, VAR_9) == 0) {
            VAR_17 = VAR_19;
            VAR_18 = 1;
            break;
        }
    }

    if (VAR_17 == -1)
        return 0;

    FUNC_2(VAR_14[VAR_17].public_key, VAR_9, VAR_6);
    VAR_14[VAR_17].ip_port = VAR_10;


    FUNC_3(VAR_7, VAR_10, VAR_9);

    if (VAR_11 == 1) {
        FUNC_2(VAR_14[VAR_17].data_public_key, VAR_12, VAR_6);
    } else {
        FUNC_2(VAR_14[VAR_17].ping_id, VAR_12, VAR_3);
    }

    VAR_14[VAR_17].is_stored = VAR_11;
    VAR_14[VAR_17].timestamp = FUNC_7();

    if (!VAR_18)
        VAR_14[VAR_17].last_pinged = 0;

    VAR_14[VAR_17].path_used = FUNC_6(VAR_7, VAR_8, VAR_13);
    return 0;
}
