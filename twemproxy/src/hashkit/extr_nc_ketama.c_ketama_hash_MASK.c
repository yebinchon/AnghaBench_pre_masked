
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char*,size_t,unsigned char*) ;

__attribute__((used)) static uint32_t
FUNC_1(const char *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
    unsigned char VAR_3[16];

    FUNC_0((unsigned char*)VAR_0, VAR_1, VAR_3);

    return ((uint32_t) (VAR_3[3 + VAR_2 * 4] & 0xFF) << 24)
        | ((uint32_t) (VAR_3[2 + VAR_2 * 4] & 0xFF) << 16)
        | ((uint32_t) (VAR_3[1 + VAR_2 * 4] & 0xFF) << 8)
        | (VAR_3[0 + VAR_2 * 4] & 0xFF);
}
