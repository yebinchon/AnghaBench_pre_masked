
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int i_visible_width; unsigned int i_visible_height; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_7__ {TYPE_2__ fmt_out; } ;
typedef TYPE_3__ filter_t ;



__attribute__((used)) static void FUNC_0( filter_t *VAR_0, int *VAR_1, int *VAR_2, float *VAR_3 )
{
    *VAR_3 = 1.0;

    if( *VAR_1 > 0 && *VAR_2 > 0 )
    {
        if( (unsigned)*VAR_1 > VAR_0->fmt_out.video.i_visible_width )
            *VAR_3 = (1.0 * VAR_0->fmt_out.video.i_visible_width / *VAR_1);

        if( (unsigned)*VAR_2 > VAR_0->fmt_out.video.i_visible_height )
        {
            float VAR_4 = (1.0 * VAR_0->fmt_out.video.i_visible_height / *VAR_2);
            if( VAR_4 < *VAR_3 )
                *VAR_3 = VAR_4;
        }

        *VAR_1 *= *VAR_3;
        *VAR_2 *= *VAR_3;
    }
}
