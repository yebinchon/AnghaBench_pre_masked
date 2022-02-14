
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_guid_t ;
typedef int uint8_t ;
struct TYPE_8__ {TYPE_3__* p_sys; int pf_control; int pf_demux; int s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_7__ {int pf_setaspectratio; int pf_updatesendtime; int pf_updatetime; int pf_gettrackinfo; int pf_send; int pf_doskip; TYPE_2__* p_demux; } ;
struct TYPE_9__ {TYPE_1__ packet_sys; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_6( vlc_object_t * VAR_11 )
{
    demux_t *VAR_12 = (demux_t *)VAR_11;
    demux_sys_t *VAR_13;
    vlc_guid_t VAR_14;
    const uint8_t *VAR_15;


    if( FUNC_5( VAR_12->s, &VAR_15, 16 ) < 16 ) return VAR_8;

    FUNC_0( &VAR_14, VAR_15 );
    if( !FUNC_4( &VAR_14, &VAR_10 ) ) return VAR_8;


    VAR_12->pf_demux = VAR_1;
    VAR_12->pf_control = VAR_0;
    VAR_12->p_sys = VAR_13 = FUNC_2( 1, sizeof( demux_sys_t ) );


    if( FUNC_1( VAR_12 ) )
    {
        FUNC_3( VAR_13 );
        return VAR_8;
    }

    VAR_13->packet_sys.p_demux = VAR_12;
    VAR_13->packet_sys.pf_doskip = VAR_2;
    VAR_13->packet_sys.pf_send = VAR_3;
    VAR_13->packet_sys.pf_gettrackinfo = VAR_4;
    VAR_13->packet_sys.pf_updatetime = VAR_7;
    VAR_13->packet_sys.pf_updatesendtime = VAR_6;
    VAR_13->packet_sys.pf_setaspectratio = VAR_5;

    return VAR_9;
}
