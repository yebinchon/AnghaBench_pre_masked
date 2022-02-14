
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int pk ;
typedef int ping_plain ;
typedef int ping_id ;
struct TYPE_5__ {TYPE_1__* dht; } ;
struct TYPE_4__ {int net; int self_public_key; } ;
typedef TYPE_2__ PING ;
typedef int IP_Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int *,int,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int const*,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(PING *VAR_6, IP_Port VAR_7, const uint8_t *VAR_8, uint64_t VAR_9,
                              uint8_t *VAR_10)
{
    uint8_t VAR_11[VAR_0];
    int VAR_12;

    if (FUNC_2(VAR_8, VAR_6->dht->self_public_key))
        return 1;

    uint8_t VAR_13[VAR_2];
    VAR_13[0] = VAR_1;
    FUNC_3(VAR_13 + 1, &VAR_9, sizeof(VAR_9));

    VAR_11[0] = VAR_1;
    FUNC_1(VAR_11 + 1, VAR_6->dht->self_public_key);
    FUNC_4(VAR_11 + 1 + VAR_5);


    VAR_12 = FUNC_0(VAR_10,
                                VAR_11 + 1 + VAR_5,
                                VAR_13, sizeof(VAR_13),
                                VAR_11 + 1 + VAR_5 + VAR_4 );

    if (VAR_12 != VAR_2 + VAR_3)
        return 1;

    return FUNC_5(VAR_6->dht->net, VAR_7, VAR_11, sizeof(VAR_11));
}
