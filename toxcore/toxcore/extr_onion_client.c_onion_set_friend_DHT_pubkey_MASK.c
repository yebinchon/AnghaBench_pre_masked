
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ num_friends; TYPE_1__* friends_list; } ;
struct TYPE_4__ {scalar_t__ status; int know_dht_public_key; int dht_public_key; int last_seen; } ;
typedef TYPE_2__ Onion_Client ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 int FUNC_2 () ;

int FUNC_3(Onion_Client *VAR_1, int VAR_2, const uint8_t *VAR_3)
{
    if ((uint32_t)VAR_2 >= VAR_1->num_friends)
        return -1;

    if (VAR_1->friends_list[VAR_2].status == 0)
        return -1;

    if (VAR_1->friends_list[VAR_2].know_dht_public_key) {
        if (FUNC_1(VAR_3, VAR_1->friends_list[VAR_2].dht_public_key) == 0) {
            return -1;
        }

        VAR_1->friends_list[VAR_2].know_dht_public_key = 0;
    }

    VAR_1->friends_list[VAR_2].last_seen = FUNC_2();
    VAR_1->friends_list[VAR_2].know_dht_public_key = 1;
    FUNC_0(VAR_1->friends_list[VAR_2].dht_public_key, VAR_3, VAR_0);

    return 0;
}
