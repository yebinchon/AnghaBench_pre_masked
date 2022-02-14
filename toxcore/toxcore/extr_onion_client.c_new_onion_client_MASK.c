
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int tcp_c; TYPE_10__* dht; } ;
struct TYPE_14__ {TYPE_2__* c; TYPE_10__* dht; int net; int temp_secret_key; int temp_public_key; int secret_symmetric_key; int announce_ping_array; } ;
struct TYPE_13__ {int net; } ;
typedef TYPE_1__ Onion_Client ;
typedef TYPE_2__ Net_Crypto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_10__*,int ,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int ,int *,TYPE_1__*) ;

Onion_Client *FUNC_9(Net_Crypto *VAR_11)
{
    if (VAR_11 == ((void*)0))
        return ((void*)0);

    Onion_Client *VAR_12 = FUNC_0(1, sizeof(Onion_Client));

    if (VAR_12 == ((void*)0))
        return ((void*)0);

    if (FUNC_7(&VAR_12->announce_ping_array, VAR_0, VAR_1) != 0) {
        FUNC_3(VAR_12);
        return ((void*)0);
    }

    VAR_12->dht = VAR_11->dht;
    VAR_12->net = VAR_11->dht->net;
    VAR_12->c = VAR_11;
    FUNC_5(VAR_12->secret_symmetric_key);
    FUNC_1(VAR_12->temp_public_key, VAR_12->temp_secret_key);
    FUNC_4(VAR_12->net, VAR_3, &VAR_6, VAR_12);
    FUNC_4(VAR_12->net, VAR_4, &VAR_7, VAR_12);
    FUNC_6(VAR_12, VAR_5, &VAR_9, VAR_12);
    FUNC_2(VAR_12->dht, VAR_2, &VAR_8, VAR_12);
    FUNC_8(VAR_12->c->tcp_c, &VAR_10, VAR_12);

    return VAR_12;
}
