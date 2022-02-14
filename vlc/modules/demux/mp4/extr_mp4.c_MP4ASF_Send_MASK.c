
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int p_es; int i_pts_backup; int i_dts_backup; } ;
typedef TYPE_2__ mp4_track_t ;
struct TYPE_15__ {int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;
struct TYPE_16__ {TYPE_1__* p_demux; } ;
typedef TYPE_4__ asf_packet_sys_t ;
struct TYPE_13__ {int out; } ;


 TYPE_2__* FUNC_0 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( asf_packet_sys_t *VAR_0, uint8_t VAR_1,
                         block_t **VAR_2 )
{
    mp4_track_t *VAR_3 = FUNC_0( VAR_0, VAR_1 );
    if ( !VAR_3 )
    {
        FUNC_2( *VAR_2 );
    }
    else
    {
        block_t *VAR_4 = FUNC_1( *VAR_2 );
        VAR_4->i_dts = VAR_3->i_dts_backup;
        VAR_4->i_pts = VAR_3->i_pts_backup;
        FUNC_3( VAR_0->p_demux->out, VAR_3->p_es, VAR_4 );
    }

    *VAR_2 = ((void*)0);
}
