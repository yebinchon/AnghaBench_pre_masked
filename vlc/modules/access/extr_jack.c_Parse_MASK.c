
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int psz_location; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {void* psz_ports; void* i_channels; } ;
typedef TYPE_2__ demux_sys_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 void* FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_9( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;
    char *VAR_2 = FUNC_4( VAR_0->psz_location );
    char *VAR_3 = VAR_2;

    if( !FUNC_6( VAR_3, "channels=", FUNC_5( "channels=" ) ) )
    {
        VAR_1->i_channels = FUNC_0( FUNC_8( VAR_3 + FUNC_5( "channels=" ),
            &VAR_3, 0 ) );
    }
    else if( !FUNC_6( VAR_3, "ports=", FUNC_5( "ports=" ) ) )
    {
        int VAR_4;
        VAR_3 += FUNC_5( "ports=" );
        if( FUNC_3( VAR_3, ':' ) )
        {
            VAR_4 = FUNC_3( VAR_3, ':' ) - VAR_3;
        }
        else
        {
            VAR_4 = FUNC_5( VAR_3 );
        }
        VAR_1->psz_ports = FUNC_7( VAR_3, VAR_4 );
        VAR_3 += VAR_4;
    }
    else
    {
        FUNC_2( VAR_0, "unknown option" );
    }

    while( *VAR_3 && *VAR_3 != ':' )
    {
        VAR_3++;
    }

    if( *VAR_3 == ':' )
    {
        for( ;; )
        {
            *VAR_3++ = '\0';
            if( !FUNC_6( VAR_3, "channels=", FUNC_5( "channels=" ) ) )
            {
                VAR_1->i_channels = FUNC_0( FUNC_8(
                    VAR_3 + FUNC_5( "channels=" ), &VAR_3, 0 ) );
            }
            else if( !FUNC_6( VAR_3, "ports=", FUNC_5( "ports=" ) ) )
            {
                int VAR_5;
                VAR_3 += FUNC_5( "ports=" );
                if( FUNC_3( VAR_3, ':' ) )
                {
                    VAR_5 = FUNC_3( VAR_3, ':' ) - VAR_3;
                }
                else
                {
                    VAR_5 = FUNC_5( VAR_3 );
                }
                VAR_1->psz_ports = FUNC_7( VAR_3, VAR_5 );
                VAR_3 += VAR_5;
            }
            else
            {
                FUNC_2( VAR_0, "unknown option" );
            }
            while( *VAR_3 && *VAR_3 != ':' )
            {
                VAR_3++;
            }

            if( *VAR_3 == '\0' )
            {
                break;
            }
        }
    }

    FUNC_1( VAR_2 );
}
