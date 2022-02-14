
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ i_port; scalar_t__* psz_protocol; scalar_t__* psz_host; int psz_path; } ;
typedef TYPE_1__ vlc_url_t ;
struct TYPE_19__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_20__ {int b_export_sap; int * psz_sdp_file; int * rtsp; scalar_t__ p_httpd_file; } ;
typedef TYPE_3__ sout_stream_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*,scalar_t__*) ;
 int FUNC_8 (scalar_t__*,char*) ;
 int FUNC_9 (TYPE_2__*,char*,int ) ;
 int FUNC_10 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,char*,scalar_t__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,char const*) ;
 int * FUNC_14 (char const*) ;

__attribute__((used)) static void FUNC_15( sout_stream_t *VAR_2, const char *VAR_3 )
{
    sout_stream_sys_t *VAR_4 = VAR_2->p_sys;
    vlc_url_t VAR_5;

    FUNC_13( &VAR_5, VAR_3 );
    if( VAR_5.psz_protocol && !FUNC_8( VAR_5.psz_protocol, "http" ) )
    {
        if( VAR_4->p_httpd_file )
        {
            FUNC_5( VAR_2, "you can use sdp=http:// only once" );
            goto out;
        }

        if( FUNC_1( VAR_2, &VAR_5 ) )
        {
            FUNC_5( VAR_2, "cannot export SDP as HTTP" );
        }
    }
    else if( VAR_5.psz_protocol && !FUNC_8( VAR_5.psz_protocol, "rtsp" ) )
    {
        if( VAR_4->rtsp != ((void*)0) )
        {
            FUNC_5( VAR_2, "you can use sdp=rtsp:// only once" );
            goto out;
        }

        if( VAR_5.psz_host != ((void*)0) && *VAR_5.psz_host )
        {
            FUNC_7( VAR_2, "\"%s\" RTSP host might be ignored in "
                      "multiple-host configurations, use at your own risks.",
                      VAR_5.psz_host );
            FUNC_6( VAR_2, "Consider passing --rtsp-host=IP on the "
                                "command line instead." );

            FUNC_9( VAR_2, "rtsp-host", VAR_1 );
            FUNC_11( VAR_2, "rtsp-host", VAR_5.psz_host );
        }
        if( VAR_5.i_port != 0 )
        {



            FUNC_9( VAR_2, "rtsp-port", VAR_0 );
            FUNC_10( VAR_2, "rtsp-port", VAR_5.i_port );
        }

        VAR_4->rtsp = FUNC_2( FUNC_4(VAR_2), ((void*)0), VAR_5.psz_path );
        if( VAR_4->rtsp == ((void*)0) )
            FUNC_5( VAR_2, "cannot export SDP as RTSP" );
    }
    else if( ( VAR_5.psz_protocol && !FUNC_8( VAR_5.psz_protocol, "sap" ) ) ||
             ( VAR_5.psz_host && !FUNC_8( VAR_5.psz_host, "sap" ) ) )
    {
        VAR_4->b_export_sap = 1;
        FUNC_3( VAR_2 );
    }
    else if( VAR_5.psz_protocol && !FUNC_8( VAR_5.psz_protocol, "file" ) )
    {
        if( VAR_4->psz_sdp_file != ((void*)0) )
        {
            FUNC_5( VAR_2, "you can use sdp=file:// only once" );
            goto out;
        }
        VAR_4->psz_sdp_file = FUNC_14( VAR_3 );
        if( VAR_4->psz_sdp_file == ((void*)0) )
            goto out;
        FUNC_0( VAR_2 );
    }
    else
    {
        FUNC_7( VAR_2, "unknown protocol for SDP (%s)",
                  VAR_5.psz_protocol );
    }

out:
    FUNC_12( &VAR_5 );
}
