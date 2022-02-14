
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static inline void FUNC_0( uint32_t VAR_0, uint16_t *VAR_1, uint16_t *VAR_2 )
{
    *VAR_1 = VAR_0 >> 16;
    *VAR_2 = (VAR_0 & 0xFFFF) >> 2;
}
