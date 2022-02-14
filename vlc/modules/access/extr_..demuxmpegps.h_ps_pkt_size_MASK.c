
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;







 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1( const uint8_t *VAR_0, int VAR_1 )
{
    if( FUNC_0(VAR_1 < 4) )
        return -1;

    switch( VAR_0[3] )
    {
        case 131:
            return 4;

        case 129:
            if( VAR_1 > 4 )
            {
                if( VAR_1 >= 14 && (VAR_0[4] >> 6) == 0x01 )
                    return 14 + (VAR_0[13]&0x07);
                else if( VAR_1 >= 12 && (VAR_0[4] >> 4) == 0x02 )
                    return 12;
            }
            break;

        case 128:
        case 130:
        case 132:
        default:
            if( VAR_1 >= 6 )
                return 6 + ((VAR_0[4]<<8) | VAR_0[5] );
    }
    return -1;
}
