
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int b_rtsp_kasenna; int i_mcast_port; int i_packet_size; int i_port; int i_sid; int b_concert; int i_duration; void* psz_mcast_ip; void* psz_name; void* psz_password; void* psz_user; void* psz_location; void* psz_server; void* psz_uri; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*) ;
 int * FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_7 ( stream_t *VAR_1, char *VAR_2 )
{
    char *VAR_3;
    demux_sys_t *VAR_4 = VAR_1->p_sys;

    VAR_3 = VAR_2;


    while( *VAR_3 == ' ' || *VAR_3 == '\t' ||
           *VAR_3 == '\n' || *VAR_3 == '\r' )
    {
        VAR_3++;
    }

    if( !FUNC_4( VAR_3, "rtsp://", sizeof("rtsp://") - 1 ) )
    {

        FUNC_1( VAR_4->psz_uri );
        VAR_4->psz_uri = FUNC_3( VAR_3 );
    }
    else if( !FUNC_4( VAR_3, "Stream=\"", sizeof("Stream=\"") - 1 ) )
    {
        VAR_3 += sizeof("Stream=\"") - 1;
        char* VAR_5 = FUNC_5( VAR_3, '"' );
        if( !VAR_5 )
            return 0;
        VAR_5[0] = '\0';

        if( !FUNC_4( VAR_3, "xdma://", sizeof("xdma://") - 1 ) )
        {
            VAR_3[0] = 'r';
            VAR_3[1] = 't';
            VAR_3[2] = 's';
            VAR_3[3] = 'p';
        }
        FUNC_1( VAR_4->psz_uri );
        VAR_4->psz_uri = FUNC_3( VAR_3 );
    }
    else if( !FUNC_4( VAR_3, "sgiNameServerHost=", sizeof("sgiNameServerHost=") - 1 ) )
    {
        VAR_3 += sizeof("sgiNameServerHost=") - 1;
        FUNC_1( VAR_4->psz_server );
        VAR_4->psz_server = FUNC_3( VAR_3 );
    }
    else if( !FUNC_4( VAR_3, "sgiMovieName=", sizeof("sgiMovieName=") - 1 ) )
    {
        VAR_3 += sizeof("sgiMovieName=") - 1;
        FUNC_1( VAR_4->psz_location );
        VAR_4->psz_location = FUNC_3( VAR_3 );
    }
    else if( !FUNC_4( VAR_3, "sgiUserAccount=", sizeof("sgiUserAccount=") - 1 ) )
    {
        VAR_3 += sizeof("sgiUserAccount=") - 1;
        FUNC_1( VAR_4->psz_user );
        VAR_4->psz_user = FUNC_3( VAR_3 );
    }
    else if( !FUNC_4( VAR_3, "sgiUserPassword=", sizeof("sgiUserPassword=") - 1 ) )
    {
        VAR_3 += sizeof("sgiUserPassword=") - 1;
        FUNC_1( VAR_4->psz_password );
        VAR_4->psz_password = FUNC_3( VAR_3 );
    }
    else if( !FUNC_4( VAR_3, "sgiShowingName=", sizeof("sgiShowingName=") - 1 ) )
    {
        VAR_3 += sizeof("sgiShowingName=") - 1;
        FUNC_1( VAR_4->psz_name );
        VAR_4->psz_name = FUNC_3( VAR_3 );
    }
    else if( !FUNC_4( VAR_3, "sgiFormatName=", sizeof("sgiFormatName=") - 1 ) )
    {
        VAR_3 += sizeof("sgiFormatName=") - 1;
        if( FUNC_2( VAR_3, "MPEG-4") == ((void*)0) )
            VAR_4->b_rtsp_kasenna = 1;
    }
    else if( !FUNC_4( VAR_3, "sgiMulticastAddress=", sizeof("sgiMulticastAddress=") - 1 ) )
    {
        VAR_3 += sizeof("sgiMulticastAddress=") - 1;
        FUNC_1( VAR_4->psz_mcast_ip );
        VAR_4->psz_mcast_ip = FUNC_3( VAR_3 );
    }
    else if( !FUNC_4( VAR_3, "sgiMulticastPort=", sizeof("sgiMulticastPort=") - 1 ) )
    {
        VAR_3 += sizeof("sgiMulticastPort=") - 1;
        VAR_4->i_mcast_port = (int) FUNC_6( VAR_3, ((void*)0), 0 );
    }
    else if( !FUNC_4( VAR_3, "sgiPacketSize=", sizeof("sgiPacketSize=") - 1 ) )
    {
        VAR_3 += sizeof("sgiPacketSize=") - 1;
        VAR_4->i_packet_size = (int) FUNC_6( VAR_3, ((void*)0), 0 );
    }
    else if( !FUNC_4( VAR_3, "sgiDuration=", sizeof("sgiDuration=") - 1 ) )
    {
        VAR_3 += sizeof("sgiDuration=") - 1;
        VAR_4->i_duration = FUNC_0( FUNC_6( VAR_3, ((void*)0), 0 ) );
    }
    else if( !FUNC_4( VAR_3, "sgiRtspPort=", sizeof("sgiRtspPort=") - 1 ) )
    {
        VAR_3 += sizeof("sgiRtspPort=") - 1;
        VAR_4->i_port = (int) FUNC_6( VAR_3, ((void*)0), 0 );
    }
    else if( !FUNC_4( VAR_3, "sgiSid=", sizeof("sgiSid=") - 1 ) )
    {
        VAR_3 += sizeof("sgiSid=") - 1;
        VAR_4->i_sid = (int) FUNC_6( VAR_3, ((void*)0), 0 );
    }
    else if( !FUNC_4( VAR_3, "DeliveryService=cds", sizeof("DeliveryService=cds") - 1 ) )
    {
        VAR_4->b_concert = 1;
    }
    else
    {

        return 0;
    }
    return VAR_0;
}
