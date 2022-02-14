
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int pk ;
typedef int ping_plain ;
typedef int ping_id ;
typedef int data ;
struct TYPE_5__ {int net; int const* self_public_key; } ;
struct TYPE_4__ {TYPE_3__* dht; int ping_array; } ;
typedef TYPE_1__ PING ;
typedef scalar_t__ IP_Port ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *,int *,int,int *) ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int *,scalar_t__*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ,scalar_t__,int *,int) ;

int FUNC_8(PING *VAR_8, IP_Port VAR_9, const uint8_t *VAR_10)
{
    uint8_t VAR_11[VAR_0];
    int VAR_12;
    uint64_t VAR_13;

    if (FUNC_3(VAR_10, VAR_8->dht->self_public_key))
        return 1;

    uint8_t VAR_14[VAR_4];


    FUNC_0(VAR_8->dht, VAR_14, VAR_10);

    uint8_t VAR_15[VAR_2];
    FUNC_2(VAR_15, VAR_10);
    FUNC_4(VAR_15 + VAR_7, &VAR_9, sizeof(IP_Port));
    VAR_13 = FUNC_6(&VAR_8->ping_array, VAR_15, sizeof(VAR_15));

    if (VAR_13 == 0)
        return 1;

    uint8_t VAR_16[VAR_3];
    VAR_16[0] = VAR_1;
    FUNC_4(VAR_16 + 1, &VAR_13, sizeof(VAR_13));

    VAR_11[0] = VAR_1;
    FUNC_2(VAR_11 + 1, VAR_8->dht->self_public_key);
    FUNC_5(VAR_11 + 1 + VAR_7);


    VAR_12 = FUNC_1(VAR_14,
                                VAR_11 + 1 + VAR_7,
                                VAR_16, sizeof(VAR_16),
                                VAR_11 + 1 + VAR_7 + VAR_6);

    if (VAR_12 != VAR_3 + VAR_5)
        return 1;

    return FUNC_7(VAR_8->dht->net, VAR_9, VAR_11, sizeof(VAR_11));
}
