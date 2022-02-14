
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_8__ {int s; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*) ;



 int FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_1__*,char*,int ) ;
 int FUNC_12 (TYPE_1__*,char*,...) ;
 int FUNC_13 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 char* FUNC_15 (char const*) ;
 int FUNC_16 (int) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 int * FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (int *) ;
 char* FUNC_21 (int *,char const**) ;
 int FUNC_22 (int *,char const**) ;

__attribute__((used)) static int FUNC_23( stream_t *VAR_0, input_item_node_t *VAR_1 )
{
    int VAR_2 = -1;

    xml_reader_t *VAR_3 = ((void*)0);
    char *VAR_4 = ((void*)0);
    const char *VAR_5;
    input_item_t *VAR_6;
    char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

    input_item_t *VAR_13 = FUNC_1(VAR_0);

    FUNC_4( FUNC_17( VAR_0->s ) );

    VAR_3 = FUNC_19( VAR_0, VAR_0->s );
    if( !VAR_3 )
        return -1;



    if( FUNC_22( VAR_3, &VAR_5 ) != 129 )
    {
        FUNC_12( VAR_0, "invalid file (no root node)" );
        goto end;
    }

    if( FUNC_14( VAR_5, "WinampXML" ) )
    {
        FUNC_12( VAR_0, "invalid root node: %s", VAR_5 );
        goto end;
    }





    while( (VAR_2 = FUNC_22( VAR_3, &VAR_5 )) != 129 )
        if( VAR_2 <= 0 )
        {
            FUNC_12( VAR_0, "invalid file (no child node)" );
            goto end;
        }

    if( FUNC_14( VAR_5, "playlist" ) )
    {
        FUNC_12( VAR_0, "invalid child node %s", VAR_5 );
        goto end;
    }


    const char *VAR_14, *VAR_15;
    while( (VAR_14 = FUNC_21( VAR_3, &VAR_15 )) != ((void*)0) )
    {
        if( !FUNC_14( VAR_14, "num_entries" ) )
            FUNC_11( VAR_0, "playlist has %d entries", FUNC_3(VAR_15) );
        else if( !FUNC_14( VAR_14, "label" ) )
            FUNC_8( VAR_13, VAR_15 );
        else
            FUNC_13( VAR_0, "stray attribute %s with value %s in element"
                      " <playlist>", VAR_14, VAR_15 );
    }

    while( (VAR_2 = FUNC_22( VAR_3, &VAR_5 )) > 0 )
    {

        switch( VAR_2 )
        {
            case 129:
            {

                FUNC_4( VAR_4 );
                VAR_4 = FUNC_15( VAR_5 );
                if( FUNC_16(!VAR_4) )
                    goto end;


                while( (VAR_14 = FUNC_21( VAR_3, &VAR_15 )) )
                {
                    if( !FUNC_14( VAR_4, "entry" ) &&
                        !FUNC_14( VAR_14, "Playstring" ) )
                    {
                        FUNC_4( VAR_7 );
                        VAR_7 = FUNC_15( VAR_15 );
                    }
                    else
                    {
                        FUNC_13( VAR_0, "unexpected attribute %s in <%s>",
                                  VAR_14, VAR_4 );
                    }
                }
                break;
            }

            case 128:
            {
                char **VAR_16;

                if( VAR_4 == ((void*)0) )
                    break;
                if( FUNC_2( VAR_5 ) )
                    break;
                if( !FUNC_14( VAR_4, "Name" ) )
                    VAR_16 = &VAR_8;
                else if( !FUNC_14( VAR_4, "Genre" ) )
                    VAR_16 = &VAR_9;
                else if( !FUNC_14( VAR_4, "Nowplaying" ) )
                    VAR_16 = &VAR_10;
                else if( !FUNC_14( VAR_4, "Listeners" ) )
                    VAR_16 = &VAR_11;
                else if( !FUNC_14( VAR_4, "Bitrate" ) )
                    VAR_16 = &VAR_12;
                else
                {
                    FUNC_13( VAR_0, "unexpected text in element <%s>",
                              VAR_4 );
                    break;
                }
                FUNC_4( *VAR_16 );
                *VAR_16 = FUNC_15( VAR_5 );
                break;
            }


            case 130:
            {

                if( !FUNC_14( VAR_5, "entry" ) )
                {
                    FUNC_18( VAR_7 );
                    VAR_6 = FUNC_5( VAR_7, VAR_8 );
                    if( VAR_10 )
                        FUNC_9( VAR_6, VAR_10 );
                    if( VAR_9 )
                        FUNC_7( VAR_6, VAR_9 );
                    if( VAR_11 )
                        FUNC_12( VAR_0, "Unsupported meta listeners" );
                    if( VAR_12 )
                        FUNC_12( VAR_0, "Unsupported meta bitrate" );

                    FUNC_10( VAR_1, VAR_6 );
                    FUNC_6( VAR_6 );
                    FUNC_0( VAR_8 );
                    FUNC_0( VAR_7 );
                    FUNC_0( VAR_9 );
                    FUNC_0( VAR_12 );
                    FUNC_0( VAR_11 );
                    FUNC_0( VAR_10 );
                }
                FUNC_0( VAR_4 );
                break;
            }
        }
    }

    if( VAR_2 < 0 )
    {
        FUNC_13( VAR_0, "error while parsing data" );
        VAR_2 = 0;
    }

end:
    FUNC_4( VAR_4 );

    if( VAR_3 )
        FUNC_20( VAR_3 );
    return VAR_2;
}
