
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int i_bits_per_pixel; int i_height; int i_width; int i_visible_height; int i_visible_width; int i_chroma; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_16__ {TYPE_1__* p; } ;
typedef TYPE_3__ picture_t ;
typedef int guint8 ;
typedef int filter_t ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_18__ {int message; } ;
struct TYPE_17__ {int height; int width; } ;
struct TYPE_14__ {int i_pitch; int i_lines; int p_pixels; } ;
typedef int RsvgHandle ;
typedef TYPE_4__ RsvgDimensionData ;
typedef TYPE_5__ GError ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int *,char*,...) ;
 TYPE_3__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int * FUNC_11 (int const*,int ,TYPE_5__**) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int *,int *,int *,float*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ) ;

__attribute__((used)) static picture_t * FUNC_17( filter_t *VAR_2,
                                      const char *VAR_3 )
{
    RsvgHandle *VAR_4;
    GError *VAR_5 = ((void*)0);

    VAR_4 = FUNC_11( (const guint8 *)VAR_3,
                                          FUNC_13( VAR_3 ), &VAR_5 );
    if( !VAR_4 )
    {
        FUNC_7( VAR_2, "error while rendering SVG: %s", VAR_5->message );
        return ((void*)0);
    }

    RsvgDimensionData VAR_6;
    FUNC_10( VAR_4, &VAR_6 );
    float VAR_7;
    FUNC_14( VAR_2, &VAR_6.width, &VAR_6.height, &VAR_7 );


    video_format_t VAR_8;
    FUNC_16( &VAR_8, VAR_1 );
    VAR_8.i_bits_per_pixel = 32;
    VAR_8.i_chroma = VAR_1;
    VAR_8.i_width = VAR_8.i_visible_width = VAR_6.width;
    VAR_8.i_height = VAR_8.i_visible_height = VAR_6.height;

    picture_t *VAR_9 = FUNC_8( &VAR_8 );
    if( !VAR_9 )
    {
        FUNC_15( &VAR_8 );
        FUNC_5( FUNC_0( VAR_4 ) );
        return ((void*)0);
    }
    FUNC_6( VAR_9->p[0].p_pixels, 0x00, VAR_9->p[0].i_pitch * VAR_9->p[0].i_lines );

    cairo_surface_t* VAR_10 = FUNC_3( VAR_9->p->p_pixels,
                                                                    VAR_0,
                                                                    VAR_8.i_width, VAR_8.i_height,
                                                                    VAR_9->p[0].i_pitch );
    if( !VAR_10 )
    {
        FUNC_5( FUNC_0( VAR_4 ) );
        FUNC_9( VAR_9 );
        return ((void*)0);
    }

    cairo_t *VAR_11 = FUNC_1( VAR_10 );
    if( !VAR_11 )
    {
        FUNC_7( VAR_2, "error while creating cairo surface" );
        FUNC_4( VAR_10 );
        FUNC_5( FUNC_0( VAR_4 ) );
        FUNC_9( VAR_9 );
        return ((void*)0);
    }

    if( ! FUNC_12( VAR_4, VAR_11 ) )
    {
        FUNC_7( VAR_2, "error while rendering SVG" );
        FUNC_2( VAR_11 );
        FUNC_4( VAR_10 );
        FUNC_5( FUNC_0( VAR_4 ) );
        FUNC_9( VAR_9 );
        return ((void*)0);
    }

    FUNC_2( VAR_11 );
    FUNC_4( VAR_10 );
    FUNC_5( FUNC_0( VAR_4 ) );

    return VAR_9;
}
