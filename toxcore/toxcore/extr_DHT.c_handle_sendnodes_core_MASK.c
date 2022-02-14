
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int plain ;
typedef int ping_id ;
typedef int Node_format ;
typedef int IP_Port ;
typedef int DHT ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__ const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,scalar_t__ const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,scalar_t__ const*,int,scalar_t__*) ;
 int FUNC_3 (int *,scalar_t__*,int) ;
 int FUNC_4 (int *,int *,scalar_t__ const*,scalar_t__*,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__ const*,int ,int ,int *) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_5, IP_Port VAR_6, const uint8_t *VAR_7, uint16_t VAR_8,
                                 Node_format *VAR_9, uint16_t VAR_10, uint32_t *VAR_11)
{
    DHT *VAR_12 = VAR_5;
    uint32_t VAR_13 = 1 + VAR_4 + VAR_3 + 1 + sizeof(uint64_t) + VAR_2;

    if (VAR_8 < VAR_13)
        return 1;

    uint32_t VAR_14 = VAR_8 - VAR_13;

    if (VAR_14 == 0)
        return 1;

    if (VAR_14 > sizeof(Node_format) * VAR_0)
        return 1;

    uint8_t VAR_15[1 + VAR_14 + sizeof(uint64_t)];
    uint8_t VAR_16[VAR_1];
    FUNC_0(VAR_12, VAR_16, VAR_7 + 1);
    int VAR_17 = FUNC_2(
                  VAR_16,
                  VAR_7 + 1 + VAR_4,
                  VAR_7 + 1 + VAR_4 + VAR_3,
                  1 + VAR_14 + sizeof(uint64_t) + VAR_2,
                  VAR_15);

    if ((unsigned int)VAR_17 != sizeof(VAR_15))
        return 1;

    if (VAR_15[0] > VAR_10)
        return 1;

    Node_format VAR_18;

    uint64_t VAR_19;
    FUNC_3(&VAR_19, VAR_15 + 1 + VAR_14, sizeof(VAR_19));

    if (!FUNC_5(VAR_12, VAR_7 + 1, VAR_6, VAR_19, &VAR_18))
        return 1;

    uint16_t VAR_20 = 0;
    int VAR_21 = FUNC_6(VAR_9, VAR_15[0], &VAR_20, VAR_15 + 1, VAR_14, 0);

    if (VAR_20 != VAR_14)
        return 1;

    if (VAR_21 != VAR_15[0])
        return 1;

    if (VAR_21 < 0)
        return 1;


    FUNC_1(VAR_12, VAR_6, VAR_7 + 1);

    *VAR_11 = VAR_21;

    FUNC_4(VAR_12, &VAR_18, VAR_7 + 1, VAR_15 + 1, VAR_14);
    return 0;
}
