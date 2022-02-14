
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_14__ {TYPE_1__* fmt; int * vout; } ;
typedef TYPE_5__ vout_device_configuration_t ;
typedef int vlc_decoder_device ;
struct TYPE_11__ {scalar_t__ i_width; scalar_t__ i_height; scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_x_offset; scalar_t__ i_y_offset; scalar_t__ i_chroma; int i_sar_den; int i_sar_num; scalar_t__ orientation; scalar_t__ multiview_mode; } ;
struct TYPE_12__ {TYPE_2__ video; } ;
struct TYPE_10__ {scalar_t__ i_width; scalar_t__ i_height; scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_x_offset; scalar_t__ i_y_offset; scalar_t__ orientation; scalar_t__ multiview_mode; scalar_t__ i_sar_den; scalar_t__ i_sar_num; } ;
struct TYPE_13__ {scalar_t__ i_codec; TYPE_1__ video; } ;
struct TYPE_15__ {TYPE_4__ fmt_out; } ;
struct decoder_owner {int vout_order; int reset_out_state; int p_fifo; int * out_pool; int lock; TYPE_3__ fmt; int * p_vout; int p_resource; TYPE_6__ dec; } ;
typedef int int64_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
typedef TYPE_6__ decoder_t ;


 int FUNC_0 (struct decoder_owner*) ;
 int * FUNC_1 (int ,TYPE_5__*,int*,int **) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct decoder_owner *VAR_0,
                              vout_thread_t **VAR_1, enum vlc_vout_order *VAR_2,
                              vlc_decoder_device **VAR_3)
{
    decoder_t *VAR_4 = &VAR_0->dec;
    bool VAR_5 = 0;

    if( VAR_0->p_vout == ((void*)0) )
    {
        FUNC_2(VAR_4, "vout: none found");
        VAR_5 = 1;
    }
    if( VAR_4->fmt_out.video.i_width != VAR_0->fmt.video.i_width
             || VAR_4->fmt_out.video.i_height != VAR_0->fmt.video.i_height )
    {
        FUNC_2(VAR_4, "vout change: decoder size");
        VAR_5 = 1;
    }
    if( VAR_4->fmt_out.video.i_visible_width != VAR_0->fmt.video.i_visible_width
             || VAR_4->fmt_out.video.i_visible_height != VAR_0->fmt.video.i_visible_height
             || VAR_4->fmt_out.video.i_x_offset != VAR_0->fmt.video.i_x_offset
             || VAR_4->fmt_out.video.i_y_offset != VAR_0->fmt.video.i_y_offset )
    {
        FUNC_2(VAR_4, "vout change: visible size");
        VAR_5 = 1;
    }
    if( VAR_4->fmt_out.i_codec != VAR_0->fmt.video.i_chroma )
    {
        FUNC_2(VAR_4, "vout change: chroma");
        VAR_5 = 1;
    }
    if( (int64_t)VAR_4->fmt_out.video.i_sar_num * VAR_0->fmt.video.i_sar_den !=
             (int64_t)VAR_4->fmt_out.video.i_sar_den * VAR_0->fmt.video.i_sar_num )
    {
        FUNC_2(VAR_4, "vout change: SAR");
        VAR_5 = 1;
    }
    if( VAR_4->fmt_out.video.orientation != VAR_0->fmt.video.orientation )
    {
        FUNC_2(VAR_4, "vout change: orientation");
        VAR_5 = 1;
    }
    if( VAR_4->fmt_out.video.multiview_mode != VAR_0->fmt.video.multiview_mode )
    {
        FUNC_2(VAR_4, "vout change: multiview");
        VAR_5 = 1;
    }

    if( !VAR_5 )
    {
        if (VAR_1)
        {
            FUNC_8( &VAR_0->lock );
            *VAR_1 = VAR_0->p_vout;
            *VAR_2 = VAR_0->vout_order;
            FUNC_9( &VAR_0->lock );
        }
        return 0;
    }

    if( !VAR_4->fmt_out.video.i_width ||
        !VAR_4->fmt_out.video.i_height ||
        VAR_4->fmt_out.video.i_width < VAR_4->fmt_out.video.i_visible_width ||
        VAR_4->fmt_out.video.i_height < VAR_4->fmt_out.video.i_visible_height )
    {

        return -1;
    }

    FUNC_8( &VAR_0->lock );

    vout_thread_t *VAR_6 = VAR_0->p_vout;
    VAR_0->p_vout = ((void*)0);
    FUNC_9( &VAR_0->lock );

    if ( VAR_3 ) *VAR_3 = ((void*)0);
    vout_device_configuration_t VAR_7 = {
        .vout = VAR_6, .fmt = &VAR_4->fmt_out.video,
    };
    VAR_6 = FUNC_1( VAR_0->p_resource,
                                    &VAR_7, VAR_2, VAR_3 );

    if (VAR_1)
        *VAR_1 = VAR_6;

    FUNC_8( &VAR_0->lock );
    VAR_0->p_vout = VAR_6;
    VAR_0->vout_order = *VAR_2;
    if ( VAR_3 )
    {
        if( VAR_6 == ((void*)0) && *VAR_3 != ((void*)0) )
        {
            FUNC_5( *VAR_3 );
            *VAR_3 = ((void*)0);
        }
    }

    FUNC_0( VAR_0 );
    VAR_0->fmt.video.i_chroma = VAR_4->fmt_out.i_codec;
    FUNC_9( &VAR_0->lock );

     if ( VAR_0->out_pool != ((void*)0) )
     {
         FUNC_4( VAR_0->out_pool );
         VAR_0->out_pool = ((void*)0);
     }

    if( VAR_6 == ((void*)0) )
    {
        FUNC_3( VAR_4, "failed to create video output" );
        return -1;
    }

    FUNC_6( VAR_0->p_fifo );
    VAR_0->reset_out_state = 1;
    FUNC_7( VAR_0->p_fifo );

    return 1;
}
