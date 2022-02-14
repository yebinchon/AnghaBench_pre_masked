
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int services_discovery_t ;
typedef int lua_State ;
typedef int input_item_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,char const*,int ,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int,char*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int ** FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int,char*) ;
 int FUNC_14 (int *,int) ;
 char* FUNC_15 (int *,int) ;
 int FUNC_16 (int *,char*,char*) ;
 int FUNC_17 (int *,char*,...) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 char* FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static input_item_t *FUNC_21( services_discovery_t *VAR_6,
                                            lua_State *VAR_7 )
{
    if( !FUNC_8( VAR_7, -1 ) )
    {
        FUNC_17( VAR_6, "Error: argument must be table" );
        return ((void*)0);
    }

    FUNC_6( VAR_7, -1, "title" );
    if( !FUNC_7( VAR_7, -1 ) )
    {
        FUNC_17( VAR_6, "Error: \"%s\" parameter is required", "title" );
        return ((void*)0);
    }

    const char *VAR_8 = FUNC_15( VAR_7, -1 );
    input_item_t *VAR_9 = FUNC_2( VAR_1, VAR_8,
                                               VAR_0,
                                               VAR_3,
                                               VAR_2 );
    FUNC_11( VAR_7, 1 );

    if( FUNC_20(VAR_9 == ((void*)0)) )
        return ((void*)0);

    FUNC_6( VAR_7, -1, "arturl" );
    if( FUNC_7( VAR_7, -1 ) && FUNC_18( FUNC_15( VAR_7, -1 ), "" ) )
    {
        char *VAR_10 = FUNC_19( FUNC_15( VAR_7, -1 ) );
        FUNC_0( VAR_10 );
        FUNC_16( VAR_6, "ArtURL: %s", VAR_10 );

        FUNC_3( VAR_9, VAR_10 );
        FUNC_1( VAR_10 );
    }
    FUNC_11( VAR_7, 1 );

    input_item_t **VAR_11 = FUNC_10( VAR_7, sizeof( input_item_t * ) );
    *VAR_11 = VAR_9;
    if( FUNC_4( VAR_7, "node" ) )
    {
        FUNC_9( VAR_7 );
        FUNC_5( VAR_7, ((void*)0), VAR_4 );
        FUNC_13( VAR_7, -2, "__index" );
        FUNC_12( VAR_7, VAR_5 );
        FUNC_13( VAR_7, -2, "__gc" );
    }
    FUNC_14( VAR_7, -2 );

    return VAR_9;
}
