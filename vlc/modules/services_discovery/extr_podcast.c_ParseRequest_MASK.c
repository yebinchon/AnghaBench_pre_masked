
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_10__ {char* psz_request; int i_urls; char** ppsz_urls; int i_items; char** pp_items; int b_savedurls_loaded; } ;
typedef TYPE_2__ services_discovery_sys_t ;
typedef int input_item_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char**,int *) ;
 int FUNC_3 (int,char**,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char*) ;
 int * FUNC_12 (char*) ;
 char* FUNC_13 (int ,char*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_15( services_discovery_t *VAR_1 )
{
    services_discovery_sys_t *VAR_2 = VAR_1->p_sys;

    char *VAR_3 = VAR_2->psz_request;

    int VAR_4;

    char *VAR_5 = FUNC_10( VAR_3, ':' );
    if( !VAR_5 ) return;
    *VAR_5 = '\0';

    if ( ! VAR_2->b_savedurls_loaded )
    {
        char *VAR_6 = FUNC_13( FUNC_14(VAR_1),
                                                "podcast-urls" );
        FUNC_0( VAR_1, VAR_6 );
        FUNC_4( VAR_6 );
    }

    if( !FUNC_11( VAR_3, "ADD" ) )
    {
        VAR_3 = VAR_5 + 1;
        for( VAR_4 = 0; VAR_4<VAR_2->i_urls; VAR_4++ )
            if( !FUNC_11(VAR_2->ppsz_urls[VAR_4],VAR_3) )
              break;
        if( VAR_4 == VAR_2->i_urls )
        {
            FUNC_2( VAR_2->i_urls, VAR_2->ppsz_urls,
                        FUNC_12( VAR_3 ) );

            input_item_t *VAR_7;
            VAR_7 = FUNC_6( VAR_3, VAR_3 );
            FUNC_5( VAR_7, "demux=directory", VAR_0 );

            FUNC_2( VAR_2->i_items, VAR_2->pp_items, VAR_7 );
            FUNC_8( VAR_1, VAR_7 );

            FUNC_1( VAR_1 );
        }
    }
    else if ( !FUNC_11( VAR_3, "RM" ) )
    {
        VAR_3 = VAR_5 + 1;
        for( VAR_4 = 0; VAR_4 < VAR_2->i_urls; VAR_4++ )
            if( !FUNC_11(VAR_2->ppsz_urls[VAR_4], VAR_3) )
            {
                FUNC_9( VAR_1, VAR_2->pp_items[VAR_4] );
                FUNC_7( VAR_2->pp_items[VAR_4] );
                FUNC_3(VAR_2->i_urls, VAR_2->ppsz_urls, VAR_4 );
                FUNC_3(VAR_2->i_items, VAR_2->pp_items, VAR_4 );
                break;
            }
        FUNC_1( VAR_1 );
    }

    FUNC_4( VAR_2->psz_request );
    VAR_2->psz_request = ((void*)0);
}
