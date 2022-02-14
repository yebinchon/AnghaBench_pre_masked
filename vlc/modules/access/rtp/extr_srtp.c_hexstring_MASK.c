
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;


 int FUNC_0 (char const) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static ssize_t FUNC_2 (const char *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = FUNC_1 (VAR_0);

    if ((VAR_3 > (2 * VAR_2)) || (VAR_3 & 1))
        return -1;

    for (size_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 2)
    {
        int VAR_5 = FUNC_0 (VAR_0[VAR_4]), VAR_6 = FUNC_0 (VAR_0[VAR_4 + 1]);
        if ((VAR_5 == -1) || (VAR_6 == -1))
            return -1;
        VAR_1[VAR_4 / 2] = (VAR_5 << 4) | VAR_6;
    }
    return VAR_3 / 2;
}
