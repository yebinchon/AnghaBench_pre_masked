
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const uint8_t *VAR_1, const uint8_t *VAR_2)
{
    unsigned int VAR_3, VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        if (VAR_1[VAR_3] == VAR_2[VAR_3])
            continue;

        for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
            if ((VAR_1[VAR_3] & (1 << (7 - VAR_4))) != (VAR_2[VAR_3] & (1 << (7 - VAR_4))))
                break;
        }

        break;
    }

    return VAR_3 * 8 + VAR_4;
}
