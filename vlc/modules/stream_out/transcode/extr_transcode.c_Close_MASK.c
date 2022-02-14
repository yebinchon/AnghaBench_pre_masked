
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_5__ {int lock; int senc_cfg; int afilters_cfg; int aenc_cfg; int vfilters_cfg; int venc_cfg; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( vlc_object_t * VAR_0 )
{
    sout_stream_t *VAR_1 = (sout_stream_t*)VAR_0;
    sout_stream_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_2( &VAR_2->venc_cfg );
    FUNC_1( &VAR_2->vfilters_cfg );

    FUNC_2( &VAR_2->aenc_cfg );
    FUNC_1( &VAR_2->afilters_cfg );

    FUNC_2( &VAR_2->senc_cfg );

    FUNC_3( &VAR_2->lock );

    FUNC_0( VAR_2 );
}
