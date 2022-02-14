
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(uint32_t VAR_0)
{
    union {
        uint32_t v;
        uint8_t b[4];
    } VAR_1;
    VAR_1.v = VAR_0;
    return (VAR_1.b[0] << 0) | (VAR_1.b[1] << 8) | (VAR_1.b[2] << 16) | (VAR_1.b[3] << 24);
}
