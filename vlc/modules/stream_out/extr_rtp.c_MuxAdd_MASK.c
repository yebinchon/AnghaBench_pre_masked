
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_6__ {int * p_mux; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef void sout_stream_id_sys_t ;
typedef int sout_mux_t ;
typedef int sout_input_t ;
typedef int es_format_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int * FUNC_2 (int *,int const*) ;

__attribute__((used)) static void *FUNC_3( sout_stream_t *VAR_0, const es_format_t *VAR_1 )
{
    sout_input_t *VAR_2;
    sout_stream_sys_t *VAR_3 = VAR_0->p_sys;
    sout_mux_t *VAR_4 = VAR_3->p_mux;
    FUNC_0( VAR_4 != ((void*)0) );

    VAR_2 = FUNC_2( VAR_4, VAR_1 );
    if( VAR_2 == ((void*)0) )
    {
        FUNC_1( VAR_0, "cannot add this stream to the muxer" );
        return ((void*)0);
    }

    return (sout_stream_id_sys_t *)VAR_2;
}
