
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int packet ;
typedef int o_packet ;
struct TYPE_11__ {scalar_t__ num_friends; TYPE_2__* friends_list; int onion_paths_friends; TYPE_1__* c; } ;
struct TYPE_10__ {int ip_port; int data_public_key; scalar_t__ is_stored; int timestamp; } ;
struct TYPE_9__ {int real_public_key; TYPE_3__* clients_list; } ;
struct TYPE_8__ {int self_secret_key; int self_public_key; } ;
typedef int Onion_Path ;
typedef TYPE_3__ Onion_Node ;
typedef TYPE_4__ Onion_Client ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ,int ,int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *,int const*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int *,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *,int ,int *,int) ;

int FUNC_7(Onion_Client *VAR_7, int VAR_8, const uint8_t *VAR_9, uint16_t VAR_10)
{
    if ((uint32_t)VAR_8 >= VAR_7->num_friends)
        return -1;

    if (VAR_10 + VAR_0 > VAR_1)
        return -1;

    if (VAR_10 == 0)
        return -1;

    unsigned int VAR_11, VAR_12[VAR_2], VAR_13 = 0, VAR_14 = 0;
    Onion_Node *VAR_15 = VAR_7->friends_list[VAR_8].clients_list;

    for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
        if (FUNC_2(VAR_15[VAR_11].timestamp, VAR_4))
            continue;

        ++VAR_14;

        if (VAR_15[VAR_11].is_stored) {
            VAR_12[VAR_13] = VAR_11;
            ++VAR_13;
        }
    }

    if (VAR_13 < (VAR_14 / 4) + 1)
        return -1;

    uint8_t VAR_16[VAR_5];
    FUNC_4(VAR_16);

    uint8_t VAR_17[VAR_0 + VAR_10];
    FUNC_3(VAR_17, VAR_7->c->self_public_key, VAR_6);
    int VAR_18 = FUNC_1(VAR_7->friends_list[VAR_8].real_public_key, VAR_7->c->self_secret_key, VAR_16, VAR_9,
                           VAR_10, VAR_17 + VAR_6);

    if ((uint32_t)VAR_18 + VAR_6 != sizeof(VAR_17))
        return -1;

    unsigned int VAR_19 = 0;

    for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11) {
        Onion_Path VAR_20;

        if (FUNC_5(VAR_7, &VAR_7->onion_paths_friends, ~0, &VAR_20) == -1)
            continue;

        uint8_t VAR_21[VAR_3];
        VAR_18 = FUNC_0(VAR_21, sizeof(VAR_21), VAR_7->friends_list[VAR_8].real_public_key,
                                  VAR_15[VAR_12[VAR_11]].data_public_key, VAR_16, VAR_17, sizeof(VAR_17));

        if (VAR_18 == -1)
            continue;

        if (FUNC_6(VAR_7, &VAR_20, VAR_15[VAR_12[VAR_11]].ip_port, VAR_21, VAR_18) == 0)
            ++VAR_19;
    }

    return VAR_19;
}
