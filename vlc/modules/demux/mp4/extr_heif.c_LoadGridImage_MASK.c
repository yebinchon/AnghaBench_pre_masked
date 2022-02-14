
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int video_format_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct heif_private_t {int p_root; } ;
struct TYPE_17__ {unsigned int i_visible_width; unsigned int i_visible_height; } ;
struct TYPE_19__ {TYPE_3__* p; TYPE_2__ format; } ;
typedef TYPE_4__ picture_t ;
typedef int image_handler_t ;
struct TYPE_16__ {int i_chroma; } ;
struct TYPE_20__ {int i_codec; TYPE_1__ video; } ;
typedef TYPE_5__ es_format_t ;
struct TYPE_21__ {scalar_t__ p_sys; } ;
typedef TYPE_6__ demux_t ;
typedef int block_t ;
struct TYPE_18__ {unsigned int i_lines; int i_pitch; int * p_pixels; } ;
typedef int MP4_Box_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int ,char*,int ,int *) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_6__*,int ,int const*) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int *,TYPE_5__*,int const**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 TYPE_4__* FUNC_5 (int *,int *,TYPE_5__*,int *) ;
 int FUNC_6 (int *,int const*,size_t) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9( demux_t *VAR_6,
                          image_handler_t *VAR_7,
                          uint32_t VAR_8,
                               uint8_t *VAR_9,
                               unsigned VAR_10, unsigned VAR_11,
                               unsigned VAR_12, unsigned VAR_13 )
{
    struct heif_private_t *VAR_14 = (void *) VAR_6->p_sys;

    MP4_Box_t *VAR_15 = FUNC_0( VAR_14->p_root, ((void*)0),
                                 VAR_0, "meta/iinf/infe",
                                 VAR_1, &VAR_8 );
    if( !VAR_15 )
        return VAR_4;

    es_format_t VAR_16;
    FUNC_4(&VAR_16, VAR_2, 0);

    const MP4_Box_t *VAR_17 = ((void*)0);
    if( FUNC_2( VAR_6, VAR_15, &VAR_16, &VAR_17 ) != VAR_5 )
    {
        FUNC_3( &VAR_16 );
        return VAR_4;
    }

    block_t *VAR_18 = FUNC_1( VAR_6, VAR_8,
                                         VAR_17 );
    if(!VAR_18)
    {
        FUNC_3( &VAR_16 );
        return VAR_4;
    }

    video_format_t VAR_19;
    FUNC_8( &VAR_19, VAR_3 );

    VAR_16.video.i_chroma = VAR_16.i_codec;

    picture_t *VAR_20 = FUNC_5( VAR_7, VAR_18, &VAR_16, &VAR_19 );

    FUNC_3( &VAR_16 );

    if ( !VAR_20 )
        return VAR_4;

    const unsigned VAR_21 = VAR_20->format.i_visible_width;
    const unsigned VAR_22 = VAR_20->format.i_visible_height;
    uint8_t *VAR_23 = VAR_9;
    VAR_23 += (VAR_10 / VAR_11) * (VAR_12 * VAR_22 * 4);
    for(;1;)
    {
        const unsigned VAR_24 = (VAR_10 % VAR_11) * VAR_21;
        const unsigned VAR_25 = (VAR_10 / VAR_11) * VAR_22;
        if( VAR_24 > VAR_12 )
            break;
        const uint8_t *VAR_26 = VAR_20->p[0].p_pixels;
        unsigned VAR_27 = VAR_20->p[0].i_lines;
        if(VAR_25 + VAR_27 >= VAR_13)
            VAR_27 = VAR_13 - VAR_25;
        for(unsigned VAR_28=0; VAR_28<VAR_27; VAR_28++)
        {
            size_t VAR_29 = VAR_21;
            if( VAR_24 + VAR_21 > VAR_12 )
                VAR_29 = VAR_12 - VAR_24;
            FUNC_6( &VAR_23[VAR_24 * 4], VAR_26, VAR_29 * 4 );
            VAR_23 += VAR_12 * 4;
            VAR_26 += VAR_20->p[0].i_pitch;
        }

        break;
    }

    FUNC_7( VAR_20 );

    return VAR_5;
}
