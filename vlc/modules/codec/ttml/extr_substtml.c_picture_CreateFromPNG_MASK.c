
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int video_format_t ;
typedef int uint8_t ;
struct vlc_logger {int dummy; } ;
typedef int picture_t ;
typedef int image_handler_t ;
struct TYPE_14__ {int i_chroma; } ;
struct TYPE_16__ {int i_codec; TYPE_1__ video; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_15__ {int no_interact; struct vlc_logger* logger; } ;
struct TYPE_17__ {TYPE_2__ obj; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_18__ {int p_buffer; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int * FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,TYPE_5__*,TYPE_3__*,int *) ;
 int FUNC_7 (int ,int const*,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static picture_t * FUNC_10( decoder_t *VAR_3,
                                          const uint8_t *VAR_4, size_t VAR_5 )
{
    if( VAR_5 < 16 )
        return ((void*)0);
    video_format_t VAR_6;
    FUNC_9( &VAR_6, VAR_2 );
    es_format_t VAR_7;
    FUNC_3( &VAR_7, VAR_0, VAR_1 );
    VAR_7.video.i_chroma = VAR_7.i_codec;

    block_t *VAR_8 = FUNC_0( VAR_5 );
    if( !VAR_8 )
        return ((void*)0);
    FUNC_7( VAR_8->p_buffer, VAR_4, VAR_5 );

    picture_t *VAR_9 = ((void*)0);
    struct vlc_logger *VAR_10 = VAR_3->obj.logger;
    bool VAR_11 = VAR_3->obj.no_interact;
    VAR_3->obj.logger = ((void*)0);
    VAR_3->obj.no_interact = 1;
    image_handler_t *VAR_12 = FUNC_4( VAR_3 );
    if( VAR_12 )
    {
        VAR_9 = FUNC_6( VAR_12, VAR_8, &VAR_7, &VAR_6 );
        FUNC_5( VAR_12 );
    }
    else FUNC_1( VAR_8 );
    VAR_3->obj.no_interact = VAR_11;
    VAR_3->obj.logger = VAR_10;
    FUNC_2( &VAR_7 );
    FUNC_8( &VAR_6 );

    return VAR_9;
}
