
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int type; } ;
struct TYPE_9__ {TYPE_1__ info; } ;
typedef TYPE_2__ frontend_t ;
typedef int frontend ;
struct TYPE_10__ {int i_frontend_handle; TYPE_2__* p_frontend; } ;
typedef TYPE_3__ dvb_sys_t ;






 char* VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char*,int,char*,unsigned int,unsigned int) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (int *,char*) ;
 unsigned int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ) ;

int FUNC_12( vlc_object_t *VAR_7, dvb_sys_t *VAR_8, const char *VAR_9 )
{
    frontend_t * VAR_10;
    unsigned int VAR_11, VAR_12;
    bool VAR_13;
    char VAR_14[128];

    VAR_11 = FUNC_8( VAR_7, "dvb-adapter" );
    VAR_12 = FUNC_8( VAR_7, "dvb-device" );
    VAR_13 = FUNC_7( VAR_7, "dvb-probe" );

    if( FUNC_5( VAR_14, sizeof(VAR_14), VAR_0, VAR_11, VAR_12 ) >= (int)sizeof(VAR_14) )
    {
        FUNC_4( VAR_7, "snprintf() truncated string for FRONTEND" );
        VAR_14[sizeof(VAR_14) - 1] = '\0';
    }

    VAR_8->p_frontend = VAR_10 = FUNC_2( sizeof(frontend_t) );
    if( !VAR_10 )
        return VAR_4;

    FUNC_3( VAR_7, "Opening device %s", VAR_14 );
    if( (VAR_8->i_frontend_handle = FUNC_10(VAR_14, VAR_2 | VAR_1)) < 0 )
    {
        FUNC_4( VAR_7, "FrontEndOpen: opening device failed: %s",
                 FUNC_11(VAR_6) );
        FUNC_1( VAR_10 );
        return VAR_3;
    }

    if( VAR_13 )
    {
        const char * VAR_15 = ((void*)0);
        const char * VAR_16;

        if( FUNC_0( VAR_7, VAR_8 ) < 0 )
        {
            FUNC_9( VAR_8->i_frontend_handle );
            FUNC_1( VAR_10 );
            return VAR_3;
        }

        switch( VAR_10->info.type )
        {
        case 130:
            VAR_16 = "DVB-T";
            break;
        case 129:
            VAR_16 = "DVB-C";
            break;
        case 128:
            VAR_16 = "DVB-S";
            break;
        case 131:
            VAR_16 = "ATSC";
            break;
        default:
            VAR_16 = "unknown";
        }


        if( (!FUNC_6( VAR_9, "qpsk", 4 ) ||
             !FUNC_6( VAR_9, "dvb-s", 5 ) ||
             !FUNC_6( VAR_9, "satellite", 9 ) ) &&
             (VAR_10->info.type != 128) )
        {
            VAR_15 = "DVB-S";
        }
        if( (!FUNC_6( VAR_9, "cable", 5 ) ||
             !FUNC_6( VAR_9, "dvb-c", 5 ) ) &&
             (VAR_10->info.type != 129) )
        {
            VAR_15 = "DVB-C";
        }
        if( (!FUNC_6( VAR_9, "terrestrial", 11 ) ||
             !FUNC_6( VAR_9, "dvb-t", 5 ) ) &&
             (VAR_10->info.type != 130) )
        {
            VAR_15 = "DVB-T";
        }

        if( (!FUNC_6( VAR_9, "usdigital", 9 ) ||
             !FUNC_6( VAR_9, "atsc", 4 ) ) &&
             (VAR_10->info.type != 131) )
        {
            VAR_15 = "ATSC";
        }

        if( VAR_15 != ((void*)0) )
        {
            FUNC_4( VAR_7, "requested type %s not supported by %s tuner",
                     VAR_15, VAR_16 );
            FUNC_9( VAR_8->i_frontend_handle );
            FUNC_1( VAR_10 );
            return VAR_3;
        }
    }
    else
    {
        FUNC_3( VAR_7, "using default values for frontend info" );

        FUNC_3( VAR_7, "method of access is %s", VAR_9 );
        VAR_10->info.type = 128;
        if( !FUNC_6( VAR_9, "qpsk", 4 ) ||
            !FUNC_6( VAR_9, "dvb-s", 5 ) )
            VAR_10->info.type = 128;
        else if( !FUNC_6( VAR_9, "cable", 5 ) ||
                 !FUNC_6( VAR_9, "dvb-c", 5 ) )
            VAR_10->info.type = 129;
        else if( !FUNC_6( VAR_9, "terrestrial", 11 ) ||
                 !FUNC_6( VAR_9, "dvb-t", 5 ) )
            VAR_10->info.type = 130;
        else if( !FUNC_6( VAR_9, "usdigital", 9 ) ||
                 !FUNC_6( VAR_9, "atsc", 4 ) )
            VAR_10->info.type = 131;
    }

    return VAR_5;
}
