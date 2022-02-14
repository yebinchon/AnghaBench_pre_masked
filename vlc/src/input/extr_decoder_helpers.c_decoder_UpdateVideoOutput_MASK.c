
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int vlc_video_context ;
struct TYPE_27__ {unsigned int plane_count; TYPE_3__* p; } ;
typedef TYPE_9__ vlc_chroma_description_t ;
struct TYPE_18__ {int i_visible_height; int i_sar_num; int i_sar_den; int i_width; int i_height; int i_visible_width; scalar_t__ i_y_offset; scalar_t__ i_x_offset; int i_chroma; } ;
struct TYPE_24__ {TYPE_12__ video; int i_codec; } ;
struct TYPE_22__ {int i_visible_width; int i_visible_height; scalar_t__ i_y_offset; scalar_t__ i_x_offset; } ;
struct TYPE_23__ {scalar_t__ i_cat; TYPE_4__ video; } ;
struct TYPE_17__ {TYPE_8__* cbs; TYPE_6__ fmt_out; TYPE_5__ fmt_in; } ;
typedef TYPE_10__ decoder_t ;
struct TYPE_25__ {int (* format_update ) (TYPE_10__*,int *) ;} ;
struct TYPE_26__ {TYPE_7__ video; } ;
struct TYPE_20__ {int den; } ;
struct TYPE_19__ {int den; } ;
struct TYPE_21__ {TYPE_2__ h; TYPE_1__ w; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_10__*,char*) ;
 int FUNC_1 (TYPE_10__*,int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_10__*,char*) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (int) ;
 TYPE_9__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int*,int*,int,int,int) ;

int FUNC_9( decoder_t *VAR_1, vlc_video_context *VAR_2 )
{
    FUNC_5( VAR_1->fmt_in.i_cat == VAR_0 && VAR_1->cbs != ((void*)0) );
    if ( FUNC_2(VAR_1->fmt_in.i_cat != VAR_0 || VAR_1->cbs == ((void*)0)) )
        return -1;


    VAR_1->fmt_out.video.i_chroma = VAR_1->fmt_out.i_codec;

    if( VAR_1->fmt_out.video.i_visible_height == 1088 &&
        FUNC_3( VAR_1, "hdtv-fix" ) )
    {
        VAR_1->fmt_out.video.i_visible_height = 1080;
        if( !(VAR_1->fmt_out.video.i_sar_num % 136))
        {
            VAR_1->fmt_out.video.i_sar_num *= 135;
            VAR_1->fmt_out.video.i_sar_den *= 136;
        }
        FUNC_0( VAR_1, "Fixing broken HDTV stream (display_height=1088)");
    }

    if( !VAR_1->fmt_out.video.i_sar_num || !VAR_1->fmt_out.video.i_sar_den )
    {
        VAR_1->fmt_out.video.i_sar_num = 1;
        VAR_1->fmt_out.video.i_sar_den = 1;
    }

    FUNC_8( &VAR_1->fmt_out.video.i_sar_num, &VAR_1->fmt_out.video.i_sar_den,
                    VAR_1->fmt_out.video.i_sar_num, VAR_1->fmt_out.video.i_sar_den, 50000 );

    if( FUNC_7( VAR_1->fmt_out.video.i_chroma ) )
    {
        const vlc_chroma_description_t *VAR_3 = FUNC_6( VAR_1->fmt_out.video.i_chroma );
        for( unsigned int VAR_4 = 0; VAR_3 && VAR_4 < VAR_3->plane_count; VAR_4++ )
        {
            while( VAR_1->fmt_out.video.i_width % VAR_3->p[VAR_4].w.den )
                VAR_1->fmt_out.video.i_width++;
            while( VAR_1->fmt_out.video.i_height % VAR_3->p[VAR_4].h.den )
                VAR_1->fmt_out.video.i_height++;
        }
    }

    if( !VAR_1->fmt_out.video.i_visible_width ||
        !VAR_1->fmt_out.video.i_visible_height )
    {
        if( VAR_1->fmt_in.video.i_visible_width &&
            VAR_1->fmt_in.video.i_visible_height )
        {
            VAR_1->fmt_out.video.i_visible_width = VAR_1->fmt_in.video.i_visible_width;
            VAR_1->fmt_out.video.i_visible_height = VAR_1->fmt_in.video.i_visible_height;
            VAR_1->fmt_out.video.i_x_offset = VAR_1->fmt_in.video.i_x_offset;
            VAR_1->fmt_out.video.i_y_offset = VAR_1->fmt_in.video.i_y_offset;
        }
        else
        {
            VAR_1->fmt_out.video.i_visible_width = VAR_1->fmt_out.video.i_width;
            VAR_1->fmt_out.video.i_visible_height = VAR_1->fmt_out.video.i_height;
            VAR_1->fmt_out.video.i_x_offset = 0;
            VAR_1->fmt_out.video.i_y_offset = 0;
        }
    }

    FUNC_4( &VAR_1->fmt_out.video );

    if (VAR_1->cbs->video.format_update == ((void*)0))
        return 0;

    return VAR_1->cbs->video.format_update( VAR_1, VAR_2 );
}
