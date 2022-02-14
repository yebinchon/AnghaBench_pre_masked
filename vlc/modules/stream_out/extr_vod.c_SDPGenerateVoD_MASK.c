
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_length; int i_es; TYPE_3__** es; int p_vod; } ;
typedef TYPE_1__ vod_media_t ;
struct vlc_memstream {char* ptr; } ;
struct sockaddr_storage {int ss_len; int ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_8__ {int cat; int fmtp; int channels; int clock_rate; int ptname; int payload_type; } ;
typedef TYPE_2__ rtp_format_t ;
struct TYPE_9__ {int rtsp_id; TYPE_2__ rtp_fmt; } ;
typedef TYPE_3__ media_es_t ;
struct TYPE_10__ {scalar_t__ rem; int quot; } ;
typedef TYPE_4__ lldiv_t ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ,char const*) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 TYPE_4__ FUNC_5 (int ,int) ;
 int FUNC_6 (struct sockaddr_storage*,int ,int) ;
 int FUNC_7 (struct vlc_memstream*,char*,char*,char const*,...) ;
 int FUNC_8 (struct vlc_memstream*,char const*,char*,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (struct vlc_memstream*) ;
 scalar_t__ FUNC_11 (struct vlc_memstream*,int ,char*,int *,int ,struct sockaddr*,int) ;

char *FUNC_12( const vod_media_t *VAR_2, const char *VAR_3 )
{
    FUNC_3(VAR_3 != ((void*)0));

    bool VAR_4 = FUNC_9( VAR_3 ) > 7 && VAR_3[7] == '[';


    struct sockaddr_storage VAR_5;
    socklen_t VAR_6 = VAR_4 ? sizeof( struct sockaddr_in6 )
                            : sizeof( struct sockaddr_in );
    FUNC_6 (&VAR_5, 0, VAR_6);
    VAR_5.ss_family = VAR_4 ? VAR_1 : VAR_0;




    struct vlc_memstream VAR_7;

    if( FUNC_11( &VAR_7, FUNC_2( VAR_2->p_vod ), "sout-rtp-",
                       ((void*)0), 0, (struct sockaddr *)&VAR_5, VAR_6 ) )
        return ((void*)0);

    if( VAR_2->i_length > 0 )
    {
        lldiv_t VAR_8 = FUNC_5( FUNC_0(VAR_2->i_length), 1000 );
        FUNC_7( &VAR_7, "range"," npt=0-%lld.%03u", VAR_8.quot,
                          (unsigned)VAR_8.rem );
    }

    FUNC_7( &VAR_7, "control", "%s", VAR_3 );


    for( int VAR_9 = 0; VAR_9 < VAR_2->i_es; VAR_9++ )
    {
        media_es_t *VAR_10 = VAR_2->es[VAR_9];
        rtp_format_t *VAR_11 = &VAR_10->rtp_fmt;
        const char *VAR_12;

        switch( VAR_11->cat )
        {
            case 128:
                VAR_12 = "video";
                break;
            case 130:
                VAR_12 = "audio";
                break;
            case 129:
                VAR_12 = "text";
                break;
            default:
                continue;
        }

        FUNC_8( &VAR_7, VAR_12, "RTP/AVP", 0,
                      VAR_11->payload_type, 0, 0,
                      VAR_11->ptname, VAR_11->clock_rate, VAR_11->channels,
                      VAR_11->fmtp );

        char *VAR_13 = FUNC_1( VAR_10->rtsp_id, VAR_3 );
        if( VAR_13 != ((void*)0) )
        {
            FUNC_7( &VAR_7, "control", "%s", VAR_13 );
            FUNC_4( VAR_13 );
        }
    }

    return FUNC_10( &VAR_7 ) ? ((void*)0) : VAR_7.ptr;
}
