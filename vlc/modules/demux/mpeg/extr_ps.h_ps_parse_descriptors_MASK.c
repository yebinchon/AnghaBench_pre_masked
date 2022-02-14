
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_3__ {int lang; } ;
typedef TYPE_1__ ps_descriptors_t ;


 int FUNC_0 (int ,unsigned int const*,int) ;

__attribute__((used)) static inline void FUNC_1( const uint8_t *VAR_0, size_t VAR_1,
                                        ps_descriptors_t *VAR_2 )
{
    while( VAR_1 > 3 && VAR_1 > 2u + VAR_0[1] )
    {
        switch( VAR_0[0] )
        {
            case 0x0A:
                if( VAR_1 >= 6 )
                    FUNC_0( VAR_2->lang, &VAR_0[2], 3 );
                break;

            default:
                break;
        }
        uint8_t VAR_3 = VAR_0[1];
        VAR_0 += 2 + VAR_3;
        VAR_1 -= 2 + VAR_3;
    }
}
