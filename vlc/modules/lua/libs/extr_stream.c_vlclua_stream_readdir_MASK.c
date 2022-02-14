
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int psz_url; int * pf_readdir; } ;
typedef TYPE_2__ stream_t ;
typedef int lua_State ;
typedef int input_item_t ;
struct TYPE_10__ {int i_children; TYPE_1__** pp_children; } ;
typedef TYPE_3__ input_item_node_t ;
struct TYPE_8__ {int p_item; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 char* FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static int FUNC_17( lua_State *VAR_1 )
{
    stream_t **VAR_2 = (stream_t **)FUNC_7( VAR_1, 1, "stream" );
    const char *VAR_3 = ((void*)0);
    bool VAR_4 = 0;
    if( FUNC_8( VAR_1 ) >= 2 )
    {
        VAR_3 = FUNC_13( VAR_1, 2 );
        if( FUNC_8( VAR_1 ) >= 3 )
            VAR_4 = FUNC_12( VAR_1, 3 );
    }

    if( !VAR_2 || !*VAR_2 )
        return FUNC_15( VAR_1 );
    if( (*VAR_2)->pf_readdir == ((void*)0) )
        return FUNC_15( VAR_1 );

    input_item_t *VAR_5 = FUNC_3( (*VAR_2)->psz_url, ((void*)0) );
    if( VAR_3 )
    {
        char *VAR_6;
        if( FUNC_0( &VAR_6, ":ignore-filetype=\"%s\"", VAR_3 ) < 0 )
        {
            FUNC_4( VAR_5 );
            return FUNC_15( VAR_1 );
        }
        FUNC_2( VAR_5, VAR_6, VAR_0 );
        FUNC_1( VAR_6 );
    }
    else
        FUNC_2( VAR_5, "ignore-filetypes=\"\"",
                              VAR_0 );
    if( VAR_4 )
        FUNC_2( VAR_5, "show-hiddenfiles",
                              VAR_0 );
    input_item_node_t *VAR_7 = FUNC_5( VAR_5 );
    FUNC_4( VAR_5 );
    if( !VAR_7 )
        return FUNC_15( VAR_1 );
    if ( FUNC_14( *VAR_2, VAR_7 ) )
    {
        FUNC_6( VAR_7 );
        return FUNC_15( VAR_1 );
    }
    FUNC_9( VAR_1 );
    for ( int VAR_8 = 0; VAR_8 < VAR_7->i_children; ++VAR_8 )
    {
        FUNC_10( VAR_1, VAR_8 + 1 );
        FUNC_16( VAR_1, VAR_7->pp_children[VAR_8]->p_item );
        FUNC_11( VAR_1, -3 );
    }
    FUNC_6( VAR_7 );
    return 1;
}
