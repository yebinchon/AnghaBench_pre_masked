
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_10__ {TYPE_3__** pp_elems; } ;
struct TYPE_8__ {int closed; int live_thread; scalar_t__ live; int dl_thread; TYPE_4__ hds_streams; } ;
typedef TYPE_2__ stream_sys_t ;
struct TYPE_9__ {int dl_cond; } ;
typedef TYPE_3__ hds_stream_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5( vlc_object_t *VAR_0 )
{
    stream_t *VAR_1 = (stream_t*)VAR_0;
    stream_sys_t *VAR_2 = VAR_1->p_sys;


    hds_stream_t *VAR_3 = FUNC_2(&VAR_2->hds_streams) ?
        VAR_2->hds_streams.pp_elems[0] : ((void*)0);

    VAR_2->closed = 1;
    if (VAR_3)
        FUNC_3( & VAR_3->dl_cond );

    FUNC_4( VAR_2->dl_thread, ((void*)0) );

    if( VAR_2->live )
    {
        FUNC_4( VAR_2->live_thread, ((void*)0) );
    }

    FUNC_0( VAR_2 );
    FUNC_1( VAR_2 );
}
