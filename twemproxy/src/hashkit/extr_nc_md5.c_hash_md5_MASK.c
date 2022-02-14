
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char*,unsigned long,unsigned char*) ;

uint32_t
FUNC_1(const char *VAR_0, size_t VAR_1)
{
    unsigned char VAR_2[16];

    FUNC_0((unsigned char*)VAR_0, (unsigned long)VAR_1, VAR_2);

    return ((uint32_t) (VAR_2[3] & 0xFF) << 24) |
           ((uint32_t) (VAR_2[2] & 0xFF) << 16) |
           ((uint32_t) (VAR_2[1] & 0xFF) << 8) |
           (VAR_2[0] & 0xFF);
}
