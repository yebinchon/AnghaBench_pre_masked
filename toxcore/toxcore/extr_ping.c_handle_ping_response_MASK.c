
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int ping_plain ;
typedef int ping_id ;
typedef int data ;
struct TYPE_7__ {scalar_t__* self_public_key; } ;
struct TYPE_6__ {TYPE_1__* ping; } ;
struct TYPE_5__ {int ping_array; TYPE_4__* dht; } ;
typedef TYPE_1__ PING ;
typedef int IP_Port ;
typedef TYPE_2__ DHT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__*,scalar_t__ const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__ const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,scalar_t__ const*,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__ const*,scalar_t__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,int,int *,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_8, IP_Port VAR_9, const uint8_t *VAR_10, uint16_t VAR_11)
{
    DHT *VAR_12 = VAR_8;
    int VAR_13;

    if (VAR_11 != VAR_0)
        return 1;

    PING *VAR_14 = VAR_12->ping;

    if (FUNC_3(VAR_10 + 1, VAR_14->dht->self_public_key))
        return 1;

    uint8_t VAR_15[VAR_4];


    FUNC_0(VAR_14->dht, VAR_15, VAR_10 + 1);

    uint8_t VAR_16[VAR_3];

    VAR_13 = FUNC_2(VAR_15,
                                VAR_10 + 1 + VAR_7,
                                VAR_10 + 1 + VAR_7 + VAR_6,
                                VAR_3 + VAR_5,
                                VAR_16);

    if (VAR_13 != sizeof(VAR_16))
        return 1;

    if (VAR_16[0] != VAR_1)
        return 1;

    uint64_t VAR_17;
    FUNC_5(&VAR_17, VAR_16 + 1, sizeof(VAR_17));
    uint8_t VAR_18[VAR_2];

    if (FUNC_6(VAR_18, sizeof(VAR_18), &VAR_14->ping_array, VAR_17) != sizeof(VAR_18))
        return 1;

    if (!FUNC_3(VAR_10 + 1, VAR_18))
        return 1;

    IP_Port VAR_19;
    FUNC_5(&VAR_19, VAR_18 + VAR_7, sizeof(IP_Port));

    if (!FUNC_4(&VAR_19, &VAR_9))
        return 1;

    FUNC_1(VAR_12, VAR_9, VAR_10 + 1);
    return 0;
}
