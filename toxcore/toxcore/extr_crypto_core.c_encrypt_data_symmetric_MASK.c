
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int const*,scalar_t__,int const*,int const*) ;
 int FUNC_1 (int const*,int const*,scalar_t__) ;
 int FUNC_2 (int const*,int ,scalar_t__) ;

int FUNC_3(const uint8_t *VAR_3, const uint8_t *VAR_4, const uint8_t *VAR_5, uint32_t VAR_6,
                           uint8_t *VAR_7)
{
    if (VAR_6 == 0 || !VAR_3 || !VAR_4 || !VAR_5 || !VAR_7)
        return -1;

    uint8_t VAR_8[VAR_6 + VAR_2];
    uint8_t VAR_9[VAR_6 + VAR_1 + VAR_0];

    FUNC_2(VAR_8, 0, VAR_2);
    FUNC_1(VAR_8 + VAR_2, VAR_5, VAR_6);

    if (FUNC_0(VAR_9, VAR_8, VAR_6 + VAR_2, VAR_4, VAR_3) != 0)
        return -1;


    FUNC_1(VAR_7, VAR_9 + VAR_0, VAR_6 + VAR_1);
    return VAR_6 + VAR_1;
}
