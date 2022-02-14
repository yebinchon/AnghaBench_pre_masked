
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int i_samples; int i_size; int b_eac3; } ;
typedef TYPE_1__ vlc_a52_header_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static int FUNC_2( const uint8_t *VAR_2, bool *VAR_3, unsigned *VAR_4, bool VAR_5 )
{
    vlc_a52_header_t VAR_6;
    uint8_t VAR_7[VAR_0];

    *VAR_3 = VAR_2[0] == 0x0b && VAR_2[1] == 0x77;
    if( !*VAR_3 )
    {
        FUNC_0( VAR_2, VAR_7, VAR_0 );
        VAR_2 = VAR_7;
    }

    if( FUNC_1( &VAR_6, VAR_2, VAR_0 ) )
        return VAR_1;

    if( !VAR_6.b_eac3 != !VAR_5 )
        return VAR_1;
    if( VAR_4 )
        *VAR_4 = VAR_6.i_samples;
    return VAR_6.i_size;
}
