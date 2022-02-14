
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;



__attribute__((used)) static inline uint8_t FUNC_0(uint32_t VAR_0)
{
    if (VAR_0 < (1U << 7)) return 1;
    else if(VAR_0 < (1U << 14)) return 2;
    else if(VAR_0 < (1U << 21)) return 3;
    else if(VAR_0 < (1U << 28)) return 4;
    else return 5;
}
