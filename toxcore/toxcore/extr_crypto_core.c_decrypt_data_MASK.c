
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int const*,int ,int *) ;
 int FUNC_1 (int const*,int const*,int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(const uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3,
                 const uint8_t *VAR_4, uint32_t VAR_5, uint8_t *VAR_6)
{
    if (!VAR_1 || !VAR_2)
        return -1;

    uint8_t VAR_7[VAR_0];
    FUNC_1(VAR_1, VAR_2, VAR_7);
    int VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
    FUNC_2(VAR_7, sizeof VAR_7);
    return VAR_8;
}
