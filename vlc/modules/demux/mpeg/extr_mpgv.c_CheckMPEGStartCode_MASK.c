
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( const uint8_t *VAR_2 )
{
    switch( VAR_2[3] )
    {
        case 0x00:
            if( (VAR_2[5] & 0x38) == 0x00 )
                return VAR_0;
            break;
        case 0xB0:
        case 0xB1:
        case 0xB6:
            return VAR_0;
        default:
            if( VAR_2[3] > 0xB9 )
                return VAR_0;
            break;
    }
    return VAR_1;
}
