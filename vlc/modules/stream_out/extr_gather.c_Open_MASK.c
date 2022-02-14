
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int pf_send; int pf_del; int pf_add; int p_next; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_6__ {int id; int i_id; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_5 )
{
    sout_stream_t *VAR_6 = (sout_stream_t*)VAR_5;
    sout_stream_sys_t *VAR_7;

    VAR_6->p_sys = VAR_7 = FUNC_2( sizeof( sout_stream_sys_t ) );
    if( VAR_7 == ((void*)0) )
        return VAR_3;

    if( !VAR_6->p_next )
    {
        FUNC_1( VAR_7 );
        return VAR_3;
    }
    VAR_6->pf_add = VAR_0;
    VAR_6->pf_del = VAR_1;
    VAR_6->pf_send = VAR_2;

    FUNC_0( VAR_7->i_id, VAR_7->id );

    return VAR_4;
}
