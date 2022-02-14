
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int i_size; scalar_t__* p_elems; } ;
struct TYPE_9__ {TYPE_8__ objects; } ;
struct TYPE_10__ {int i_number; TYPE_1__ od; scalar_t__ iod; scalar_t__ p_si_sdt_pid; scalar_t__ p_atsc_si_basepid; TYPE_8__ e_streams; int handle; } ;
typedef TYPE_2__ ts_pmt_t ;
struct TYPE_11__ {int out; } ;
typedef TYPE_3__ demux_t ;


 int FUNC_0 (TYPE_8__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8( demux_t *VAR_1, ts_pmt_t *VAR_2 )
{
    if( FUNC_3( VAR_2->handle ) )
        FUNC_5( VAR_2->handle );
    FUNC_4( VAR_2->handle );
    for( int VAR_3=0; VAR_3<VAR_2->e_streams.i_size; VAR_3++ )
        FUNC_2( VAR_1, VAR_2->e_streams.p_elems[VAR_3] );
    FUNC_0( VAR_2->e_streams );
    if( VAR_2->p_atsc_si_basepid )
        FUNC_2( VAR_1, VAR_2->p_atsc_si_basepid );
    if( VAR_2->p_si_sdt_pid )
        FUNC_2( VAR_1, VAR_2->p_si_sdt_pid );
    if( VAR_2->iod )
        FUNC_1( VAR_2->iod );
    for( int VAR_4=0; VAR_4<VAR_2->od.objects.i_size; VAR_4++ )
        FUNC_1( VAR_2->od.objects.p_elems[VAR_4] );
    FUNC_0( VAR_2->od.objects );
    if( VAR_2->i_number > -1 )
        FUNC_6( VAR_1->out, VAR_0, VAR_2->i_number );

    FUNC_7( VAR_2 );
}
