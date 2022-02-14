
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* p_sys; int pf_control; int pf_readdir; int s; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int b_rtsp_kasenna; int b_concert; scalar_t__ i_sid; scalar_t__ i_port; scalar_t__ i_duration; scalar_t__ i_packet_size; scalar_t__ i_mcast_port; int * psz_mcast_ip; int * psz_password; int * psz_user; int * psz_name; int * psz_location; int * psz_server; int * psz_uri; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int const**,int ) ;

int FUNC_6( vlc_object_t * VAR_6 )
{
    stream_t *VAR_7 = (stream_t *)VAR_6;
    const uint8_t *VAR_8;
    int VAR_9;

    FUNC_0(VAR_7);

    VAR_9 = FUNC_5( VAR_7->s, &VAR_8, VAR_0 );
    VAR_9 -= sizeof("sgiNameServerHost=") - 1;
    if ( VAR_9 > 0 )
    {
        unsigned int VAR_10 = sizeof("sgiNameServerHost=") - 1;
        while ( VAR_9 && FUNC_3( (char *)VAR_8, "sgiNameServerHost=", VAR_10 ) )
        {
            VAR_8++;
            VAR_9--;
        }
        if ( !FUNC_3( (char *)VAR_8, "sgiNameServerHost=", VAR_10 ) )
        {
            demux_sys_t *VAR_11 = FUNC_1(sizeof (*VAR_11));
            if( FUNC_4(VAR_11 == ((void*)0)) )
                return VAR_3;

            FUNC_2( VAR_7, "using SGIMB playlist reader" );
            VAR_7->pf_readdir = VAR_1;
            VAR_7->pf_control = VAR_5;
            VAR_7->p_sys = VAR_11;
            VAR_11->psz_uri = ((void*)0);
            VAR_11->psz_server = ((void*)0);
            VAR_11->psz_location = ((void*)0);
            VAR_11->psz_name = ((void*)0);
            VAR_11->psz_user = ((void*)0);
            VAR_11->psz_password = ((void*)0);
            VAR_11->psz_mcast_ip = ((void*)0);
            VAR_11->i_mcast_port = 0;
            VAR_11->i_packet_size = 0;
            VAR_11->i_duration = 0;
            VAR_11->i_port = 0;
            VAR_11->i_sid = 0;
            VAR_11->b_rtsp_kasenna = 0;
            VAR_11->b_concert = 0;

            return VAR_4;
        }
    }
    return VAR_2;
}
