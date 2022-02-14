
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_2__ {scalar_t__ i_codec; scalar_t__ i_fourcc; unsigned int i_size_mul; unsigned int i_line_mul; unsigned int i_line_chroma_div; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

int FUNC_1( vlc_fourcc_t VAR_2,
                       unsigned int VAR_3, unsigned int VAR_4,
                       unsigned int *VAR_5, unsigned int *VAR_6,
                       unsigned int *VAR_7 )
{
    unsigned int VAR_8;

    VAR_2 = FUNC_0( VAR_0, VAR_2 );

    for( VAR_8 = 0; VAR_1[VAR_8].i_codec != 0; VAR_8++ )
        if( VAR_1[VAR_8].i_fourcc == VAR_2 ) break;


    VAR_3 = (VAR_3 + 15) & ~0xF;
    VAR_4 = (VAR_4 + 15) & ~0xF;

    if( VAR_5 ) *VAR_5 = VAR_3 * VAR_4 * VAR_1[VAR_8].i_size_mul / 2;
    if( VAR_6 ) *VAR_6 = VAR_3 * VAR_1[VAR_8].i_line_mul;
    if( VAR_7 )
        *VAR_7 = VAR_1[VAR_8].i_line_chroma_div;
    return !!VAR_1[VAR_8].i_codec;
}
