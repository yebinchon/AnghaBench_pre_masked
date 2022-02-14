
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int i_rmask; int i_gmask; int i_bmask; int i_visible_height; int i_visible_width; TYPE_1__* p_palette; } ;
struct TYPE_11__ {int i_codec; scalar_t__ i_original_fourcc; size_t i_extra; TYPE_2__ video; int p_extra; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_12__ {int biClrUsed; int biSize; int biBitCount; int biPlanes; scalar_t__ biClrImportant; scalar_t__ biYPelsPerMeter; scalar_t__ biXPelsPerMeter; scalar_t__ biSizeImage; int biHeight; int biWidth; scalar_t__ biCompression; } ;
typedef TYPE_4__ VLC_BITMAPINFOHEADER ;
struct TYPE_9__ {int i_entries; int * palette; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (char,char,char,char) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static inline VLC_BITMAPINFOHEADER * FUNC_5( const es_format_t *VAR_2,
                                                             size_t *VAR_3 )
{
    uint16_t VAR_4 = 0;
    uint32_t VAR_5 = 0;
    bool VAR_6 = 0;
    switch( VAR_2->i_codec )
    {
        case 130:
            VAR_4 = 32;
            VAR_5 = FUNC_0( VAR_2 ) ? VAR_1 : VAR_0;
            break;
        case 136:
        case 129:
        case 137:
            VAR_4 = 32;
            VAR_5 = FUNC_0( VAR_2 ) ? VAR_1 : VAR_0;
            VAR_6 = 1;
            break;
        case 131:
            VAR_4 = 24;
            VAR_5 = VAR_1;
            break;
        case 132:
        case 133:
            VAR_4 = 16;
            VAR_5 = VAR_0;
            break;
        case 128:
        case 135:
            VAR_4 = 8;
            VAR_5 = VAR_1;
            break;
        case 134:
            VAR_5 = FUNC_2( 'X', 'V', 'I', 'D' );
            break;
        default:
            VAR_5 = VAR_2->i_original_fourcc
                ? VAR_2->i_original_fourcc : VAR_2->i_codec;
            break;
    }

    size_t VAR_7 = 0;
    size_t VAR_8 = 0;
    if( VAR_5 == VAR_0 )
        VAR_8 = (VAR_6) ? 16 : 12;
    else if ( VAR_2->i_codec == 128 )
        VAR_8 = VAR_2->video.p_palette ? (VAR_2->video.p_palette->i_entries * 4) : 0;
    else
        VAR_7 = VAR_2->i_extra;

    VLC_BITMAPINFOHEADER *VAR_9 = FUNC_3( sizeof(VLC_BITMAPINFOHEADER) +
                                          VAR_7 + VAR_8 );
    if( VAR_9 == ((void*)0) )
        return ((void*)0);

    uint8_t *VAR_10 = (uint8_t *) &VAR_9[1];
    uint8_t *VAR_11 = VAR_10 + VAR_7;
    VAR_9->biClrUsed = 0;
    if( VAR_5 == VAR_0 )
    {
        FUNC_1( &VAR_11[0], VAR_2->video.i_rmask );
        FUNC_1( &VAR_11[4], VAR_2->video.i_gmask );
        FUNC_1( &VAR_11[8], VAR_2->video.i_bmask );
        if( VAR_6 )
        {
            FUNC_1( &VAR_11[12], ~(VAR_2->video.i_rmask |
                                         VAR_2->video.i_gmask |
                                         VAR_2->video.i_bmask) );
        }
    }
    else if( VAR_2->i_codec == 128 )
    {
        for( int VAR_12 = 0; VAR_12 < VAR_2->video.p_palette->i_entries; VAR_12++ )
            FUNC_4( &VAR_11[VAR_12 * 4], VAR_2->video.p_palette->palette[VAR_12], 4 );
        VAR_9->biClrUsed = VAR_2->video.p_palette->i_entries;
    }
    else if( VAR_2->i_extra )
    {
        FUNC_4( VAR_10, VAR_2->p_extra, VAR_2->i_extra );
    }

    VAR_9->biSize = sizeof(VLC_BITMAPINFOHEADER) + VAR_7;
    VAR_9->biCompression = VAR_5;
    VAR_9->biBitCount = VAR_4;
    VAR_9->biWidth = VAR_2->video.i_visible_width;
    VAR_9->biHeight = VAR_2->video.i_visible_height;
    VAR_9->biPlanes = 1;
    VAR_9->biSizeImage = 0;
    VAR_9->biXPelsPerMeter = 0;
    VAR_9->biYPelsPerMeter = 0;
    VAR_9->biClrImportant = 0;

    *VAR_3 = sizeof(VLC_BITMAPINFOHEADER) + VAR_7 + VAR_8;
    return VAR_9;
}
