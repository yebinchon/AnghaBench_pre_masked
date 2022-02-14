
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_12__ {int i_bitrate; int b_write_header; int tracks; scalar_t__ b_asf_http; int i_bitrate_override; } ;
typedef TYPE_3__ sout_mux_sys_t ;
struct TYPE_13__ {TYPE_1__* p_fmt; TYPE_5__* p_sys; } ;
typedef TYPE_4__ sout_input_t ;
struct TYPE_14__ {scalar_t__ i_cat; } ;
typedef TYPE_5__ asf_track_t ;
struct TYPE_10__ {int i_bitrate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3( sout_mux_t *VAR_2, sout_input_t *VAR_3 )
{


    sout_mux_sys_t *VAR_4 = VAR_2->p_sys;
    asf_track_t *VAR_5 = VAR_3->p_sys;
    FUNC_0( VAR_2, "removing input" );
    if(!VAR_4->i_bitrate_override)
    {
        if( VAR_5->i_cat == VAR_0 )
        {
             if( VAR_3->p_fmt->i_bitrate > 24000 )
                 VAR_4->i_bitrate -= VAR_3->p_fmt->i_bitrate;
             else
                 VAR_4->i_bitrate -= 128000;
        }
        else if(VAR_5->i_cat == VAR_1 )
        {
             if( VAR_3->p_fmt->i_bitrate > 50000 )
                 VAR_4->i_bitrate -= VAR_3->p_fmt->i_bitrate;
             else
                 VAR_4->i_bitrate -= 512000;
        }
    }

    if( VAR_4->b_asf_http )
    {
        FUNC_2( &VAR_4->tracks, FUNC_1( &VAR_4->tracks, VAR_5 ) );
        VAR_4->b_write_header = 1;
    }
}
