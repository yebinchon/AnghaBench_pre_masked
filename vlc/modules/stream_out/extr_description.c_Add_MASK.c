
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_8__ {scalar_t__ i_stream_start; TYPE_1__* data; } ;
typedef TYPE_3__ sout_stream_sys_t ;
typedef int es_format_t ;
struct TYPE_6__ {int es; int i_es; } ;


 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int const*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void *FUNC_6( sout_stream_t *VAR_1, const es_format_t *VAR_2 )
{
    sout_stream_sys_t *VAR_3 = VAR_1->p_sys;
    es_format_t *VAR_4 = FUNC_2( sizeof( *VAR_4 ) );

    if( FUNC_4(VAR_4 == ((void*)0) ) )
        return ((void*)0);

    FUNC_3( VAR_1, "Adding a stream" );
    FUNC_1( VAR_4, VAR_2 );

    FUNC_0( VAR_3->data->i_es, VAR_3->data->es, VAR_4 );

    if( VAR_3->i_stream_start == VAR_0 )
        VAR_3->i_stream_start = FUNC_5();

    return (void *)VAR_4;
}
