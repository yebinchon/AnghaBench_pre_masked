
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_5__ {int self_secret_key; int self_public_key; } ;
typedef TYPE_1__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int const*,int*,int,int ) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (TYPE_1__*,int const*,int*,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int*,int) ;

__attribute__((used)) static int FUNC_4(DHT *VAR_2, const uint8_t *VAR_3, uint64_t VAR_4, uint8_t VAR_5)
{
    uint8_t VAR_6[sizeof(uint64_t) + 1];
    uint8_t VAR_7[VAR_1];

    int VAR_8 = 0;

    VAR_6[0] = VAR_5;
    FUNC_1(VAR_6 + 1, &VAR_4, sizeof(uint64_t));

    int VAR_9 = FUNC_0(VAR_2->self_public_key, VAR_2->self_secret_key, VAR_7, VAR_3, VAR_6,
                             sizeof(uint64_t) + 1, VAR_0);

    if (VAR_9 == -1)
        return -1;

    if (VAR_5 == 0)
        VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_7, VAR_9);
    else if (VAR_5 == 1)
        VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_7, VAR_9);

    if (VAR_8 == 0)
        return -1;

    return VAR_8;
}
