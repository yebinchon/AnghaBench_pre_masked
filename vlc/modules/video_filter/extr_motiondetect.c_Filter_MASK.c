
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int i_height; int i_width; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_24__ {TYPE_2__* p; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_21__ {TYPE_3__ video; } ;
struct TYPE_25__ {TYPE_1__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_26__ {TYPE_4__* p_old; int color_y_max; int color_y_min; int color_x_max; int color_x_min; int colors; int p_buf; int p_buf2; int i_colors; scalar_t__ is_yuv_planar; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_22__ {int i_pitch; int * p_pixels; } ;


 int FUNC_0 (TYPE_5__*,int *,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*,int*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 size_t VAR_0 ;
 TYPE_4__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*) ;
 void* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static picture_t *FUNC_8( filter_t *VAR_1, picture_t *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;

    if( !VAR_2 )
        return ((void*)0);

    picture_t *VAR_4 = FUNC_4( VAR_1 );
    if( !VAR_4 )
    {
        FUNC_7( VAR_2 );
        return ((void*)0);
    }
    FUNC_5( VAR_4, VAR_2 );

    if( !VAR_3->p_old )
    {
        VAR_3->p_old = FUNC_6( VAR_2 );
        goto exit;
    }

    int VAR_5;
    int VAR_6;
    if( VAR_3->is_yuv_planar )
    {
        FUNC_3( VAR_1, VAR_2 );
        VAR_5 = 0;
        VAR_6 = 1;
    }
    else
    {
        if( FUNC_2( VAR_1, VAR_2, &VAR_5 ) )
            goto exit;
        VAR_6 = 2;
    }




    const video_format_t *VAR_7 = &VAR_1->fmt_in.video;
    VAR_3->i_colors = FUNC_1( VAR_3->p_buf2, VAR_3->p_buf, VAR_7->i_width, VAR_7->i_width, VAR_7->i_height,
                                  VAR_3->colors, VAR_3->color_x_min, VAR_3->color_x_max, VAR_3->color_y_min, VAR_3->color_y_max );





    FUNC_0( VAR_1, &VAR_4->p[VAR_0].p_pixels[VAR_5], VAR_4->p[VAR_0].i_pitch, VAR_6 );


    FUNC_7( VAR_3->p_old );
    VAR_3->p_old = FUNC_6( VAR_2 );

exit:
    FUNC_7( VAR_2 );
    return VAR_4;
}
