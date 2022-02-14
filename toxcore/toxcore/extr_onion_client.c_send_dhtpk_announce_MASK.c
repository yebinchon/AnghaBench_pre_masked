
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int no_replay ;
struct TYPE_7__ {int * self_public_key; } ;
struct TYPE_6__ {scalar_t__ num_friends; TYPE_5__* dht; int c; } ;
typedef TYPE_1__ Onion_Client ;
typedef int Node_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int VAR_4 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (int*,int,int *,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int*,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(Onion_Client *VAR_5, uint16_t VAR_6, uint8_t VAR_7)
{
    if (VAR_6 >= VAR_5->num_friends)
        return -1;

    uint8_t VAR_8[VAR_0];
    VAR_8[0] = VAR_3;
    uint64_t VAR_9 = FUNC_7();
    FUNC_2((uint8_t *)&VAR_9, sizeof(VAR_9));
    FUNC_3(VAR_8 + 1, &VAR_9, sizeof(VAR_9));
    FUNC_3(VAR_8 + 1 + sizeof(uint64_t), VAR_5->dht->self_public_key, VAR_4);
    Node_format VAR_10[VAR_2];
    uint16_t VAR_11 = FUNC_1(VAR_5->c, VAR_10, (VAR_2 / 2));
    uint16_t VAR_12 = FUNC_0(VAR_5->dht, &VAR_10[VAR_11], VAR_2 - VAR_11);
    VAR_12 += VAR_11;
    int VAR_13 = 0;

    if (VAR_12 != 0) {
        VAR_13 = FUNC_4(VAR_8 + VAR_1, VAR_0 - VAR_1, VAR_10,
                               VAR_12);

        if (VAR_13 <= 0)
            return -1;
    }

    int VAR_14 = -1, VAR_15 = -1;

    if (VAR_7 != 1)
        VAR_14 = FUNC_6(VAR_5, VAR_6, VAR_8, VAR_1 + VAR_13);

    if (VAR_7 != 0)
        VAR_15 = FUNC_5(VAR_5, VAR_6, VAR_8, VAR_1 + VAR_13);

    if (VAR_14 == -1)
        return VAR_15;

    if (VAR_15 == -1)
        return VAR_14;

    return VAR_14 + VAR_15;
}
