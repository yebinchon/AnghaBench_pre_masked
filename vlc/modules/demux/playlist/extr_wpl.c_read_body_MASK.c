
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_6__ {int psz_url; int * p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 char* FUNC_0 (char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,char*,char const*,int) ;
 int FUNC_9 (TYPE_1__*,char*,char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (int *,char const**) ;
 int FUNC_14 (int *,char const**) ;

__attribute__((used)) static void FUNC_15( stream_t* VAR_2, input_item_node_t* VAR_3 )
{
    xml_reader_t *VAR_4 = VAR_2->p_sys;
    const char* VAR_5;
    int VAR_6;

    VAR_6 = FUNC_14( VAR_4, &VAR_5 );
    if ( VAR_6 != VAR_1 || FUNC_10( VAR_5, "seq" ) )
    {
        FUNC_8( VAR_2, "Expected opening <seq> tag. Got <%s> with type %d", VAR_5, VAR_6 );
        return;
    }

    if( FUNC_12( VAR_4 ) == 1 )
        return;

    while ( ( VAR_6 = FUNC_14( VAR_4, &VAR_5 ) ) > 0 )
    {
        if ( VAR_6 == VAR_0 && !FUNC_10( VAR_5, "seq" ) )
            break;

        if( VAR_6 == VAR_1 )
        {
            if( !FUNC_10( VAR_5, "media" ) )
            {
                const bool VAR_7 = FUNC_12( VAR_4 );

                const char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
                while ((VAR_8 = FUNC_13( VAR_4, &VAR_9 )))
                {
                    if ( !VAR_9 || *VAR_9 == '\0' )
                        continue;
                    if (!FUNC_10( VAR_8, "src" ) )
                    {
                        char* VAR_10 = FUNC_0( VAR_9, VAR_2->psz_url );
                        if ( FUNC_11( !VAR_10 ) )
                            return;
                        input_item_t* VAR_11 = FUNC_4( VAR_10, ((void*)0) );
                        if ( FUNC_7( VAR_11 ) )
                        {
                            FUNC_6( VAR_3, VAR_11 );
                            FUNC_5( VAR_11 );
                        }
                        FUNC_3( VAR_10 );
                    }
                }

                if( VAR_7 == 0 )
                    FUNC_1( VAR_4, "media" );

                continue;
            }

            FUNC_9( VAR_2, "skipping unknown tag <%s> in <seq>", VAR_5 );
            FUNC_2( VAR_2, VAR_5 );
        }
    }

    VAR_6 = FUNC_14( VAR_4, &VAR_5 );
    if ( VAR_6 != VAR_0 || FUNC_10( VAR_5, "body" ) )
        FUNC_8( VAR_2, "Expected closing <body> tag. Got: <%s> with type %d", VAR_5, VAR_6 );
}
