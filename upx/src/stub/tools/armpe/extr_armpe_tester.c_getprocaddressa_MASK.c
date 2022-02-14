
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,...) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0, const char *VAR_1)
{
    unsigned VAR_2 = (unsigned) VAR_1;
    if (VAR_2 < 0x10000)
    {
        FUNC_0("getprocaddressa called %c%c%c, ordinal %u\n",
               VAR_0, VAR_0 >> 8, VAR_0 >> 16, VAR_2);
        return VAR_0 + VAR_2 * 0x10000;
    }
    FUNC_0("getprocaddressa called %c%c%c, name %s\n",
           VAR_0, VAR_0 >> 8, VAR_0 >> 16, VAR_1);
    return VAR_0 + VAR_1[0] * 0x10000 + VAR_1[1] * 0x1000000;
}
