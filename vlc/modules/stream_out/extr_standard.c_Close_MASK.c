
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_7__ {TYPE_3__* p_mux; int * p_session; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef int sout_access_out_t ;
struct TYPE_8__ {int * p_access; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( vlc_object_t * VAR_0 )
{
    sout_stream_t *VAR_1 = (sout_stream_t*)VAR_0;
    sout_stream_sys_t *VAR_2 = VAR_1->p_sys;
    sout_access_out_t *VAR_3 = VAR_2->p_mux->p_access;

    if( VAR_2->p_session != ((void*)0) )
        FUNC_2( VAR_1, VAR_2->p_session );

    FUNC_3( VAR_2->p_mux );
    FUNC_1( VAR_3 );

    FUNC_0( VAR_2 );
}
