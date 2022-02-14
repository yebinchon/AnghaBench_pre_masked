
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_7__ {int i_packet_size; int i_pk_used; int i_pk_frame; int i_packet_count; TYPE_3__* pk; scalar_t__ i_preroll_time; scalar_t__ i_dts_first; scalar_t__ i_pk_dts; int i_seq; scalar_t__ b_asf_http; } ;
typedef TYPE_2__ sout_mux_sys_t ;
typedef int bo_t ;
struct TYPE_8__ {int p_buffer; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int,int,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int,int ,int) ;

__attribute__((used)) static block_t *FUNC_7( sout_mux_t *VAR_0 )
{
    sout_mux_sys_t *VAR_1 = VAR_0->p_sys;
    int VAR_2, VAR_3 = VAR_1->b_asf_http ? 12 : 0;
    block_t *VAR_4;
    bo_t VAR_5;

    if( !VAR_1->pk ) return 0;

    VAR_2 = VAR_1->i_packet_size - VAR_1->i_pk_used;
    FUNC_6( VAR_1->pk->p_buffer + VAR_1->i_pk_used, 0, VAR_2 );

    FUNC_5( &VAR_5, VAR_1->pk->p_buffer, 14 + VAR_3 );

    if( VAR_1->b_asf_http )
        FUNC_1( &VAR_5, 0x4424, VAR_1->i_packet_size, 0x0, VAR_1->i_seq++);

    FUNC_2 ( &VAR_5, 0x82 );
    FUNC_3( &VAR_5, 0 );
    FUNC_2( &VAR_5, 0x11 );
    FUNC_2( &VAR_5, 0x5d );
    FUNC_3( &VAR_5, VAR_2 );
    FUNC_4( &VAR_5, FUNC_0(VAR_1->i_pk_dts - VAR_1->i_dts_first) +
                  VAR_1->i_preroll_time );
    FUNC_3( &VAR_5, 0 );
    FUNC_2( &VAR_5, 0x80 | VAR_1->i_pk_frame );

    VAR_4 = VAR_1->pk;
    VAR_1->pk = ((void*)0);

    VAR_1->i_packet_count++;

    return VAR_4;
}
