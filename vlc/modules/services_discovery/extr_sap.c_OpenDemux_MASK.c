
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_12__ {int * psz_uri; int i_media_type; } ;
typedef TYPE_1__ sdp_t ;
struct TYPE_13__ {int pf_demux; int pf_control; TYPE_3__* p_sys; int s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_14__ {TYPE_1__* p_sdp; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int const*,char*,int) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 char* FUNC_11 (char*,size_t) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 int FUNC_14 (int ,int const**,int) ;
 size_t FUNC_15 (int ,char*,int const) ;

__attribute__((used)) static int FUNC_16( vlc_object_t *VAR_5 )
{
    demux_t *VAR_6 = (demux_t *)VAR_5;
    const uint8_t *VAR_7;
    char *VAR_8 = ((void*)0);
    sdp_t *VAR_9 = ((void*)0);
    int VAR_10 = VAR_2;
    size_t VAR_11;

    if( !FUNC_13( VAR_6, "sap-parse" ) )
    {

        return VAR_2;
    }

    FUNC_6( VAR_6->s );


    if( FUNC_14( VAR_6->s, &VAR_7, 7 ) < 7 )
        return VAR_2;

    if( FUNC_8( VAR_7, "v=0\r\no=", 7 ) && FUNC_8( VAR_7, "v=0\no=", 6 ) )
        return VAR_2;


    for( VAR_11 = 0, VAR_8 = ((void*)0); VAR_11 < 65536; )
    {
        const int VAR_12 = 1024;
        char *VAR_13 = FUNC_11( VAR_8, VAR_11 + VAR_12 + 1 );
        size_t VAR_14;
        if( VAR_13 == ((void*)0) )
        {
            VAR_10 = VAR_3;
            goto error;
        }
        VAR_8 = VAR_13;

        VAR_14 = FUNC_15( VAR_6->s, &VAR_8[VAR_11], VAR_12 );
        if( (int)VAR_14 < 0 )
        {
            FUNC_9( VAR_6, "cannot read SDP" );
            goto error;
        }
        VAR_11 += VAR_14;

        VAR_8[VAR_11] = '\0';

        if( (int)VAR_14 < VAR_12 )
            break;
    }

    VAR_9 = FUNC_4( FUNC_5(VAR_6), VAR_8 );

    if( !VAR_9 )
    {
        FUNC_10( VAR_6, "invalid SDP");
        goto error;
    }

    if( FUNC_3( FUNC_5( VAR_6 ), VAR_9 ) )
    {
        VAR_9->psz_uri = ((void*)0);
    }
    if (!FUNC_2 (VAR_9->i_media_type))
        goto error;
    if( VAR_9->psz_uri == ((void*)0) ) goto error;

    demux_sys_t *VAR_15 = FUNC_7( sizeof(*VAR_15) );
    if( FUNC_12(VAR_15 == ((void*)0)) )
        goto error;
    VAR_15->p_sdp = VAR_9;
    VAR_6->p_sys = VAR_15;
    VAR_6->pf_control = VAR_0;
    VAR_6->pf_demux = VAR_1;

    FUNC_0( VAR_8 );
    return VAR_4;

error:
    FUNC_0( VAR_8 );
    if( VAR_9 ) FUNC_1( VAR_9 );
    return VAR_10;
}
