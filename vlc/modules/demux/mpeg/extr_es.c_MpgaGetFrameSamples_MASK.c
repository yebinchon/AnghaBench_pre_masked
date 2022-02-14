
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1( uint32_t VAR_0 )
{
    const int VAR_1 = 3 - (((VAR_0)>>17)&0x03);
    switch( VAR_1 )
    {
    case 0:
        return 384;
    case 1:
        return 1152;
    case 2:
        return FUNC_0(VAR_0) ? 576 : 1152;
    default:
        return 0;
    }
}
