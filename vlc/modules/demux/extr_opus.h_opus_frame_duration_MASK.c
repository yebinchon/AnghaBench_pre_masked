
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned FUNC_0(unsigned char *VAR_0, long VAR_1)
{
    static const int VAR_2[4] = { 6000, 3000, 1500, 1000 };
    unsigned VAR_3;
    unsigned VAR_4;
    unsigned VAR_5;
    unsigned VAR_6;
    unsigned VAR_7;
    if( VAR_1 < 1 )
        return 0;
    VAR_3 = VAR_0[0];
    switch( VAR_3&3 )
    {
        case 0:
            VAR_4 = 1;
            break;
        case 1:
        case 2:
            VAR_4 = 2;
            break;
        default:
            if( VAR_1 < 2 )
                return 0;
            VAR_4 = VAR_0[1]&0x3F;
            break;
    }
    VAR_7 = 48000;
    if( VAR_3&0x80 )
        VAR_5 = (VAR_7 << (VAR_3 >> 3 & 3)) / 400;
    else if( ( VAR_3&0x60 ) == 0x60 )
        VAR_5 = VAR_7/(100 >> (VAR_3 >> 3 & 1));
    else
        VAR_5 = VAR_7*60 / VAR_2[VAR_3 >> 3 & 3];
    VAR_6 = VAR_4*VAR_5;
    if( VAR_6*25 > VAR_7*3 )
        return 0;
    return VAR_6;
}
