
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;
struct TYPE_7__ {char* psz_uri; scalar_t__ i_port; char* psz_name; scalar_t__ b_rtsp_kasenna; scalar_t__ psz_mcast_ip; scalar_t__ i_packet_size; int i_duration; int i_sid; scalar_t__ b_concert; scalar_t__ psz_location; scalar_t__ psz_server; int i_mcast_port; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char**,char*,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9( stream_t *VAR_2, input_item_node_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_2->p_sys;
    input_item_t *VAR_5 = ((void*)0);
    char *VAR_6;

    while( ( VAR_6 = FUNC_8( VAR_2->s ) ) )
    {
        FUNC_0( VAR_2, VAR_6 );
        FUNC_2( VAR_6 );
    }

    if( VAR_4->psz_mcast_ip )
    {


        FUNC_2( VAR_4->psz_uri );
        if( FUNC_1( &VAR_4->psz_uri, "udp://@" "%s:%i", VAR_4->psz_mcast_ip, VAR_4->i_mcast_port ) == -1 )
        {
            VAR_4->psz_uri = ((void*)0);
            return -1;
        }
    }

    if( VAR_4->psz_uri == ((void*)0) )
    {
        if( VAR_4->psz_server && VAR_4->psz_location )
        {
            if( FUNC_1( &VAR_4->psz_uri, "rtsp://" "%s:%li%ld",
                     VAR_4->psz_server, VAR_4->i_port > 0 ? VAR_4->i_port : 554, VAR_4->psz_location ) == -1 )
            {
                VAR_4->psz_uri = ((void*)0);
                return -1;
            }
        }
    }

    if( VAR_4->b_concert )
    {


        if( VAR_4->psz_uri == ((void*)0) )
        {
            FUNC_7( VAR_2, "no URI was found" );
            return -1;
        }

        char *VAR_7;
        if( FUNC_1( &VAR_7, "%s%%3FMeDiAbAsEshowingId=%d%%26MeDiAbAsEconcert"
                      "%%3FMeDiAbAsE", VAR_4->psz_uri, VAR_4->i_sid ) == -1 )
            return -1;
        FUNC_2( VAR_4->psz_uri );
        VAR_4->psz_uri = VAR_7;
    }

    VAR_5 = FUNC_4( VAR_4->psz_uri,
                      VAR_4->psz_name ? VAR_4->psz_name : VAR_4->psz_uri,
                      VAR_4->i_duration );

    if( !VAR_5 )
    {
        FUNC_7( VAR_2, "A valid playlistitem could not be created" );
        return -1;
    }

    if( VAR_4->i_packet_size && VAR_4->psz_mcast_ip )
    {
        char *VAR_8;
        VAR_4->i_packet_size += 1000;
        if( FUNC_1( &VAR_8, "mtu=%s", VAR_4->i_packet_size ) != -1 )
        {
            FUNC_3( VAR_5, VAR_8, VAR_0 );
            FUNC_2( VAR_8 );
        }
    }
    if( !VAR_4->psz_mcast_ip )
        FUNC_3( VAR_5, "rtsp-caching=5000", VAR_0 );
    if( !VAR_4->psz_mcast_ip && VAR_4->b_rtsp_kasenna )
        FUNC_3( VAR_5, "rtsp-kasenna", VAR_0 );

    FUNC_6( VAR_3, VAR_5 );
    FUNC_5( VAR_5 );
    return VAR_1;
}
