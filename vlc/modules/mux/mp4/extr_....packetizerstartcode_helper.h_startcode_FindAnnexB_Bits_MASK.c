
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static inline const uint8_t * FUNC_1( const uint8_t *VAR_0, const uint8_t *VAR_1 )
{
    const uint8_t *VAR_2 = VAR_0 + 4 - ((intptr_t)VAR_0 & 3);

    for (VAR_1 -= 3; VAR_0 < VAR_2 && VAR_0 <= VAR_1; VAR_0++) {
        if (VAR_0[0] == 0 && VAR_0[1] == 0 && VAR_0[2] == 1)
            return VAR_0;
    }

    for (VAR_1 -= 3; VAR_0 < VAR_1; VAR_0 += 4) {
        uint32_t VAR_3 = *(const uint32_t*)VAR_0;
        if ((VAR_3 - 0x01010101) & (~VAR_3) & 0x80808080)
        {

            FUNC_0(VAR_0, 0);
        }
    }

    for (VAR_1 += 3; VAR_0 <= VAR_1; VAR_0++) {
        if (VAR_0[0] == 0 && VAR_0[1] == 0 && VAR_0[2] == 1)
            return VAR_0;
    }

    return ((void*)0);
}
