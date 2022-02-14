
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int8_t ;
typedef int Assoc ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static uint64_t FUNC_1(const Assoc *VAR_1, void *VAR_2, const uint8_t *VAR_3, const uint8_t *VAR_4)
{

    uint64_t VAR_5 = 0;

    uint8_t VAR_6 = 0, VAR_7 = VAR_0;

    while (VAR_7 > 8) {
        uint8_t VAR_8 = FUNC_0((int8_t)VAR_3[VAR_6] ^ (int8_t)VAR_4[VAR_6]);
        VAR_5 = (VAR_5 << 8) | VAR_8;
        VAR_7 -= 8;
        VAR_6++;
    }

    return (VAR_5 << VAR_7) | ((VAR_3[VAR_6] ^ VAR_4[VAR_6]) >> (8 - VAR_7));
}
