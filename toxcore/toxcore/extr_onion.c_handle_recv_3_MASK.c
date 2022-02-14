
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int plain ;
struct TYPE_3__ {int net; int secret_symmetric_key; } ;
typedef TYPE_1__ Onion ;
typedef int IP_Port ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,scalar_t__ const*,scalar_t__ const*,int,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__*,int,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_9, IP_Port VAR_10, const uint8_t *VAR_11, uint16_t VAR_12)
{
    Onion *VAR_13 = VAR_9;

    if (VAR_12 > VAR_3)
        return 1;

    if (VAR_12 <= 1 + VAR_5)
        return 1;

    if (VAR_11[1 + VAR_5] != VAR_0 &&
            VAR_11[1 + VAR_5] != VAR_1) {
        return 1;
    }

    FUNC_0(VAR_13);

    uint8_t VAR_14[VAR_6 + VAR_4];
    int VAR_15 = FUNC_1(VAR_13->secret_symmetric_key, VAR_11 + 1, VAR_11 + 1 + VAR_8,
                                     VAR_6 + VAR_4 + VAR_7, VAR_14);

    if ((uint32_t)VAR_15 != sizeof(VAR_14))
        return 1;

    IP_Port VAR_16;

    if (FUNC_2(&VAR_16, VAR_14, VAR_15, 0) == -1)
        return 1;

    uint8_t VAR_17[VAR_3];
    VAR_17[0] = VAR_2;
    FUNC_3(VAR_17 + 1, VAR_14 + VAR_6, VAR_4);
    FUNC_3(VAR_17 + 1 + VAR_4, VAR_11 + 1 + VAR_5, VAR_12 - (1 + VAR_5));
    uint16_t VAR_18 = 1 + VAR_4 + (VAR_12 - (1 + VAR_5));

    if ((uint32_t)FUNC_4(VAR_13->net, VAR_16, VAR_17, VAR_18) != VAR_18)
        return 1;

    return 0;
}
