
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_7__ {int i_query; char** ppsz_query; int lock; int cond; int psz_filename; int * L; } ;
typedef TYPE_2__ services_discovery_sys_t ;
typedef int lua_State ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char**,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*,char*,int ) ;
 int FUNC_11 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;

__attribute__((used)) static void* FUNC_20( void *VAR_1 )
{
    services_discovery_t *VAR_2 = ( services_discovery_t * )VAR_1;
    services_discovery_sys_t *VAR_3 = VAR_2->p_sys;
    lua_State *VAR_4 = VAR_3->L;

    int VAR_5 = FUNC_19();

    FUNC_4( VAR_4, "main" );
    if( !FUNC_6( VAR_4, FUNC_5( VAR_4 ) ) || FUNC_7( VAR_4, 0, 1, 0 ) )
    {
        FUNC_11( VAR_2, "Error while running script %s, "
                  "function main(): %s", VAR_3->psz_filename,
                  FUNC_9( VAR_4, FUNC_5( VAR_4 ) ) );
        FUNC_8( VAR_4, 1 );
        FUNC_18( VAR_5 );
        return ((void*)0);
    }
    FUNC_10( VAR_2, "LuaSD script loaded: %s", VAR_3->psz_filename );



    FUNC_3( VAR_4, VAR_0, 0 );

    FUNC_18( VAR_5 );


    FUNC_16( &VAR_3->lock );
    FUNC_12( &VAR_3->lock );
    for( ;; )
    {

        if( !VAR_3->i_query )
        {
            FUNC_15( &VAR_3->cond, &VAR_3->lock );
            continue;
        }


        char *VAR_6 = VAR_3->ppsz_query[VAR_3->i_query - 1];
        FUNC_1(VAR_3->i_query, VAR_3->ppsz_query, VAR_3->i_query - 1);
        FUNC_17( &VAR_3->lock );

        VAR_5 = FUNC_19();
        FUNC_0( VAR_2, VAR_6 );
        FUNC_2( VAR_6 );


        FUNC_3( VAR_4, VAR_0, 0 );
        FUNC_18( VAR_5 );

        FUNC_16( &VAR_3->lock );
    }
    FUNC_14();
    FUNC_13();
}
