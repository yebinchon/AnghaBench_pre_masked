
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,int const*,int *,int *,scalar_t__,int *) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(const uint8_t *VAR_5, const uint8_t *VAR_6, uint8_t *VAR_7,
                   const uint8_t *VAR_8, const uint8_t *VAR_9, uint32_t VAR_10, uint8_t VAR_11)
{
    if (!VAR_5 || !VAR_7 || !VAR_8 || !VAR_9)
        return -1;

    if (VAR_0 < VAR_10 + 1 + VAR_4 * 2 + VAR_3 + 1 +
            VAR_2)
        return -1;

    uint8_t *VAR_12 = VAR_7 + 1 + VAR_4 * 2;
    FUNC_2(VAR_12);
    uint8_t VAR_13[VAR_0];
    FUNC_1(VAR_13 + 1, VAR_9, VAR_10);
    VAR_13[0] = VAR_11;
    int VAR_14 = FUNC_0(VAR_8, VAR_6, VAR_12, VAR_13, VAR_10 + 1,
                           1 + VAR_4 * 2 + VAR_3 + VAR_7);

    if (VAR_14 == -1)
        return -1;

    VAR_7[0] = VAR_1;
    FUNC_1(VAR_7 + 1, VAR_8, VAR_4);
    FUNC_1(VAR_7 + 1 + VAR_4, VAR_5, VAR_4);

    return VAR_14 + 1 + VAR_4 * 2 + VAR_3;
}
