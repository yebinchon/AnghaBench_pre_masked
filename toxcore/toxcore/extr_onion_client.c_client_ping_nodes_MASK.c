
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef unsigned int uint16_t ;
struct TYPE_18__ {int ip; } ;
struct TYPE_17__ {int ip; } ;
struct TYPE_16__ {int public_key; TYPE_8__ ip_port; } ;
struct TYPE_15__ {int num_friends; TYPE_2__* friends_list; int last_pinged_index; int * last_pinged; TYPE_1__* c; TYPE_3__* clients_announce_list; } ;
struct TYPE_14__ {int public_key; int timestamp; } ;
struct TYPE_13__ {int last_pinged_index; int * last_pinged; int * real_public_key; TYPE_3__* clients_list; } ;
struct TYPE_12__ {int * self_public_key; } ;
typedef TYPE_3__ Onion_Node ;
typedef TYPE_4__ Onion_Client ;
typedef TYPE_5__ Node_format ;
typedef int Last_Pinged ;
typedef TYPE_6__ IP_Port ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int,TYPE_8__,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(Onion_Client *VAR_3, uint32_t VAR_4, const Node_format *VAR_5, uint16_t VAR_6,
                             IP_Port VAR_7)
{
    if (VAR_4 > VAR_3->num_friends)
        return -1;

    if (VAR_6 == 0)
        return 0;

    Onion_Node *VAR_8 = ((void*)0);
    uint8_t *VAR_9 = ((void*)0);
    unsigned int VAR_10;

    Last_Pinged *VAR_11 = ((void*)0);
    uint8_t *VAR_12 = ((void*)0);

    if (VAR_4 == 0) {
        VAR_8 = VAR_3->clients_announce_list;
        VAR_9 = VAR_3->c->self_public_key;
        VAR_10 = VAR_1;
        VAR_11 = VAR_3->last_pinged;
        VAR_12 = &VAR_3->last_pinged_index;
    } else {
        VAR_8 = VAR_3->friends_list[VAR_4 - 1].clients_list;
        VAR_9 = VAR_3->friends_list[VAR_4 - 1].real_public_key;
        VAR_10 = VAR_0;
        VAR_11 = VAR_3->friends_list[VAR_4 - 1].last_pinged;
        VAR_12 = &VAR_3->friends_list[VAR_4 - 1].last_pinged_index;
    }

    unsigned int VAR_13, VAR_14;
    int VAR_15 = (FUNC_0(VAR_7.ip) == 0);

    for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13) {

        if (!VAR_15)
            if (FUNC_0(VAR_5[VAR_13].ip_port.ip) == 0)
                continue;

        if (FUNC_4(VAR_8[0].timestamp, VAR_2)
                || FUNC_3(VAR_9, VAR_8[0].public_key, VAR_5[VAR_13].public_key) == 2
                || FUNC_4(VAR_8[1].timestamp, VAR_2)
                || FUNC_3(VAR_9, VAR_8[1].public_key, VAR_5[VAR_13].public_key) == 2 ) {

            for (VAR_14 = 0; VAR_14 < VAR_10; ++VAR_14) {
                if (FUNC_5(VAR_8[VAR_14].public_key, VAR_5[VAR_13].public_key) == 0) {
                    break;
                }
            }

            if (VAR_14 == VAR_10 && FUNC_2(VAR_11, VAR_12, VAR_5[VAR_13].public_key)) {
                FUNC_1(VAR_3, VAR_4, VAR_5[VAR_13].ip_port, VAR_5[VAR_13].public_key, ((void*)0), ~0);
            }
        }
    }

    return 0;
}
