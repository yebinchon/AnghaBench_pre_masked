
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1( const uint8_t *VAR_0, size_t VAR_1 )
{
    if(FUNC_0(VAR_1 < 4))
        return 0;
    if( VAR_0[3] == 0xbd )
    {
        uint8_t VAR_2 = 0;
        if( VAR_1 >= 9 &&
            VAR_1 > 9 + (size_t)VAR_0[8] )
        {
            const unsigned VAR_3 = 9 + VAR_0[8];
            VAR_2 = VAR_0[VAR_3];

            if( (VAR_2 & 0xfe) == 0xa0 &&
                VAR_1 >= VAR_3 + 7 &&
                ( VAR_0[VAR_3 + 5] >= 0xc0 ||
                  VAR_0[VAR_3 + 6] != 0x80 ) )
            {



                return 0xa000 | (VAR_2 & 0x01);
            }
        }


        return 0xbd00 | VAR_2;
    }
    else if( VAR_1 >= 9 &&
             VAR_0[3] == 0xfd &&
             (VAR_0[6]&0xC0) == 0x80 &&
             (VAR_0[7]&0x01) == 0x01 )
    {

        const uint8_t VAR_4 = VAR_0[7];
        unsigned int VAR_5 = 9;


        if( (VAR_4 & 0x80 ) )
        {
            VAR_5 += 5;
            if( (VAR_4 & 0x40) )
                VAR_5 += 5;
        }
        if( (VAR_4 & 0x20 ) )
            VAR_5 += 6;
        if( (VAR_4 & 0x10 ) )
            VAR_5 += 3;
        if( (VAR_4 & 0x08 ) )
            VAR_5 += 1;
        if( (VAR_4 & 0x04 ) )
            VAR_5 += 1;
        if( (VAR_4 & 0x02 ) )
            VAR_5 += 2;

        if( VAR_5 < VAR_1 && (VAR_0[VAR_5]&0x01) )
        {
            const uint8_t VAR_6 = VAR_0[VAR_5];


            VAR_5 += 1;
            if( VAR_6 & 0x80 )
                VAR_5 += 16;
            if( (VAR_6 & 0x40) && VAR_5 < VAR_1 )
                VAR_5 += 1 + VAR_0[VAR_5];
            if( VAR_6 & 0x20 )
                VAR_5 += 2;
            if( VAR_6 & 0x10 )
                VAR_5 += 2;

            if( VAR_5 + 1 < VAR_1 )
            {
                const int VAR_7 = VAR_0[VAR_5]&0x7f;
                if( VAR_7 >=1 )
                {
                    int VAR_8 = (VAR_0[VAR_5+1] >> 7)&0x1;
                    if( VAR_8 == 0 )
                        return 0xfd00 | (VAR_0[VAR_5+1]&0x7f);
                }
            }
        }
    }
    return VAR_0[3];
}
