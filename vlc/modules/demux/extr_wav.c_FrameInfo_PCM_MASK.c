
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_rate; int i_bitspersample; int i_channels; int i_blockalign; } ;
struct TYPE_5__ {TYPE_1__ audio; } ;
typedef TYPE_2__ es_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1( unsigned int *VAR_3, int *VAR_4,
                          const es_format_t *VAR_5 )
{
    int VAR_6;

    if( VAR_5->audio.i_rate > 352800
     || VAR_5->audio.i_bitspersample > 64
     || VAR_5->audio.i_channels > VAR_2 )
        return VAR_0;


    *VAR_4 = FUNC_0( VAR_5->audio.i_rate / 20, 1 );

    VAR_6 = *VAR_4 * VAR_5->audio.i_channels *
        ( (VAR_5->audio.i_bitspersample + 7) / 8 );

    if( VAR_5->audio.i_blockalign > 0 )
    {
        const int VAR_7 = VAR_6 % VAR_5->audio.i_blockalign;
        if( VAR_7 > 0 )
            VAR_6 += VAR_5->audio.i_blockalign - VAR_7;
    }

    *VAR_3 = VAR_6;
    return VAR_1;
}
