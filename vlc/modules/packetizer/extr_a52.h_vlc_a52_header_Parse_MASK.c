
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_a52_header_t ;
typedef int uint8_t ;
typedef int uint32_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int const*,unsigned int const*) ;
 int FUNC_1 (int *,int const*,int const*,unsigned int const*) ;

__attribute__((used)) static inline int FUNC_2( vlc_a52_header_t *VAR_2,
                                        const uint8_t *VAR_3, int VAR_4 )
{
    static const uint32_t VAR_5[8] = {
        135,
        129,
        135,
        134,
        130 | 128,
        130 | 131,
        133,
        132,
    };
    static const unsigned VAR_6[] = {
        48000, 44100, 32000
    };

    if( VAR_4 < VAR_0 )
        return VAR_1;


    if( VAR_3[0] != 0x0b || VAR_3[1] != 0x77 )
        return VAR_1;


    const int VAR_7 = VAR_3[5] >> 3;


    if( VAR_7 <= 10 )
        return FUNC_0( VAR_2, VAR_3,
                                        VAR_5, VAR_6 );
    else if( VAR_7 <= 16 )
        return FUNC_1( VAR_2, VAR_3,
                                         VAR_5, VAR_6 );
    else
        return VAR_1;
}
