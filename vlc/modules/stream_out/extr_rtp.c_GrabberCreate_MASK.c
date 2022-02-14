
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_4__ {int pf_write; int * pf_seek; int * p_sys; void* psz_path; int * p_cfg; void* psz_access; int * p_module; } ;
typedef TYPE_1__ sout_access_out_t ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static sout_access_out_t *FUNC_2( sout_stream_t *VAR_1 )
{
    sout_access_out_t *VAR_2;

    VAR_2 = FUNC_1( VAR_1, sizeof( *VAR_2 ) );
    if( VAR_2 == ((void*)0) )
        return ((void*)0);

    VAR_2->p_module = ((void*)0);
    VAR_2->psz_access = FUNC_0( "grab" );
    VAR_2->p_cfg = ((void*)0);
    VAR_2->psz_path = FUNC_0( "" );
    VAR_2->p_sys = VAR_1;
    VAR_2->pf_seek = ((void*)0);
    VAR_2->pf_write = VAR_0;
    return VAR_2;
}
