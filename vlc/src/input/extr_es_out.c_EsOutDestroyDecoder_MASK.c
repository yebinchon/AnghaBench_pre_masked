
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int es_out_t ;
struct TYPE_5__ {int fmt_out; int * p_dec_record; int * p_clock; TYPE_1__* p_pgrm; int * p_dec; } ;
typedef TYPE_2__ es_out_id_t ;
struct TYPE_4__ {int * p_master_clock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( es_out_t *VAR_0, es_out_id_t *VAR_1 )
{
    FUNC_0(VAR_0);

    if( !VAR_1->p_dec )
        return;

    FUNC_2( VAR_1->p_dec );
    VAR_1->p_dec = ((void*)0);
    if( VAR_1->p_pgrm->p_master_clock == VAR_1->p_clock )
        VAR_1->p_pgrm->p_master_clock = ((void*)0);
    FUNC_3( VAR_1->p_clock );
    VAR_1->p_clock = ((void*)0);

    if( VAR_1->p_dec_record )
    {
        FUNC_2( VAR_1->p_dec_record );
        VAR_1->p_dec_record = ((void*)0);
    }

    FUNC_1( &VAR_1->fmt_out );
}
