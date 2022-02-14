
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int const uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int sendback_data ;
typedef int plain ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,int const*,int *,int *,int,int *) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(uint8_t *VAR_6, uint16_t VAR_7, const uint8_t *VAR_8,
                            const uint8_t *VAR_9, const uint8_t *VAR_10, const uint8_t *VAR_11, const uint8_t *VAR_12,
                            const uint8_t *VAR_13, uint64_t VAR_14)
{
    if (VAR_7 < VAR_1)
        return -1;

    uint8_t VAR_15[VAR_3 + VAR_5 + VAR_5 +
                  VAR_2];
    FUNC_1(VAR_15, VAR_11, VAR_3);
    FUNC_1(VAR_15 + VAR_3, VAR_12, VAR_5);
    FUNC_1(VAR_15 + VAR_3 + VAR_5, VAR_13, VAR_5);
    FUNC_1(VAR_15 + VAR_3 + VAR_5 + VAR_5, &VAR_14,
           sizeof(VAR_14));

    VAR_6[0] = VAR_0;
    FUNC_2(VAR_6 + 1);

    int VAR_16 = FUNC_0(VAR_8, VAR_10, VAR_6 + 1, VAR_15, sizeof(VAR_15),
                           VAR_6 + 1 + VAR_4 + VAR_5);

    if ((uint32_t)VAR_16 + 1 + VAR_4 + VAR_5 != VAR_1)
        return -1;

    FUNC_1(VAR_6 + 1 + VAR_4, VAR_9, VAR_5);

    return VAR_1;
}
