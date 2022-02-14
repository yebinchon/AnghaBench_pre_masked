
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int sock_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,int *,int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,scalar_t__) ;

int FUNC_4(sock_t VAR_1, uint16_t *VAR_2, const uint8_t *VAR_3,
                                      uint8_t *VAR_4, uint8_t *VAR_5, uint16_t VAR_6)
{
    if (*VAR_2 == 0) {
        uint16_t VAR_7 = FUNC_2(VAR_1);

        if (VAR_7 == (uint16_t)~0)
            return -1;

        if (VAR_7 == 0)
            return 0;

        *VAR_2 = VAR_7;
    }

    if (VAR_6 + VAR_0 < *VAR_2)
        return -1;

    uint8_t VAR_8[*VAR_2];
    int VAR_9 = FUNC_3(VAR_1, VAR_8, *VAR_2);

    if (VAR_9 != *VAR_2)
        return 0;

    *VAR_2 = 0;

    int VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_8, VAR_9, VAR_5);

    if (VAR_10 + VAR_0 != VAR_9)
        return -1;

    FUNC_1(VAR_4);

    return VAR_10;
}
