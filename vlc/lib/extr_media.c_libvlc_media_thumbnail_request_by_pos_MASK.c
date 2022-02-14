
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ libvlc_time_t ;
typedef scalar_t__ libvlc_thumbnailer_seek_speed_t ;
struct TYPE_15__ {int * p_thumbnailer; } ;
typedef TYPE_2__ libvlc_priv_t ;
typedef int libvlc_picture_type_t ;
struct TYPE_16__ {unsigned int width; unsigned int height; int crop; int * req; int type; TYPE_4__* md; } ;
typedef TYPE_3__ libvlc_media_thumbnail_request_t ;
struct TYPE_17__ {int p_input_item; TYPE_1__* p_libvlc_instance; } ;
typedef TYPE_4__ libvlc_media_t ;
struct TYPE_14__ {int p_libvlc_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,float,int ,int ,int ,int ,TYPE_3__*) ;

libvlc_media_thumbnail_request_t*
FUNC_9( libvlc_media_t *VAR_5, float VAR_6,
                                       libvlc_thumbnailer_seek_speed_t VAR_7,
                                       unsigned int VAR_8, unsigned int VAR_9,
                                       bool VAR_10, libvlc_picture_type_t VAR_11,
                                       libvlc_time_t VAR_12 )
{
    FUNC_1( VAR_5 );
    libvlc_priv_t *VAR_13 = FUNC_5(VAR_5->p_libvlc_instance->p_libvlc_int);
    if( FUNC_7( VAR_13->p_thumbnailer == ((void*)0) ) )
        return ((void*)0);
    libvlc_media_thumbnail_request_t *VAR_14 = FUNC_6( sizeof( *VAR_14 ) );
    if ( FUNC_7( VAR_14 == ((void*)0) ) )
        return ((void*)0);

    VAR_14->md = VAR_5;
    VAR_14->width = VAR_8;
    VAR_14->height = VAR_9;
    VAR_14->crop = VAR_10;
    VAR_14->type = VAR_11;
    FUNC_4( VAR_5 );
    VAR_14->req = FUNC_8( VAR_13->p_thumbnailer, VAR_6,
        VAR_7 == VAR_3 ?
            VAR_0 : VAR_1,
        VAR_5->p_input_item,
        VAR_12 > 0 ? FUNC_0( VAR_12 ) : VAR_2,
        VAR_4, VAR_14 );
    if ( VAR_14->req == ((void*)0) )
    {
        FUNC_2( VAR_14 );
        FUNC_3( VAR_5 );
        return ((void*)0);
    }
    return VAR_14;
}
