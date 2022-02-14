
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int crypt_connection_id; int dht_temp_pk; int real_public_key; int dht_lock; } ;
struct TYPE_10__ {int net_crypto; } ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int FUNC_0 (int ,int,int *,TYPE_1__*,int) ;
 int FUNC_1 (int ,int,int *,TYPE_1__*,int) ;
 int FUNC_2 (int ,int,int *,TYPE_1__*,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int,int *,TYPE_1__*,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(Friend_Connections *VAR_4, int VAR_5)
{
    Friend_Conn *VAR_6 = FUNC_3(VAR_4, VAR_5);

    if (!VAR_6)
        return -1;

    if (VAR_6->crypt_connection_id != -1) {
        return -1;
    }


    if (!VAR_6->dht_lock) {
        return -1;
    }

    int VAR_7 = FUNC_5(VAR_4->net_crypto, VAR_6->real_public_key, VAR_6->dht_temp_pk);

    if (VAR_7 == -1)
        return -1;

    VAR_6->crypt_connection_id = VAR_7;
    FUNC_2(VAR_4->net_crypto, VAR_7, &VAR_3, VAR_4, VAR_5);
    FUNC_0(VAR_4->net_crypto, VAR_7, &VAR_2, VAR_4, VAR_5);
    FUNC_1(VAR_4->net_crypto, VAR_7, &VAR_1, VAR_4, VAR_5);
    FUNC_4(VAR_4->net_crypto, VAR_7, &VAR_0, VAR_4, VAR_5);

    return 0;
}
