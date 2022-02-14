
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sout_stream_t ;
typedef void sout_stream_id_sys_t ;
struct TYPE_5__ {scalar_t__ i_cat; } ;
typedef TYPE_1__ es_format_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *,TYPE_1__ const*) ;
 void* FUNC_1 (int *,TYPE_1__ const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void *FUNC_2( sout_stream_t *VAR_2, const es_format_t *VAR_3 )
{
    sout_stream_id_sys_t *VAR_4 = ((void*)0);

    if ( VAR_3->i_cat == VAR_1 )
        VAR_4 = FUNC_1( VAR_2, VAR_3 );
    else if ( VAR_3->i_cat == VAR_0 )
        VAR_4 = FUNC_0( VAR_2, VAR_3 );
    return VAR_4;
}
