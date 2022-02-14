
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {int const i_visible_height; int const i_visible_width; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_29__ {scalar_t__ date; TYPE_3__ format; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_30__ {int i_alpha; TYPE_4__* p_pic; } ;
typedef TYPE_5__ logo_t ;
struct TYPE_31__ {scalar_t__ i_next_pic; int i_alpha; } ;
typedef TYPE_6__ logo_list_t ;
struct TYPE_26__ {int i_visible_width; int i_visible_height; } ;
struct TYPE_27__ {TYPE_1__ video; } ;
struct TYPE_32__ {TYPE_2__ fmt_out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ filter_t ;
struct TYPE_33__ {int i_pos; int i_pos_y; int i_pos_x; int lock; int p_blend; TYPE_6__ list; } ;
typedef TYPE_8__ filter_sys_t ;


 TYPE_5__* FUNC_0 (TYPE_6__*) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,int,int,TYPE_4__ const*,int const) ;
 scalar_t__ FUNC_3 (int ,int const,int const,TYPE_3__ const*) ;
 TYPE_4__* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,char*) ;
 int FUNC_6 (TYPE_7__*,char*,int const,int const,int const,int const) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static picture_t *FUNC_11( filter_t *VAR_4, picture_t *VAR_5 )
{
    filter_sys_t *VAR_6 = VAR_4->p_sys;
    logo_list_t *VAR_7 = &VAR_6->list;

    picture_t *VAR_8 = FUNC_4( VAR_4 );
    if( !VAR_8 )
        goto exit;

    FUNC_7( VAR_8, VAR_5 );


    FUNC_9( &VAR_6->lock );

    logo_t *VAR_9;
    if( VAR_7->i_next_pic < VAR_5->date )
        VAR_9 = FUNC_1( VAR_7, VAR_5->date );
    else
        VAR_9 = FUNC_0( VAR_7 );


    const picture_t *VAR_10 = VAR_9->p_pic;
    if( VAR_10 )
    {
        const video_format_t *VAR_11 = &VAR_10->format;
        const int VAR_12 = VAR_4->fmt_out.video.i_visible_width;
        const int VAR_13 = VAR_4->fmt_out.video.i_visible_height;

        if( VAR_6->i_pos )
        {
            if( VAR_6->i_pos & VAR_0 )
            {
                VAR_6->i_pos_y = VAR_13 - VAR_11->i_visible_height;
            }
            else if ( !(VAR_6->i_pos & VAR_3) )
            {
                VAR_6->i_pos_y = ( VAR_13 - VAR_11->i_visible_height ) / 2;
            }
            else
            {
                VAR_6->i_pos_y = 0;
            }

            if( VAR_6->i_pos & VAR_2 )
            {
                VAR_6->i_pos_x = VAR_12 - VAR_11->i_visible_width;
            }
            else if ( !(VAR_6->i_pos & VAR_1) )
            {
                VAR_6->i_pos_x = ( VAR_12 - VAR_11->i_visible_width ) / 2;
            }
            else
            {
                VAR_6->i_pos_x = 0;
            }
        }

        if( VAR_6->i_pos_x < 0 || VAR_6->i_pos_y < 0 )
        {
            FUNC_6( VAR_4,
                "logo(%ix%i) doesn't fit into video(%ix%i)",
                VAR_11->i_visible_width, VAR_11->i_visible_height,
                VAR_12,VAR_13 );
            VAR_6->i_pos_x = (VAR_6->i_pos_x > 0) ? VAR_6->i_pos_x : 0;
            VAR_6->i_pos_y = (VAR_6->i_pos_y > 0) ? VAR_6->i_pos_y : 0;
        }


        const int VAR_14 = VAR_9->i_alpha != -1 ? VAR_9->i_alpha : VAR_7->i_alpha;
        if( FUNC_3( VAR_6->p_blend, VAR_12, VAR_13, VAR_11 ) ||
            FUNC_2( VAR_6->p_blend, VAR_8, VAR_6->i_pos_x, VAR_6->i_pos_y,
                          VAR_10, VAR_14 ) )
        {
            FUNC_5( VAR_4, "failed to blend a picture" );
        }
    }
    FUNC_10( &VAR_6->lock );

exit:
    FUNC_8( VAR_5 );
    return VAR_8;
}
