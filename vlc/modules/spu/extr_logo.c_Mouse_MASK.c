
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ i_x; scalar_t__ i_y; } ;
typedef TYPE_3__ vlc_mouse_t ;
struct TYPE_23__ {int i_visible_width; int i_visible_height; } ;
typedef TYPE_4__ video_format_t ;
struct TYPE_24__ {TYPE_4__ format; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_25__ {TYPE_5__* p_pic; } ;
typedef TYPE_6__ logo_t ;
struct TYPE_20__ {scalar_t__ i_height; scalar_t__ i_width; } ;
struct TYPE_21__ {TYPE_1__ video; } ;
struct TYPE_26__ {TYPE_2__ fmt_in; TYPE_8__* p_sys; } ;
typedef TYPE_7__ filter_t ;
struct TYPE_27__ {scalar_t__ i_pos_x; scalar_t__ i_pos_y; int b_mouse_grab; int lock; int list; } ;
typedef TYPE_8__ filter_sys_t ;


 TYPE_6__* FUNC_0 (int *) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int*,TYPE_3__ const*,TYPE_3__ const*) ;
 scalar_t__ FUNC_3 (TYPE_3__ const*,TYPE_3__ const*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__ const*,TYPE_3__ const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( filter_t *VAR_3, vlc_mouse_t *VAR_4,
                  const vlc_mouse_t *VAR_5, const vlc_mouse_t *VAR_6 )
{
    filter_sys_t *VAR_7 = VAR_3->p_sys;

    FUNC_5( &VAR_7->lock );
    logo_t *VAR_8 = FUNC_0( &VAR_7->list );
    const picture_t *VAR_9 = VAR_8->p_pic;

    if( VAR_9 )
    {
        const video_format_t *VAR_10 = &VAR_9->format;
        const int VAR_11 = VAR_10->i_visible_width;
        const int VAR_12 = VAR_10->i_visible_height;


        const bool VAR_13 = VAR_6->i_x >= VAR_7->i_pos_x &&
                            VAR_6->i_x < VAR_7->i_pos_x + VAR_11 &&
                            VAR_6->i_y >= VAR_7->i_pos_y &&
                            VAR_6->i_y < VAR_7->i_pos_y + VAR_12;

        if( VAR_13 && FUNC_3( VAR_5, VAR_6, VAR_0 ) )
            VAR_7->b_mouse_grab = 1;
        else if( FUNC_4( VAR_5, VAR_6, VAR_0 ) )
            VAR_7->b_mouse_grab = 0;

        if( VAR_7->b_mouse_grab )
        {
            int VAR_14, VAR_15;
            FUNC_2( &VAR_14, &VAR_15, VAR_5, VAR_6 );
            VAR_7->i_pos_x = FUNC_1( VAR_7->i_pos_x + VAR_14, 0,
                                    (int)VAR_3->fmt_in.video.i_width - VAR_11 );
            VAR_7->i_pos_y = FUNC_1( VAR_7->i_pos_y + VAR_15, 0,
                                    (int)VAR_3->fmt_in.video.i_height - VAR_12 );
        }

        if( VAR_7->b_mouse_grab || VAR_13 )
        {
            FUNC_6( &VAR_7->lock );
            return VAR_1;
        }
    }
    FUNC_6( &VAR_7->lock );

    *VAR_4 = *VAR_6;
    return VAR_2;
}
