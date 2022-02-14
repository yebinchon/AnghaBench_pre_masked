
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int i_tracks; struct TYPE_5__* track; struct TYPE_5__* p_subtitles; scalar_t__ p_vobsub_stream; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2( vlc_object_t *VAR_0 )
{
    demux_t *VAR_1 = (demux_t*)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_vobsub_stream )
        FUNC_1( VAR_2->p_vobsub_stream );


    for( int VAR_3 = 0; VAR_3 < VAR_2->i_tracks; VAR_3++ )
        FUNC_0( VAR_2->track[VAR_3].p_subtitles );
    FUNC_0( VAR_2->track );
    FUNC_0( VAR_2 );
}
