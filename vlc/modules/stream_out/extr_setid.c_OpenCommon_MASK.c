
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * p_sys; int pf_send; int pf_del; int p_next; } ;
typedef TYPE_1__ sout_stream_t ;
typedef int sout_stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_5 )
{
    sout_stream_t *VAR_6 = (sout_stream_t*)VAR_5;
    sout_stream_sys_t *VAR_7;

    if( !VAR_6->p_next )
    {
        FUNC_1( VAR_6, "cannot create chain" );
        return VAR_2;
    }

    VAR_7 = FUNC_0( sizeof( sout_stream_sys_t ) );
    if( FUNC_2( !VAR_7 ) )
        return VAR_3;

    VAR_6->pf_del = VAR_0;
    VAR_6->pf_send = VAR_1;

    VAR_6->p_sys = VAR_7;

    return VAR_4;
}
