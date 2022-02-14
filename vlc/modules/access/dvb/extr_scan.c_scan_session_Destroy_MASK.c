
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int p_obj; } ;
typedef TYPE_3__ scan_t ;
struct TYPE_12__ {size_t i_nit; size_t i_sdt; int ** pp_sdt; int ** pp_nit; } ;
struct TYPE_11__ {int * p_nit; int * p_sdt; int * p_pat; } ;
struct TYPE_14__ {TYPE_2__ others; int cfg; int i_snr; TYPE_1__ local; } ;
typedef TYPE_4__ scan_session_t ;
typedef int dvbpsi_sdt_t ;
typedef int dvbpsi_pat_t ;
typedef int dvbpsi_nit_t ;


 int FUNC_0 (int ,TYPE_3__*,int *,int *) ;
 int FUNC_1 (int ,TYPE_3__*,int *,int *,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4( scan_t *VAR_0, scan_session_t *VAR_1 )
{
    dvbpsi_pat_t *VAR_2 = VAR_1->local.p_pat;
    dvbpsi_sdt_t *VAR_3 = VAR_1->local.p_sdt;
    dvbpsi_nit_t *VAR_4 = VAR_1->local.p_nit;


    if( VAR_2 )
        FUNC_1( VAR_0->p_obj, VAR_0, VAR_2, &VAR_1->cfg, VAR_1->i_snr );


    if( VAR_4 )
        FUNC_0( VAR_0->p_obj, VAR_0, VAR_4, &VAR_1->cfg );


    if( VAR_3 )
        FUNC_2( VAR_0->p_obj, VAR_0, VAR_3 );


    for( size_t VAR_5=0; VAR_5<VAR_1->others.i_nit; VAR_5++ )
        FUNC_0( VAR_0->p_obj, VAR_0, VAR_1->others.pp_nit[VAR_5], ((void*)0) );


    for( size_t VAR_6=0; VAR_6<VAR_1->others.i_sdt; VAR_6++ )
        FUNC_2( VAR_0->p_obj, VAR_0, VAR_1->others.pp_sdt[VAR_6] );


    FUNC_3( VAR_1 );
}
