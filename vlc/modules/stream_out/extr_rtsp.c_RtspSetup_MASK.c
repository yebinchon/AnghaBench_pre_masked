
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vod_media_t ;
typedef int vlc_object_t ;
struct TYPE_6__ {scalar_t__ timeout; int * url; int * psz_path; int * host; int timer; int lock; int * vod_media; int * owner; } ;
typedef TYPE_1__ rtsp_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ,void*) ;
 int * FUNC_6 (int *,int *,char*,char*) ;
 int FUNC_7 (int *,char*,int *) ;
 int * FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,char*) ;
 char* FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *,int ,TYPE_1__*) ;

rtsp_stream_t *FUNC_16( vlc_object_t *VAR_8, vod_media_t *VAR_9,
                          const char *VAR_10 )
{
    rtsp_stream_t *VAR_11 = FUNC_3( 1, sizeof( *VAR_11 ) );

    if( FUNC_9(VAR_11 == ((void*)0)) )
        return ((void*)0);

    VAR_11->owner = VAR_8;
    VAR_11->vod_media = VAR_9;
    FUNC_12( &VAR_11->lock );

    VAR_11->timeout = FUNC_14(FUNC_2(0,FUNC_10(VAR_8, "rtsp-timeout")));
    if (VAR_11->timeout != 0)
    {
        if (FUNC_15(&VAR_11->timer, VAR_7, VAR_11))
            goto error;
    }

    VAR_11->psz_path = FUNC_8( (VAR_10 != ((void*)0)) ? VAR_10 : "/" );
    if( VAR_11->psz_path == ((void*)0) )
        goto error;

    FUNC_7( VAR_8, "RTSP stream at %s", VAR_11->psz_path );

    VAR_11->host = FUNC_13( FUNC_1(VAR_8) );
    if( VAR_11->host == ((void*)0) )
        goto error;

    char *VAR_12 = FUNC_11(VAR_8, "sout-rtsp-user");
    char *VAR_13 = FUNC_11(VAR_8, "sout-rtsp-pwd");

    VAR_11->url = FUNC_6( VAR_11->host, VAR_11->psz_path, VAR_12, VAR_13 );
    FUNC_4(VAR_12);
    FUNC_4(VAR_13);
    if( VAR_11->url == ((void*)0) )
        goto error;

    FUNC_5( VAR_11->url, VAR_0, VAR_6, (void*)VAR_11 );
    FUNC_5( VAR_11->url, VAR_4, VAR_6, (void*)VAR_11 );
    FUNC_5( VAR_11->url, VAR_3, VAR_6, (void*)VAR_11 );
    FUNC_5( VAR_11->url, VAR_2, VAR_6, (void*)VAR_11 );
    FUNC_5( VAR_11->url, VAR_1, VAR_6,
                    (void*)VAR_11 );
    FUNC_5( VAR_11->url, VAR_5, VAR_6, (void*)VAR_11 );
    return VAR_11;

error:
    FUNC_0( VAR_11 );
    return ((void*)0);
}
