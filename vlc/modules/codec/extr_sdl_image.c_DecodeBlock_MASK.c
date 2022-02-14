
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_26__ {scalar_t__ date; TYPE_3__* p; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_23__ {int i_width; int i_height; int i_sar_num; int i_sar_den; } ;
struct TYPE_24__ {TYPE_1__ video; int i_codec; } ;
struct TYPE_27__ {TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_28__ {scalar_t__ psz_sdl_type; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_29__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_7__ block_t ;
struct TYPE_30__ {int w; int h; void** pixels; int pitch; TYPE_16__* format; } ;
struct TYPE_25__ {void** p_pixels; int i_pitch; } ;
struct TYPE_22__ {int BitsPerPixel; } ;
typedef TYPE_8__ SDL_Surface ;
typedef int SDL_RWops ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_8__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,TYPE_16__*,void**,void**,void**) ;
 int FUNC_4 (int ,TYPE_16__*,void**,void**,void**,void**) ;
 int * FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (TYPE_7__*) ;
 TYPE_4__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (void**,void**,int) ;
 int FUNC_11 (TYPE_5__*,char*,int) ;

__attribute__((used)) static int FUNC_12( decoder_t *VAR_6, block_t *VAR_7 )
{
    decoder_sys_t *VAR_8 = VAR_6->p_sys;
    picture_t *VAR_9 = ((void*)0);
    SDL_Surface *VAR_10;
    SDL_RWops *VAR_11;

    if( VAR_7 == ((void*)0) )
        return VAR_1;

    if( VAR_7->i_flags & VAR_0 )
    {
        FUNC_6( VAR_7 );
        return VAR_1;
    }

    VAR_11 = FUNC_5( VAR_7->p_buffer, VAR_7->i_buffer );


    VAR_10 = FUNC_1( VAR_11, 1, (char*)VAR_8->psz_sdl_type );
    if ( VAR_10 == ((void*)0) )
    {
        FUNC_11( VAR_6, "SDL_image couldn't load the image (%s)",
                  FUNC_0() );
        goto error;
    }

    switch ( VAR_10->format->BitsPerPixel )
    {
    case 16:
        VAR_6->fmt_out.i_codec = VAR_2;
        break;
    case 8:
    case 24:
        VAR_6->fmt_out.i_codec = VAR_3;
        break;
    case 32:
        VAR_6->fmt_out.i_codec = VAR_4;
        break;
    default:
        FUNC_11( VAR_6, "unknown bits/pixel format (%d)",
                  VAR_10->format->BitsPerPixel );
        goto error;
    }
    VAR_6->fmt_out.video.i_width = VAR_10->w;
    VAR_6->fmt_out.video.i_height = VAR_10->h;
    VAR_6->fmt_out.video.i_sar_num = 1;
    VAR_6->fmt_out.video.i_sar_den = 1;


    if( FUNC_9( VAR_6 ) )
        goto error;
    VAR_9 = FUNC_7( VAR_6 );
    if ( VAR_9 == ((void*)0) ) goto error;

    switch ( VAR_10->format->BitsPerPixel )
    {
        case 8:
        {
            for ( int VAR_12 = 0; VAR_12 < VAR_10->h; VAR_12++ )
            {
                uint8_t *VAR_13 = (uint8_t*)VAR_10->pixels + VAR_12 * VAR_10->pitch;
                uint8_t *VAR_14 = VAR_9->p[0].p_pixels + VAR_12 * VAR_9->p[0].i_pitch;
                for ( int VAR_15 = 0; VAR_15 < VAR_10->w; VAR_15++ )
                {
                    uint8_t VAR_16, VAR_17, VAR_18;
                    FUNC_3( *(VAR_13++), VAR_10->format,
                                &VAR_16, &VAR_17, &VAR_18 );
                    *(VAR_14++) = VAR_16;
                    *(VAR_14++) = VAR_17;
                    *(VAR_14++) = VAR_18;
                }
            }
            break;
        }
        case 16:
        {
            uint8_t *VAR_19 = VAR_10->pixels;
            uint8_t *VAR_20 = VAR_9->p[0].p_pixels;
            int VAR_21 = VAR_9->p[0].i_pitch < VAR_10->pitch ?
                VAR_9->p[0].i_pitch : VAR_10->pitch;

            for ( int VAR_22 = 0; VAR_22 < VAR_10->h; VAR_22++ )
            {
                FUNC_10( VAR_20, VAR_19, VAR_21 );
                VAR_19 += VAR_10->pitch;
                VAR_20 += VAR_9->p[0].i_pitch;
            }
            break;
        }
        case 24:
        {
            for ( int VAR_23 = 0; VAR_23 < VAR_10->h; VAR_23++ )
            {
                uint8_t *VAR_24 = (uint8_t*)VAR_10->pixels + VAR_23 * VAR_10->pitch;
                uint8_t *VAR_25 = VAR_9->p[0].p_pixels + VAR_23 * VAR_9->p[0].i_pitch;
                for ( int VAR_26 = 0; VAR_26 < VAR_10->w; VAR_26++ )
                {
                    uint8_t VAR_27, VAR_28, VAR_29;
                    FUNC_3( *(uint32_t*)VAR_24, VAR_10->format,
                                &VAR_27, &VAR_28, &VAR_29 );
                    *(VAR_25++) = VAR_27;
                    *(VAR_25++) = VAR_28;
                    *(VAR_25++) = VAR_29;
                    VAR_24 += 3;
                }
            }
            break;
        }
        case 32:
        {
            for ( int VAR_30 = 0; VAR_30 < VAR_10->h; VAR_30++ )
            {
                uint8_t *VAR_31 = (uint8_t*)VAR_10->pixels + VAR_30 * VAR_10->pitch;
                uint8_t *VAR_32 = VAR_9->p[0].p_pixels + VAR_30 * VAR_9->p[0].i_pitch;
                for ( int VAR_33 = 0; VAR_33 < VAR_10->w; VAR_33++ )
                {
                    uint8_t VAR_34, VAR_35, VAR_36, VAR_37;
                    FUNC_4( *(uint32_t*)VAR_31, VAR_10->format,
                                &VAR_34, &VAR_35, &VAR_36, &VAR_37 );
                    *(VAR_32++) = VAR_36;
                    *(VAR_32++) = VAR_35;
                    *(VAR_32++) = VAR_34;
                    *(VAR_32++) = VAR_37;
                    VAR_31 += 4;
                }
            }
            break;
        }
    }

    VAR_9->date = (VAR_7->i_pts != VAR_5) ?
        VAR_7->i_pts : VAR_7->i_dts;

    FUNC_8( VAR_6, VAR_9 );

error:
    if ( VAR_10 != ((void*)0) ) FUNC_2( VAR_10 );
    FUNC_6( VAR_7 );
    return VAR_1;
}
