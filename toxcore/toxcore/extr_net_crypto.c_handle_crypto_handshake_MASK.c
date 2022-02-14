
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int plain ;
struct TYPE_3__ {int self_secret_key; int secret_symmetric_key; } ;
typedef TYPE_1__ Net_Crypto ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int const*,int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int const*,int const*,scalar_t__,int *) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int const*,int ) ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int FUNC_6(const Net_Crypto *VAR_6, uint8_t *VAR_7, uint8_t *VAR_8, uint8_t *VAR_9,
                                   uint8_t *VAR_10, uint8_t *VAR_11, const uint8_t *VAR_12, uint16_t VAR_13, const uint8_t *VAR_14)
{
    if (VAR_13 != VAR_2)
        return -1;

    uint8_t VAR_15[VAR_0];

    if (FUNC_3(VAR_15, VAR_12 + 1, VAR_6->secret_symmetric_key) != 0)
        return -1;

    if (VAR_14)
        if (FUNC_4(VAR_15, VAR_14) != 0)
            return -1;

    uint8_t VAR_16[VAR_5];
    FUNC_0(VAR_16, VAR_12 + 1, VAR_1);

    uint8_t VAR_17[VAR_3 + VAR_4 + VAR_5 + VAR_1];
    int VAR_18 = FUNC_1(VAR_15, VAR_6->self_secret_key, VAR_12 + 1 + VAR_1,
                           VAR_12 + 1 + VAR_1 + VAR_3,
                           VAR_2 - (1 + VAR_1 + VAR_3), VAR_17);

    if (VAR_18 != sizeof(VAR_17))
        return -1;

    if (FUNC_5(VAR_16, VAR_17 + VAR_3 + VAR_4,
                      VAR_5) != 0)
        return -1;

    FUNC_2(VAR_7, VAR_17, VAR_3);
    FUNC_2(VAR_8, VAR_17 + VAR_3, VAR_4);
    FUNC_2(VAR_11, VAR_17 + VAR_3 + VAR_4 + VAR_5, VAR_1);
    FUNC_2(VAR_9, VAR_15, VAR_4);
    FUNC_2(VAR_10, VAR_15 + VAR_4, VAR_4);
    return 0;
}
