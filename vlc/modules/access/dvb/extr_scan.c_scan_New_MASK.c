
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {scalar_t__ modulation; scalar_t__ i_symbolrate_index; scalar_t__ i_index; } ;
struct TYPE_12__ {int b_multiplexes_from_nit; TYPE_1__ spectrum; int * p_scanlist; int * p_current; scalar_t__ i_scanlist; int i_time_start; int parameter; scalar_t__ i_multiplex_toscan; int * pp_multiplex; scalar_t__ i_multiplex; int * p_dialog_id; void* p_cbdata; int * pf_notify_service; int pf_filter; int pf_read; int pf_stats; int pf_tune; int p_obj; } ;
typedef TYPE_2__ scan_t ;
struct TYPE_13__ {scalar_t__ type; } ;
typedef TYPE_3__ scan_parameter_t ;
typedef int scan_frontend_tune_cb ;
typedef int scan_frontend_stats_cb ;
typedef int scan_demux_read_cb ;
typedef int scan_demux_filter_cb ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_3__ const*) ;
 int FUNC_3 (int *,TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__ const*,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;

scan_t *FUNC_8( vlc_object_t *VAR_1, const scan_parameter_t *VAR_2,
                  scan_frontend_tune_cb VAR_3,
                  scan_frontend_stats_cb VAR_4,
                  scan_demux_filter_cb VAR_5,
                  scan_demux_read_cb VAR_6,
                  void *VAR_7 )
{
    if( VAR_2->type == VAR_0 )
        return ((void*)0);

    scan_t *VAR_8 = FUNC_1( sizeof( *VAR_8 ) );
    if( FUNC_6(VAR_8 == ((void*)0)) )
        return ((void*)0);

    VAR_8->p_obj = FUNC_0(VAR_1);
    VAR_8->pf_tune = VAR_3;
    VAR_8->pf_stats = VAR_4;
    VAR_8->pf_read = VAR_6;
    VAR_8->pf_filter = VAR_5;
    VAR_8->pf_notify_service = ((void*)0);
    VAR_8->p_cbdata = VAR_7;
    VAR_8->p_dialog_id = ((void*)0);
    VAR_8->i_multiplex = 0;
    VAR_8->pp_multiplex = ((void*)0);
    VAR_8->i_multiplex_toscan = 0;
    VAR_8->b_multiplexes_from_nit = 0;
    FUNC_5( &VAR_8->parameter );
    FUNC_4( VAR_2, &VAR_8->parameter );
    VAR_8->i_time_start = FUNC_7();
    VAR_8->p_scanlist = ((void*)0);
    VAR_8->i_scanlist = 0;

    FUNC_3( VAR_1, VAR_2, VAR_8 );
    VAR_8->p_current = VAR_8->p_scanlist;

    VAR_8->spectrum.i_index = 0;
    VAR_8->spectrum.i_symbolrate_index = 0;
    VAR_8->spectrum.modulation = 0;

    FUNC_2( VAR_1, VAR_2 );

    return VAR_8;
}
