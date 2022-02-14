
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int scan_tuner_config_t ;
struct TYPE_10__ {int type; int b_use_nit; } ;
struct TYPE_12__ {TYPE_2__ parameter; int p_obj; } ;
typedef TYPE_4__ scan_t ;
struct TYPE_11__ {int * pp_sdt; int * pp_nit; scalar_t__ i_sdt; scalar_t__ i_nit; } ;
struct TYPE_9__ {int * p_nit; int * p_sdt; int * p_pat; } ;
struct TYPE_13__ {int i_snr; int i_nit_pid; int * p_nithandle; int * p_sdthandle; int * p_pathandle; TYPE_3__ others; int type; int b_use_nit; TYPE_1__ local; int cfg; int p_obj; } ;
typedef TYPE_5__ scan_session_t ;


 TYPE_5__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static scan_session_t *FUNC_2( scan_t *VAR_0, const scan_tuner_config_t *VAR_1 )
{
    scan_session_t *VAR_2 = FUNC_0( sizeof( *VAR_2 ) );
    if( FUNC_1(VAR_2 == ((void*)0)) )
        return ((void*)0);
    VAR_2->p_obj = VAR_0->p_obj;
    VAR_2->cfg = *VAR_1;
    VAR_2->i_snr = -1;
    VAR_2->local.p_pat = ((void*)0);
    VAR_2->local.p_sdt = ((void*)0);
    VAR_2->local.p_nit = ((void*)0);
    VAR_2->i_nit_pid = -1;
    VAR_2->b_use_nit = VAR_0->parameter.b_use_nit;
    VAR_2->type = VAR_0->parameter.type;
    VAR_2->others.i_nit = 0;
    VAR_2->others.i_sdt = 0;
    VAR_2->others.pp_nit = ((void*)0);
    VAR_2->others.pp_sdt = ((void*)0);
    VAR_2->p_pathandle = ((void*)0);
    VAR_2->p_sdthandle = ((void*)0);
    VAR_2->p_nithandle = ((void*)0);
    return VAR_2;;
}
