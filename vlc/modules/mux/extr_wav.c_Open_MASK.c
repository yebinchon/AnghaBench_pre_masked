
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; int pf_mux; int pf_delstream; int pf_addstream; int pf_control; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_5__ {int b_used; int b_header; scalar_t__ i_chans_to_reorder; scalar_t__ i_data; } ;
typedef TYPE_2__ sout_mux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_6 )
{
    sout_mux_t *VAR_7 = (sout_mux_t*)VAR_6;
    sout_mux_sys_t *VAR_8;

    VAR_7->pf_control = VAR_1;
    VAR_7->pf_addstream = VAR_0;
    VAR_7->pf_delstream = VAR_2;
    VAR_7->pf_mux = VAR_3;

    VAR_7->p_sys = VAR_8 = FUNC_0( sizeof( sout_mux_sys_t ) );
    if( !VAR_8 )
        return VAR_4;
    VAR_8->b_used = 0;
    VAR_8->b_header = 1;
    VAR_8->i_data = 0;

    VAR_8->i_chans_to_reorder = 0;

    return VAR_5;
}
