
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int const*,size_t) ;
 size_t FUNC_1 (int const*) ;

__attribute__((used)) static size_t FUNC_2(uint8_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2, size_t VAR_3)
{
    if (VAR_2 < 2)
        return 0;

    size_t VAR_4 = FUNC_1(VAR_1);

    if (VAR_4 * 8 > VAR_3)
        return 0;

    VAR_4 += 2;

    if (VAR_2 < VAR_4)
        return 0;

    FUNC_0(VAR_0, VAR_1, VAR_4);
    return VAR_4;
}
