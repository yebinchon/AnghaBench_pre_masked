
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint64_t FUNC_1 (unsigned short VAR_0[3])
{
    const uint64_t VAR_1 = FUNC_0(0x5DEECE66D);
    const unsigned VAR_2 = 13;
    const uint64_t VAR_3 = FUNC_0(0xFFFFFFFFFFFF);

    uint64_t VAR_4 = ((uint64_t)VAR_0[0] << 32)
               | ((uint32_t)VAR_0[1] << 16)
               | VAR_0[2];

    VAR_4 *= VAR_1;
    VAR_4 += VAR_2;
    VAR_4 &= VAR_3;

    VAR_0[0] = (VAR_4 >> 32) & 0xFFFF;
    VAR_0[1] = (VAR_4 >> 16) & 0xFFFF;
    VAR_0[2] = (VAR_4 >> 0) & 0XFFFF;

    return VAR_4;
}
