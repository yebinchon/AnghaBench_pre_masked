
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int random_key_bytes ;
struct TYPE_10__ {int self_public_key; int assoc; int dht_harden_ping_array; int dht_ping_array; int self_secret_key; int secret_symmetric_key; int * net; int * ping; } ;
typedef int Networking_Core ;
typedef TYPE_1__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*,int ,int *,TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int *,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 () ;

DHT *FUNC_12(Networking_Core *VAR_14)
{

    FUNC_11();

    if (VAR_14 == ((void*)0))
        return ((void*)0);

    DHT *VAR_15 = FUNC_1(1, sizeof(DHT));

    if (VAR_15 == ((void*)0))
        return ((void*)0);

    VAR_15->net = VAR_14;
    VAR_15->ping = FUNC_7(VAR_15);

    if (VAR_15->ping == ((void*)0)) {
        FUNC_4(VAR_15);
        return ((void*)0);
    }

    FUNC_5(VAR_15->net, VAR_5, &VAR_11, VAR_15);
    FUNC_5(VAR_15->net, VAR_6, &VAR_13, VAR_15);
    FUNC_5(VAR_15->net, VAR_4, &VAR_9, VAR_15);
    FUNC_3(VAR_15, VAR_1, &VAR_10, VAR_15);
    FUNC_3(VAR_15, VAR_0, &VAR_12, VAR_15);

    FUNC_8(VAR_15->secret_symmetric_key);
    FUNC_2(VAR_15->self_public_key, VAR_15->self_secret_key);

    FUNC_9(&VAR_15->dht_ping_array, VAR_3, VAR_7);
    FUNC_9(&VAR_15->dht_harden_ping_array, VAR_3, VAR_7);



    uint32_t VAR_16;

    for (VAR_16 = 0; VAR_16 < VAR_2; ++VAR_16) {
        uint8_t VAR_17[VAR_8];
        FUNC_10(VAR_17, sizeof(VAR_17));

        if (FUNC_0(VAR_15, VAR_17, 0, 0, 0, 0) != 0) {
            FUNC_4(VAR_15);
            return ((void*)0);
        }
    }

    return VAR_15;
}
