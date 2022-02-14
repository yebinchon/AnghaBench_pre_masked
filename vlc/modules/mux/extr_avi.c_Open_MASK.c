
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {TYPE_3__* p_sys; int pf_mux; int pf_delstream; int pf_addstream; int pf_control; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_7__ {int i_entry_max; int entry; scalar_t__ i_entry_count; } ;
struct TYPE_9__ {int i_stream_video; int b_write_header; TYPE_1__ idx1; scalar_t__ i_movi_size; scalar_t__ i_streams; } ;
typedef TYPE_3__ sout_mux_sys_t ;
typedef int avi_idx1_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_6 )
{
    sout_mux_t *VAR_7 = (sout_mux_t*)VAR_6;
    sout_mux_sys_t *VAR_8;

    FUNC_3( VAR_7, "AVI muxer opened" );

    VAR_8 = FUNC_2( sizeof( sout_mux_sys_t ) );
    if( !VAR_8 )
        return VAR_4;
    VAR_8->i_streams = 0;
    VAR_8->i_stream_video = -1;
    VAR_8->i_movi_size = 0;

    VAR_8->idx1.i_entry_count = 0;
    VAR_8->idx1.i_entry_max = 10000;
    VAR_8->idx1.entry = FUNC_0( VAR_8->idx1.i_entry_max,
                                sizeof( avi_idx1_entry_t ) );
    if( !VAR_8->idx1.entry )
    {
        FUNC_1( VAR_8 );
        return VAR_4;
    }
    VAR_8->b_write_header = 1;


    VAR_7->pf_control = VAR_1;
    VAR_7->pf_addstream = VAR_0;
    VAR_7->pf_delstream = VAR_2;
    VAR_7->pf_mux = VAR_3;
    VAR_7->p_sys = VAR_8;

    return VAR_5;
}
