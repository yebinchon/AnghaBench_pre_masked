
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vlc_memstream {char* ptr; } ;
struct sockaddr_storage {int ss_len; int ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_stream_t ;
struct TYPE_12__ {int i_es; int proto; int lock_es; scalar_t__ rtcp_mux; TYPE_5__** es; int * psz_destination; } ;
typedef TYPE_4__ sout_stream_sys_t ;
struct TYPE_10__ {int * fd; } ;
struct TYPE_14__ {int cat; int fmtp; int channels; int clock_rate; int ptname; int bitrate; int payload_type; } ;
struct TYPE_13__ {int i_port; TYPE_2__ listen; int rtsp_id; TYPE_6__ rtp_fmt; TYPE_1__* sinkv; } ;
typedef TYPE_5__ sout_stream_id_sys_t ;
typedef int socklen_t ;
typedef TYPE_6__ rtp_format_t ;
typedef int dst ;
struct TYPE_9__ {int rtp_fd; } ;


 int VAR_0 ;
 int VAR_1 ;





 char* FUNC_0 (int ,char const*) ;
 int VAR_2 ;


 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct sockaddr*,int*) ;
 int FUNC_4 (int ,struct sockaddr*,int*) ;
 int FUNC_5 (struct sockaddr_storage*,int ,int) ;
 int FUNC_6 (struct vlc_memstream*,char*,char*,...) ;
 int FUNC_7 (struct vlc_memstream*,char const*,char const*,int,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (unsigned char) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct vlc_memstream*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct vlc_memstream*,int ,int ,int *,int ,struct sockaddr*,int) ;

char *FUNC_15( sout_stream_t *VAR_3, const char *VAR_4 )
{
    sout_stream_sys_t *VAR_5 = VAR_3->p_sys;
    struct vlc_memstream VAR_6;
    struct sockaddr_storage VAR_7;
    char *VAR_8 = ((void*)0);
    socklen_t VAR_9;
    int VAR_10;
    int VAR_11;

    FUNC_12( &VAR_5->lock_es );
    if( FUNC_10(VAR_5->i_es == 0 || (VAR_4 != ((void*)0) && !VAR_5->es[0]->rtsp_id)) )
        goto out;

    if( VAR_5->psz_destination != ((void*)0) )
    {
        VAR_11 = 1;


        VAR_9 = sizeof( VAR_7 );
        if( VAR_5->es[0]->listen.fd != ((void*)0) )
            FUNC_4( VAR_5->es[0]->listen.fd[0],
                         (struct sockaddr *)&VAR_7, &VAR_9 );
        else
            FUNC_3( VAR_5->es[0]->sinkv[0].rtp_fd,
                         (struct sockaddr *)&VAR_7, &VAR_9 );
    }
    else
    {
        VAR_11 = 0;


        bool VAR_12 = VAR_4 != ((void*)0) && FUNC_8( VAR_4 ) > 7
                    && VAR_4[7] == '[';


        VAR_9 = VAR_12 ? sizeof( struct sockaddr_in6 )
                      : sizeof( struct sockaddr_in );
        FUNC_5 (&VAR_7, 0, VAR_9);
        VAR_7.ss_family = VAR_12 ? VAR_1 : VAR_0;



    }

    if( FUNC_14( &VAR_6, FUNC_1( VAR_3 ), VAR_2,
                       ((void*)0), 0, (struct sockaddr *)&VAR_7, VAR_9 ) )
        goto out;


    if( VAR_5->rtcp_mux )
        FUNC_6( &VAR_6, "rtcp-mux", ((void*)0) );

    if( VAR_4 != ((void*)0) )
        FUNC_6 ( &VAR_6, "control", "%s", VAR_4 );

    const char *VAR_13 = "RTP/AVP";
    if( VAR_4 == ((void*)0) )
    {
        switch( VAR_5->proto )
        {
            case 131:
                break;
            case 132:
                VAR_13 = "TCP/RTP/AVP";
                break;
            case 133:
                VAR_13 = "DCCP/RTP/AVP";
                break;
            case 130:
                return VAR_8;
        }
    }

    for( VAR_10 = 0; VAR_10 < VAR_5->i_es; VAR_10++ )
    {
        sout_stream_id_sys_t *VAR_14 = VAR_5->es[VAR_10];
        rtp_format_t *VAR_15 = &VAR_14->rtp_fmt;
        const char *VAR_16;

        switch( VAR_15->cat )
        {
            case 128:
                VAR_16 = "video";
                break;
            case 134:
                VAR_16 = "audio";
                break;
            case 129:
                VAR_16 = "text";
                break;
            default:
                continue;
        }

        FUNC_7( &VAR_6, VAR_16, VAR_13, VAR_11 * VAR_14->i_port,
                      VAR_15->payload_type, 0, VAR_15->bitrate,
                      VAR_15->ptname, VAR_15->clock_rate, VAR_15->channels,
                      VAR_15->fmtp);


        if( VAR_11 && !VAR_5->rtcp_mux && (VAR_14->i_port & 1) )
            FUNC_6( &VAR_6, "rtcp", "%u", VAR_14->i_port + 1 );

        if( VAR_4 != ((void*)0) )
        {
            char *VAR_17 = FUNC_0( VAR_14->rtsp_id, VAR_4 );
            if( VAR_17 != ((void*)0) )
            {
                FUNC_6( &VAR_6, "control", "%s", VAR_17 );
                FUNC_2( VAR_17 );
            }
        }
        else
        {
            if( VAR_14->listen.fd != ((void*)0) )
                FUNC_6( &VAR_6, "setup", "passive" );
            if( VAR_5->proto == 133 )
                FUNC_6( &VAR_6, "dccp-service-code", "SC:RTP%c",
                                  FUNC_9( (unsigned char)VAR_16[0] ) );
        }
    }

    if( FUNC_11( &VAR_6 ) == 0 )
        VAR_8 = VAR_6.ptr;
out:
    FUNC_13( &VAR_5->lock_es );
    return VAR_8;
}
