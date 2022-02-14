
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_10__ {char const* psz_filename; } ;
typedef TYPE_2__ services_discovery_sys_t ;
struct TYPE_11__ {int i_capabilities; void* psz_url; void* psz_icon_url; void* psz_short_desc; } ;
typedef TYPE_3__ services_discovery_descriptor_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 char* FUNC_1 (int *,int) ;
 int * FUNC_2 () ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int ,int,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 char const* FUNC_13 (int *,int) ;
 int FUNC_14 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_15 (TYPE_1__*,char*,char const*,char const*) ;
 char** VAR_2 ;
 int FUNC_16 (char const*,char const*) ;
 scalar_t__ FUNC_17 (int ,int *,char const*) ;

__attribute__((used)) static int FUNC_18( services_discovery_t *VAR_3,
                           services_discovery_descriptor_t *VAR_4 )
{
    services_discovery_sys_t *VAR_5 = VAR_3->p_sys;
    int VAR_6 = VAR_0;


    lua_State *VAR_7 = FUNC_2();

    if( FUNC_17( FUNC_0(VAR_3), VAR_7, VAR_5->psz_filename ) )
    {
        FUNC_14( VAR_3, "Error loading script %s: %s", VAR_5->psz_filename,
                 FUNC_13( VAR_7, -1 ) );
        goto end;
    }


    FUNC_6( VAR_7, "descriptor" );
    if( !FUNC_7( VAR_7, -1 ) || FUNC_10( VAR_7, 0, 1, 0 ) )
    {
        FUNC_15( VAR_3, "Error getting the descriptor in '%s': %s",
                  VAR_5->psz_filename, FUNC_13( VAR_7, -1 ) );
        goto end;
    }


    FUNC_5( VAR_7, -1, "short_description" );
    VAR_4->psz_short_desc = FUNC_3( VAR_7, -1 );
    FUNC_11( VAR_7, 1 );

    FUNC_5( VAR_7, -1, "icon" );
    VAR_4->psz_icon_url = FUNC_3( VAR_7, -1 );
    FUNC_11( VAR_7, 1 );

    FUNC_5( VAR_7, -1, "url" );
    VAR_4->psz_url = FUNC_3( VAR_7, -1 );
    FUNC_11( VAR_7, 1 );

    FUNC_5( VAR_7, -1, "capabilities" );
    VAR_4->i_capabilities = 0;
    if( FUNC_8( VAR_7, -1 ) )
    {

        FUNC_12( VAR_7 );
        while( FUNC_9( VAR_7, -2 ) != 0 )
        {

            const char *VAR_8 = FUNC_1( VAR_7, -1 );
            int VAR_9 = 0;
            const char *VAR_10;
            for( VAR_10 = *VAR_2; VAR_10;
                 VAR_10 = VAR_2[ ++VAR_9 ] )
            {
                if( !FUNC_16( VAR_10, VAR_8 ) )
                {
                    VAR_4->i_capabilities |= 1 << VAR_9;
                    break;
                }
            }

            FUNC_11( VAR_7, 1 );

            if( !VAR_10 )
                FUNC_15( VAR_3, "Services discovery capability '%s' unknown in "
                                "script '%s'", VAR_8, VAR_5->psz_filename );
        }
    }

    FUNC_11( VAR_7, 1 );
    VAR_6 = VAR_1;

end:
    FUNC_4( VAR_7 );
    return VAR_6;

}
