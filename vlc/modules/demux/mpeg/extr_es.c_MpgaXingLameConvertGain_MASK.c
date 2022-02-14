
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static double FUNC_0( uint16_t VAR_0 )
{
    double VAR_1 = (VAR_0 & 0x1FF) / 10.0;

    return VAR_0 & 0x200 ? -VAR_1 : VAR_1;
}
