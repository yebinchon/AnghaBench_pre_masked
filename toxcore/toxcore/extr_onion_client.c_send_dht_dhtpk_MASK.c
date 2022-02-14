
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int temp ;
struct TYPE_9__ {int self_secret_key; int self_public_key; } ;
struct TYPE_8__ {scalar_t__ num_friends; TYPE_2__* friends_list; TYPE_5__* dht; TYPE_1__* c; } ;
struct TYPE_7__ {int dht_public_key; int real_public_key; int know_dht_public_key; } ;
struct TYPE_6__ {int self_secret_key; int * self_public_key; } ;
typedef TYPE_3__ Onion_Client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ,int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *,int const*,int,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(const Onion_Client *VAR_5, int VAR_6, const uint8_t *VAR_7, uint16_t VAR_8)
{
    if ((uint32_t)VAR_6 >= VAR_5->num_friends)
        return -1;

    if (!VAR_5->friends_list[VAR_6].know_dht_public_key)
        return -1;

    uint8_t VAR_9[VAR_3];
    FUNC_3(VAR_9);

    uint8_t VAR_10[VAR_1 + VAR_3 + VAR_8];
    FUNC_2(VAR_10, VAR_5->c->self_public_key, VAR_4);
    FUNC_2(VAR_10 + VAR_4, VAR_9, VAR_3);
    int VAR_11 = FUNC_1(VAR_5->friends_list[VAR_6].real_public_key, VAR_5->c->self_secret_key, VAR_9, VAR_7,
                           VAR_8, VAR_10 + VAR_4 + VAR_3);

    if ((uint32_t)VAR_11 + VAR_4 + VAR_3 != sizeof(VAR_10))
        return -1;

    uint8_t VAR_12[VAR_2];
    VAR_11 = FUNC_0(VAR_5->dht->self_public_key, VAR_5->dht->self_secret_key, VAR_12,
                         VAR_5->friends_list[VAR_6].dht_public_key, VAR_10, sizeof(VAR_10), VAR_0);

    if (VAR_11 == -1)
        return -1;

    return FUNC_4(VAR_5->dht, VAR_5->friends_list[VAR_6].dht_public_key, VAR_12, VAR_11);
}
