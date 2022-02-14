
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dht_lock; int dht_temp_pk; int crypt_connection_id; int onion_friendnum; scalar_t__ lock_count; } ;
struct TYPE_7__ {int dht; int net_crypto; int onion_c; } ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

int FUNC_5(Friend_Connections *VAR_0, int VAR_1)
{
    Friend_Conn *VAR_2 = FUNC_2(VAR_0, VAR_1);

    if (!VAR_2)
        return -1;

    if (VAR_2->lock_count) {
        --VAR_2->lock_count;
        return 0;
    }

    FUNC_3(VAR_0->onion_c, VAR_2->onion_friendnum);
    FUNC_1(VAR_0->net_crypto, VAR_2->crypt_connection_id);

    if (VAR_2->dht_lock) {
        FUNC_0(VAR_0->dht, VAR_2->dht_temp_pk, VAR_2->dht_lock);
    }

    return FUNC_4(VAR_0, VAR_1);
}
