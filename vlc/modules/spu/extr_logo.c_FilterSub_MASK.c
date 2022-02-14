
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_26__ {int i_sar_num; int i_sar_den; int color_range; int space; int primaries; int transfer; scalar_t__ i_y_offset; scalar_t__ i_x_offset; int i_visible_height; int i_height; int i_visible_width; int i_width; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_27__ {int b_absolute; int b_ephemer; int i_alpha; TYPE_5__* p_region; scalar_t__ i_stop; scalar_t__ i_start; } ;
typedef TYPE_4__ subpicture_t ;
struct TYPE_28__ {int i_align; scalar_t__ i_x; scalar_t__ i_y; int p_picture; } ;
typedef TYPE_5__ subpicture_region_t ;
struct TYPE_25__ {int color_range; int space; int primaries; int transfer; } ;
struct TYPE_29__ {TYPE_2__ format; TYPE_1__* p; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_30__ {int i_alpha; TYPE_6__* p_pic; } ;
typedef TYPE_7__ logo_t ;
struct TYPE_31__ {scalar_t__ i_next_pic; int i_repeat; scalar_t__ i_counter; int i_alpha; } ;
typedef TYPE_8__ logo_list_t ;
struct TYPE_32__ {TYPE_10__* p_sys; } ;
typedef TYPE_9__ filter_t ;
struct TYPE_23__ {int b_spu_update; int b_absolute; int i_pos; scalar_t__ i_pos_x; scalar_t__ i_pos_y; int lock; TYPE_8__ list; } ;
typedef TYPE_10__ filter_sys_t ;
struct TYPE_24__ {int i_visible_lines; int i_visible_pitch; } ;


 TYPE_7__* FUNC_0 (TYPE_8__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_4__* FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*,char*) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_5__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static subpicture_t *FUNC_9( filter_t *VAR_4, vlc_tick_t VAR_5 )
{
    filter_sys_t *VAR_6 = VAR_4->p_sys;
    logo_list_t *VAR_7 = &VAR_6->list;

    subpicture_t *VAR_8;
    subpicture_region_t *VAR_9;
    video_format_t VAR_10;
    picture_t *VAR_11;
    logo_t *VAR_12;

    FUNC_7( &VAR_6->lock );




    if( ( !VAR_6->b_spu_update && VAR_7->i_next_pic > VAR_5 ) ||
        !VAR_7->i_repeat )
    {
        FUNC_8( &VAR_6->lock );
        return ((void*)0);
    }


    VAR_12 = FUNC_0( VAR_7, VAR_5 );
    VAR_6->b_spu_update = 0;

    VAR_11 = VAR_12->p_pic;


    VAR_8 = FUNC_1( VAR_4 );
    if( !VAR_8 )
        goto exit;

    VAR_8->b_absolute = VAR_6->b_absolute;
    VAR_8->i_start = VAR_5;
    VAR_8->i_stop = 0;
    VAR_8->b_ephemer = 1;


    if( VAR_7->i_repeat != -1 && VAR_7->i_counter == 0 )
    {
        VAR_7->i_repeat--;
        if( VAR_7->i_repeat < 0 )
            goto exit;
    }
    if( !VAR_11 || !VAR_12->i_alpha ||
        ( VAR_12->i_alpha == -1 && !VAR_7->i_alpha ) )
        goto exit;


    FUNC_6( &VAR_10, VAR_2 );
    VAR_10.i_sar_num = VAR_10.i_sar_den = 1;
    VAR_10.i_width = VAR_10.i_visible_width = VAR_11->p[VAR_3].i_visible_pitch;
    VAR_10.i_height = VAR_10.i_visible_height = VAR_11->p[VAR_3].i_visible_lines;
    VAR_10.i_x_offset = VAR_10.i_y_offset = 0;
    VAR_10.transfer = VAR_11->format.transfer;
    VAR_10.primaries = VAR_11->format.primaries;
    VAR_10.space = VAR_11->format.space;
    VAR_10.color_range = VAR_11->format.color_range;
    VAR_9 = FUNC_5( &VAR_10 );
    if( !VAR_9 )
    {
        FUNC_2( VAR_4, "cannot allocate SPU region" );
        FUNC_4( VAR_8 );
        VAR_8 = ((void*)0);
        goto exit;
    }


    FUNC_3( VAR_9->p_picture, VAR_11 );


    if( VAR_6->i_pos < 0 )
    {
        VAR_9->i_align = VAR_0 | VAR_1;
        VAR_8->b_absolute = 1;
    }
    else
    {
        VAR_9->i_align = VAR_6->i_pos;
        VAR_8->b_absolute = 0;
    }

    VAR_9->i_x = VAR_6->i_pos_x > 0 ? VAR_6->i_pos_x : 0;
    VAR_9->i_y = VAR_6->i_pos_y > 0 ? VAR_6->i_pos_y : 0;

    VAR_8->p_region = VAR_9;

    VAR_8->i_alpha = ( VAR_12->i_alpha != -1 ?
                       VAR_12->i_alpha : VAR_7->i_alpha );

exit:
    FUNC_8( &VAR_6->lock );

    return VAR_8;
}
