
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * p_thumbnailer; } ;
typedef TYPE_3__ libvlc_priv_t ;
struct TYPE_10__ {int req; TYPE_2__* md; } ;
typedef TYPE_4__ libvlc_media_thumbnail_request_t ;
struct TYPE_8__ {TYPE_1__* p_libvlc_instance; } ;
struct TYPE_7__ {int p_libvlc_int; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3( libvlc_media_thumbnail_request_t *VAR_0 )
{
    libvlc_priv_t *VAR_1 = FUNC_1(VAR_0->md->p_libvlc_instance->p_libvlc_int);
    FUNC_0( VAR_1->p_thumbnailer != ((void*)0) );
    FUNC_2( VAR_1->p_thumbnailer, VAR_0->req );
}
