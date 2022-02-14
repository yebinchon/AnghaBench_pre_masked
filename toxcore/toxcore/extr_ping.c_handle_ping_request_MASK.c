
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int ping_plain ;
typedef int ping_id ;
struct TYPE_9__ {TYPE_2__* ping; } ;
struct TYPE_8__ {TYPE_1__* dht; } ;
struct TYPE_7__ {int self_public_key; } ;
typedef TYPE_2__ PING ;
typedef int IP_Port ;
typedef TYPE_3__ DHT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__*,scalar_t__ const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,scalar_t__ const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,scalar_t__ const*,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__ const*,int ) ;
 int FUNC_4 (int *,scalar_t__*,int) ;
 int FUNC_5 (TYPE_2__*,int ,scalar_t__ const*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(void *VAR_7, IP_Port VAR_8, const uint8_t *VAR_9, uint16_t VAR_10)
{
    DHT *VAR_11 = VAR_7;
    int VAR_12;

    if (VAR_10 != VAR_0)
        return 1;

    PING *VAR_13 = VAR_11->ping;

    if (FUNC_3(VAR_9 + 1, VAR_13->dht->self_public_key))
        return 1;

    uint8_t VAR_14[VAR_3];

    uint8_t VAR_15[VAR_2];

    FUNC_0(VAR_11, VAR_14, VAR_9 + 1);
    VAR_12 = FUNC_2(VAR_14,
                                VAR_9 + 1 + VAR_6,
                                VAR_9 + 1 + VAR_6 + VAR_5,
                                VAR_2 + VAR_4,
                                VAR_15 );

    if (VAR_12 != sizeof(VAR_15))
        return 1;

    if (VAR_15[0] != VAR_1)
        return 1;

    uint64_t VAR_16;
    FUNC_4(&VAR_16, VAR_15 + 1, sizeof(VAR_16));

    FUNC_5(VAR_13, VAR_8, VAR_9 + 1, VAR_16, VAR_14);
    FUNC_1(VAR_13, VAR_9 + 1, VAR_8);

    return 0;
}
