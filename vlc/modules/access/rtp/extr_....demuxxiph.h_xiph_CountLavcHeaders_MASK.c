
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;


 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static inline unsigned FUNC_1(const void *VAR_0, unsigned VAR_1)
{
    const uint8_t *VAR_2 = (const uint8_t*) VAR_0;
    const uint8_t *VAR_3 = &VAR_2[VAR_1];

    for (int VAR_4=0; VAR_4<3; VAR_4++)
    {
        if(VAR_3 - VAR_2 < 2)
            return 0;
        uint16_t VAR_5 = FUNC_0(VAR_2);
        if(&VAR_2[2U + VAR_5] > VAR_3)
            return 0;
        VAR_2 += 2 + VAR_5;
    }
    return 3;
}
