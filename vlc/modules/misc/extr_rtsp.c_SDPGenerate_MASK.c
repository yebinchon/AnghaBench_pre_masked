
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* psz_rtsp_control_v6; char* psz_rtsp_control_v4; scalar_t__ i_length; int i_es; TYPE_3__** es; int p_vod; } ;
typedef TYPE_2__ vod_media_t ;
struct vlc_memstream {char* ptr; } ;
struct sockaddr_storage {int ss_len; int ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_7__ {int i_cat; } ;
struct TYPE_9__ {int psz_fmtp; int i_channels; int i_clock_rate; int psz_ptname; int i_payload_type; TYPE_1__ fmt; } ;
typedef TYPE_3__ media_es_t ;
struct TYPE_10__ {scalar_t__ rem; int quot; } ;
typedef TYPE_4__ lldiv_t ;
typedef int httpd_client_t ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,char*,int*) ;
 TYPE_4__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sockaddr_storage*,int ,int) ;
 int FUNC_6 (struct vlc_memstream*,char*,char const*,char*,int,...) ;
 int FUNC_7 (struct vlc_memstream*,char const*,char*,int ,int ,int,int ,int ,int ,int ,int ) ;
 int * FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (struct vlc_memstream*) ;
 scalar_t__ FUNC_10 (struct vlc_memstream*,int ,char*,int *,int ,struct sockaddr*,int) ;

__attribute__((used)) static char *FUNC_11( const vod_media_t *VAR_3, httpd_client_t *VAR_4 )
{
    struct vlc_memstream VAR_5;
    char VAR_6[VAR_2];
    const char *VAR_7;
    int VAR_8;

    if( FUNC_3( VAR_4, VAR_6, &VAR_8 ) == ((void*)0) )
        return ((void*)0);

    bool VAR_9 = ( FUNC_8( VAR_6, ':' ) != ((void*)0) );

    VAR_7 = VAR_9 ? VAR_3->psz_rtsp_control_v6
                       : VAR_3->psz_rtsp_control_v4;


    struct sockaddr_storage VAR_10;
    socklen_t VAR_11 = VAR_9 ? sizeof( struct sockaddr_in6 )
                            : sizeof( struct sockaddr_in );
    FUNC_5 (&VAR_10, 0, VAR_11);
    VAR_10.ss_family = VAR_9 ? VAR_1 : VAR_0;




    if( FUNC_10( &VAR_5, FUNC_1( VAR_3->p_vod ), "sout-rtp-",
                       ((void*)0), 0, (struct sockaddr *)&VAR_10, VAR_11 ) )
        return ((void*)0);

    if( VAR_3->i_length > 0 )
    {
        lldiv_t VAR_12 = FUNC_4( FUNC_0(VAR_3->i_length), FUNC_2(1) );
        FUNC_6( &VAR_5, "range","npt=0-%lld.%03u", VAR_12.quot,
                          (unsigned)VAR_12.rem );
    }

    for( int VAR_13 = 0; VAR_13 < VAR_3->i_es; VAR_13++ )
    {
        media_es_t *VAR_14 = VAR_3->es[VAR_13];
        const char *VAR_15;

        switch( VAR_14->fmt.i_cat )
        {
            case 128:
                VAR_15 = "video";
                break;
            case 130:
                VAR_15 = "audio";
                break;
            case 129:
                VAR_15 = "text";
                break;
            default:
                continue;
        }

        FUNC_7( &VAR_5, VAR_15, "RTP/AVP", 0 ,
                      VAR_14->i_payload_type, 0, 0,
                      VAR_14->psz_ptname, VAR_14->i_clock_rate, VAR_14->i_channels,
                      VAR_14->psz_fmtp );

        FUNC_6( &VAR_5, "control", VAR_7, VAR_6, VAR_8, VAR_13 );
    }

    return FUNC_9( &VAR_5 ) ? ((void*)0) : VAR_5.ptr;
}
