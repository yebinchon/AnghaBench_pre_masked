
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {TYPE_1__* dht; int shared_keys_1; } ;
struct TYPE_5__ {int self_secret_key; } ;
typedef TYPE_2__ Onion ;
typedef int IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int const*,int const*,scalar_t__,int *) ;
 int FUNC_2 (int *,int *,int ,int const*) ;
 int FUNC_3 (TYPE_2__*,int *,int,int ,int const*) ;

__attribute__((used)) static int FUNC_4(void *VAR_6, IP_Port VAR_7, const uint8_t *VAR_8, uint16_t VAR_9)
{
    Onion *VAR_10 = VAR_6;

    if (VAR_9 > VAR_0)
        return 1;

    if (VAR_9 <= 1 + VAR_1)
        return 1;

    FUNC_0(VAR_10);

    uint8_t VAR_11[VAR_0];
    uint8_t VAR_12[VAR_2];
    FUNC_2(&VAR_10->shared_keys_1, VAR_12, VAR_10->dht->self_secret_key, VAR_8 + 1 + VAR_4);
    int VAR_13 = FUNC_1(VAR_12, VAR_8 + 1, VAR_8 + 1 + VAR_4 + VAR_5,
                                     VAR_9 - (1 + VAR_4 + VAR_5), VAR_11);

    if (VAR_13 != VAR_9 - (1 + VAR_4 + VAR_5 + VAR_3))
        return 1;

    return FUNC_3(VAR_10, VAR_11, VAR_13, VAR_7, VAR_8 + 1);
}
