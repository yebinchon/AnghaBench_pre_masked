
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int p_next; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_8__ {int i_id; struct TYPE_8__** id; int fmt; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef TYPE_2__ sout_stream_id_sys_t ;


 int FUNC_0 (int,TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__**) ;

__attribute__((used)) static void FUNC_4( vlc_object_t * VAR_0 )
{
    sout_stream_t *VAR_1 = (sout_stream_t*)VAR_0;
    sout_stream_sys_t *VAR_2 = VAR_1->p_sys;
    int VAR_3;

    for( VAR_3 = 0; VAR_3 < VAR_2->i_id; VAR_3++ )
    {
        sout_stream_id_sys_t *VAR_4 = VAR_2->id[VAR_3];

        FUNC_3( VAR_1->p_next, VAR_4->id );
        FUNC_1( &VAR_4->fmt );
        FUNC_2( VAR_4 );
    }
    FUNC_0( VAR_2->i_id, VAR_2->id );

    FUNC_2( VAR_2 );
}
