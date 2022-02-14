
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_0,
                                                 uint16_t VAR_1)
{
    VAR_0[2] = (VAR_1 >> 8) & 0xff;
    VAR_0[3] = VAR_1 & 0xff;
}
