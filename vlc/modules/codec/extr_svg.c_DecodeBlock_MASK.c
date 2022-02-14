
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ date; TYPE_1__* p; } ;
typedef TYPE_3__ picture_t ;
typedef double int32_t ;
struct TYPE_26__ {double i_width; double i_height; double i_visible_width; double i_visible_height; int i_sar_num; int i_sar_den; int i_rmask; int i_gmask; int i_bmask; int i_chroma; } ;
struct TYPE_20__ {TYPE_8__ video; int i_codec; } ;
struct TYPE_22__ {TYPE_2__ fmt_out; scalar_t__ p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_23__ {double f_scale; double i_width; double i_height; } ;
typedef TYPE_5__ decoder_sys_t ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_24__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_25__ {int width; int height; } ;
struct TYPE_19__ {int i_pitch; int i_lines; int p_pixels; } ;
typedef int RsvgHandle ;
typedef TYPE_7__ RsvgDimensionData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_6__*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,double,double,int) ;
 int FUNC_5 (int *,double,double) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *,TYPE_7__*) ;
 int * FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_17( decoder_t *VAR_5, block_t *VAR_6 )
{
    decoder_sys_t *VAR_7 = (decoder_sys_t *) VAR_5->p_sys;
    picture_t *VAR_8 = ((void*)0);
    int32_t VAR_9, VAR_10;

    RsvgHandle *VAR_11 = ((void*)0);
    cairo_surface_t *VAR_12 = ((void*)0);
    cairo_t *VAR_13 = ((void*)0);

    if( VAR_6 == ((void*)0) )
        return VAR_2;

    if( VAR_6->i_flags & VAR_0)
    {
        FUNC_1( VAR_6 );
        return VAR_2;
    }

    VAR_11 = FUNC_14( VAR_6->p_buffer, VAR_6->i_buffer, ((void*)0) );
    if( !VAR_11 )
        goto done;

    RsvgDimensionData VAR_14;
    FUNC_13( VAR_11, &VAR_14 );

    if( VAR_7->f_scale > 0.0 )
    {
        VAR_9 = (int32_t)(VAR_7->f_scale * VAR_14.width);
        VAR_10 = (int32_t)(VAR_7->f_scale * VAR_14.height);
    }
    else
    {

        if( VAR_7->i_width < 0 && VAR_7->i_height > 0 )
        {
            VAR_9 = VAR_14.width * VAR_7->i_height / VAR_14.height;
            VAR_10 = VAR_7->i_height;
        }
        else if( VAR_7->i_width > 0 && VAR_7->i_height < 0 )
        {
            VAR_9 = VAR_7->i_width;
            VAR_10 = VAR_14.height * VAR_7->i_width / VAR_14.height;
        }
        else if( VAR_7->i_width > 0 && VAR_7->i_height > 0 )
        {
            VAR_9 = VAR_14.width * VAR_7->i_height / VAR_14.height;
            VAR_10 = VAR_7->i_height;
        }
        else
        {
            VAR_9 = VAR_14.width;
            VAR_10 = VAR_14.height;
        }
    }

    VAR_5->fmt_out.i_codec =
    VAR_5->fmt_out.video.i_chroma = VAR_3;
    VAR_5->fmt_out.video.i_width = VAR_9;
    VAR_5->fmt_out.video.i_height = VAR_10;
    VAR_5->fmt_out.video.i_visible_width = VAR_9;
    VAR_5->fmt_out.video.i_visible_height = VAR_10;
    VAR_5->fmt_out.video.i_sar_num = 1;
    VAR_5->fmt_out.video.i_sar_den = 1;
    VAR_5->fmt_out.video.i_rmask = 0x80800000;
    VAR_5->fmt_out.video.i_gmask = 0x0000ff00;
    VAR_5->fmt_out.video.i_bmask = 0x000000ff;
    FUNC_16(&VAR_5->fmt_out.video);


    if( FUNC_9( VAR_5 ) )
        goto done;
    VAR_8 = FUNC_7( VAR_5 );
    if( !VAR_8 )
        goto done;





    FUNC_11(VAR_8->p[0].p_pixels, 0, VAR_8->p[0].i_pitch * VAR_8->p[0].i_lines);
    VAR_12 = FUNC_4( VAR_8->p->p_pixels,
                                                   VAR_1,
                                                   VAR_9, VAR_10,
                                                   VAR_8->p[0].i_pitch );
    if( !VAR_12 )
    {
        FUNC_12( VAR_8 );
        VAR_8 = ((void*)0);
        goto done;
    }


    VAR_13 = FUNC_2( VAR_12 );
    if( !VAR_13 )
    {
        FUNC_12( VAR_8 );
        VAR_8 = ((void*)0);
        goto done;
    }

    if ( VAR_9 != VAR_14.width || VAR_10 != VAR_14.height )
    {
        double VAR_15, VAR_16;
        if ( VAR_7->f_scale > 0.0 && !(VAR_7->i_width > 0 || VAR_7->i_height > 0) )
            VAR_15 = VAR_16 = VAR_7->f_scale;
        else
        {
            double VAR_17 = (double) (VAR_14.width * VAR_5->fmt_out.video.i_sar_num) /
                    (VAR_14.height * VAR_5->fmt_out.video.i_sar_den);
            VAR_15 = VAR_17 * VAR_9 / VAR_14.width;
            VAR_16 = VAR_17 * VAR_10 / VAR_14.height;
        }
        FUNC_5(VAR_13, VAR_15, VAR_16);
    }

    if( !FUNC_15( VAR_11, VAR_13 ) )
    {
        FUNC_12( VAR_8 );
        VAR_8 = ((void*)0);
        goto done;
    }

    VAR_8->date = VAR_6->i_pts != VAR_4 ? VAR_6->i_pts : VAR_6->i_dts;

done:
    if( VAR_11 )
        FUNC_10( FUNC_0( VAR_11 ) );
    if( VAR_13 )
        FUNC_3( VAR_13 );
    if( VAR_12 )
        FUNC_6( VAR_12 );

    FUNC_1( VAR_6 );
    if( VAR_8 != ((void*)0) )
        FUNC_8( VAR_5, VAR_8 );
    return VAR_2;
}
