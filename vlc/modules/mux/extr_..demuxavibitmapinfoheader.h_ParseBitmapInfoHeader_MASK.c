
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int video_palette_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct bitmapinfoheader_properties {int i_stride; int b_flipped; } ;
struct TYPE_11__ {int i_height; int i_visible_height; int i_sar_den; int i_sar_num; TYPE_1__* p_palette; void* i_bmask; void* i_gmask; void* i_rmask; } ;
struct TYPE_9__ {scalar_t__ i_codec; size_t i_extra; TYPE_4__ video; int * p_extra; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_10__ {scalar_t__ biCompression; int biBitCount; int biClrUsed; int biWidth; int biHeight; } ;
typedef TYPE_3__ VLC_BITMAPINFOHEADER ;
struct TYPE_8__ {int i_entries; int ** palette; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (size_t,int) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int *,int const*,size_t) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,int,int,int,int,int ,int ) ;

__attribute__((used)) static inline int FUNC_7( VLC_BITMAPINFOHEADER *VAR_14, size_t VAR_15,
                                         es_format_t *VAR_16,
                                         struct bitmapinfoheader_properties *VAR_17 )
{

    const uint8_t *VAR_18 = (const uint8_t *) &VAR_14[1];
    size_t VAR_19;
    if( VAR_15 <= VAR_3 - sizeof(VLC_BITMAPINFOHEADER) &&
            VAR_15 >= sizeof(VLC_BITMAPINFOHEADER) )
        VAR_19 = VAR_15 - sizeof(VLC_BITMAPINFOHEADER);
    else
        VAR_19 = 0;

    if( VAR_14->biCompression == VAR_1 ||
        VAR_14->biCompression == VAR_0 )
    {
        switch( VAR_14->biBitCount )
        {
            case 32:
                VAR_16->i_codec = VAR_10;
                FUNC_1( VAR_16->i_codec, VAR_16 );
                break;
            case 24:
                VAR_16->i_codec = VAR_9;
                FUNC_1( VAR_16->i_codec, VAR_16 );
                break;
            case 16:
                VAR_16->i_codec = VAR_8;
                FUNC_1( VAR_16->i_codec, VAR_16 );
                break;
            case 15:
                VAR_16->i_codec = VAR_7;
                FUNC_1( VAR_16->i_codec, VAR_16 );
                break;
            case 9:
                VAR_16->i_codec = VAR_6;
                break;
            case 8:
                if ( VAR_14->biClrUsed )
                    VAR_16->i_codec = VAR_11;
                else
                    VAR_16->i_codec = VAR_5;
                break;
            default:
                if( VAR_14->biClrUsed < 8 )
                    VAR_16->i_codec = VAR_11;
                break;
        }

        if( VAR_14->biCompression == VAR_0 )
        {
            if( VAR_19 >= 3 * sizeof(uint32_t) )
            {
                VAR_16->video.i_rmask = FUNC_0( &VAR_18[0] );
                VAR_16->video.i_gmask = FUNC_0( &VAR_18[4] );
                VAR_16->video.i_bmask = FUNC_0( &VAR_18[8] );
                if( VAR_19 >= 4 * sizeof(uint32_t) )
                {
                    uint32_t VAR_20 = FUNC_0( &VAR_18[8] );
                    if( VAR_16->i_codec == VAR_10 && VAR_20 == 0xFF )
                        VAR_16->i_codec = VAR_4;
                }
            }
            FUNC_1( VAR_16->i_codec, VAR_16 );
        }
        else if( VAR_16->i_codec == VAR_11 )
        {


            VAR_16->video.p_palette = FUNC_3( sizeof(video_palette_t) );
            if ( VAR_16->video.p_palette )
            {
                VAR_16->video.p_palette->i_entries = FUNC_2(VAR_19/4, 256);
                for( int VAR_21 = 0; VAR_21 < VAR_16->video.p_palette->i_entries; VAR_21++ )
                {
                    for( int VAR_22 = 0; VAR_22 < 4; VAR_22++ )
                        VAR_16->video.p_palette->palette[VAR_21][VAR_22] = VAR_18[4*VAR_21+VAR_22];
                }
            }
        }

        VAR_17->i_stride = VAR_14->biWidth * (VAR_14->biBitCount >> 3);


        if ( VAR_14->biHeight <= VAR_2 )
            VAR_17->b_flipped = 1;


    }
    else
    {
        VAR_16->i_codec = VAR_14->biCompression;


        if( VAR_19 > 0 )
        {
            VAR_16->p_extra = FUNC_3( VAR_19 );
            if( FUNC_5(VAR_16->p_extra == ((void*)0)) )
                return VAR_12;
            VAR_16->i_extra = VAR_19;
            FUNC_4( VAR_16->p_extra, VAR_18, VAR_19 );
        }


        FUNC_1( VAR_16->i_codec, VAR_16 );
    }

    FUNC_6( &VAR_16->video, VAR_16->i_codec,
                        VAR_14->biWidth, VAR_14->biHeight,
                        VAR_14->biWidth, VAR_14->biHeight,
                        VAR_16->video.i_sar_num, VAR_16->video.i_sar_den );




    if ( VAR_16->video.i_height > VAR_2 )
    {
        VAR_16->video.i_visible_height =
        VAR_16->video.i_height = -1 * VAR_14->biHeight;
    }

    return VAR_13;
}
