
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int picture_t ;
typedef int libvlc_picture_t ;
struct TYPE_11__ {int crop; int height; int width; int type; TYPE_5__* md; } ;
typedef TYPE_4__ libvlc_media_thumbnail_request_t ;
struct TYPE_12__ {int event_manager; TYPE_1__* p_libvlc_instance; } ;
typedef TYPE_5__ libvlc_media_t ;
struct TYPE_9__ {int * p_thumbnail; } ;
struct TYPE_10__ {TYPE_2__ media_thumbnail_generated; } ;
struct TYPE_13__ {TYPE_3__ u; int type; } ;
typedef TYPE_6__ libvlc_event_t ;
struct TYPE_8__ {int p_libvlc_int; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int * FUNC_2 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( void* VAR_1, picture_t* VAR_2 )
{
    libvlc_media_thumbnail_request_t *VAR_3 = VAR_1;
    libvlc_media_t *VAR_4 = VAR_3->md;
    libvlc_event_t VAR_5;
    VAR_5.type = VAR_0;
    libvlc_picture_t* VAR_6 = ((void*)0);
    if ( VAR_2 != ((void*)0) )
        VAR_6 = FUNC_2( FUNC_0(VAR_4->p_libvlc_instance->p_libvlc_int),
                                    VAR_2, VAR_3->type, VAR_3->width, VAR_3->height,
                                    VAR_3->crop );
    VAR_5.u.media_thumbnail_generated.p_thumbnail = VAR_6;
    FUNC_1( &VAR_4->event_manager, &VAR_5 );
    if ( VAR_6 != ((void*)0) )
        FUNC_3( VAR_6 );
}
