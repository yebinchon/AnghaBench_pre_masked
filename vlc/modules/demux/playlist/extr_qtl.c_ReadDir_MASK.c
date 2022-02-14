
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_6__ {int s; } ;
typedef TYPE_1__ stream_t ;
typedef size_t qtl_loop_t ;
typedef size_t qtl_fullscreen_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_9 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int* VAR_10 ;
 int* VAR_11 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 (char*) ;
 int * FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (int *,char const**) ;
 scalar_t__ FUNC_15 (int *,char const**) ;

__attribute__((used)) static int FUNC_16( stream_t *VAR_12, input_item_node_t *VAR_13 )
{
    xml_reader_t *VAR_14;
    input_item_t *VAR_15;
    int VAR_16 = -1;


    bool VAR_17 = 0;
    bool VAR_18 = 1;
    qtl_fullscreen_t VAR_19 = 0;
    char *VAR_20 = ((void*)0);
    bool VAR_21 = 0;
    qtl_loop_t VAR_22 = VAR_5;
    int VAR_23 = -1;
    char *VAR_24 = ((void*)0);
    bool VAR_25 = 0;
    char *VAR_26 = ((void*)0);
    bool VAR_27 = 0;
    char *VAR_28 = ((void*)0);
    char *VAR_29 = ((void*)0);
    int VAR_30 = 100;

    VAR_14 = FUNC_12( VAR_12, VAR_12->s );
    if( !VAR_14 )
        goto error;

    for( int VAR_31 = 0;; ++VAR_31 )
    {
        const char *VAR_32;
        if( VAR_31 == VAR_8 ||
            FUNC_15( VAR_14, &VAR_32 ) != VAR_9 )
        {
            FUNC_8( VAR_12, "unable to locate root-node" );
            goto error;
        }

        if( FUNC_9( VAR_32, "embed" ) == 0 )
            break;

        FUNC_7( VAR_12, "invalid root node <%s>, trying next (%d / %d)",
                           VAR_32, VAR_31 + 1, VAR_8 );
    }

    const char *VAR_33, *VAR_34;
    while( (VAR_33 = FUNC_14( VAR_14, &VAR_34 )) != ((void*)0) )
    {
        if( !FUNC_9( VAR_33, "autoplay" ) )
            VAR_17 = !FUNC_9( VAR_34, "true" );
        else if( !FUNC_9( VAR_33, "controller" ) )
            VAR_18 = !FUNC_9( VAR_33, "false" );
        else if( !FUNC_9( VAR_33, "fullscreen" ) )
        {
            if( !FUNC_9( VAR_34, "double" ) )
                VAR_19 = VAR_1;
            else if( !FUNC_9( VAR_34, "half" ) )
                VAR_19 = VAR_3;
            else if( !FUNC_9( VAR_34, "current" ) )
                VAR_19 = VAR_0;
            else if( !FUNC_9( VAR_34, "full" ) )
                VAR_19 = VAR_2;
            else
                VAR_19 = VAR_4;
        }
        else if( !FUNC_9( VAR_33, "href" ) )
        {
            FUNC_3( VAR_20 );
            VAR_20 = FUNC_10( VAR_34 );
        }
        else if( !FUNC_9( VAR_33, "kioskmode" ) )
            VAR_21 = !FUNC_9( VAR_34, "true" );
        else if( !FUNC_9( VAR_33, "loop" ) )
        {
            if( !FUNC_9( VAR_34, "true" ) )
                VAR_22 = VAR_7;
            else if( !FUNC_9( VAR_34, "palindrome" ) )
                VAR_22 = VAR_6;
            else
                VAR_22 = VAR_5;
        }
        else if( !FUNC_9( VAR_33, "movieid" ) )
            VAR_23 = FUNC_2( VAR_34 );
        else if( !FUNC_9( VAR_33, "moviename" ) )
        {
            FUNC_3( VAR_24 );
            VAR_24 = FUNC_10( VAR_34 );
        }
        else if( !FUNC_9( VAR_33, "playeveryframe" ) )
            VAR_25 = !FUNC_9( VAR_34, "true" );
        else if( !FUNC_9( VAR_33, "qtnext" ) )
        {
            FUNC_3( VAR_26 );
            VAR_26 = FUNC_10( VAR_34 );
        }
        else if( !FUNC_9( VAR_33, "quitwhendone" ) )
            VAR_27 = !FUNC_9( VAR_34, "true" );
        else if( !FUNC_9( VAR_33, "src" ) )
        {
            FUNC_3( VAR_28 );
            VAR_28 = FUNC_10( VAR_34 );
        }
        else if( !FUNC_9( VAR_33, "mimetype" ) )
        {
            FUNC_3( VAR_29 );
            VAR_29 = FUNC_10( VAR_34 );
        }
        else if( !FUNC_9( VAR_33, "volume" ) )
            VAR_30 = FUNC_2( VAR_34 );
        else
            FUNC_7( VAR_12, "Attribute %s with value %s isn't valid",
                     VAR_33, VAR_34 );
    }

    FUNC_7( VAR_12, "autoplay: %s (unused by VLC)",
             VAR_17 ? "true": "false" );
    FUNC_7( VAR_12, "controller: %s (unused by VLC)",
             VAR_18 ? "true": "false" );
    FUNC_7( VAR_12, "fullscreen: %s (unused by VLC)",
             VAR_10[VAR_19] );
    FUNC_7( VAR_12, "href: %s", VAR_20 );
    FUNC_7( VAR_12, "kioskmode: %s (unused by VLC)",
             VAR_21 ? "true":"false" );
    FUNC_7( VAR_12, "loop: %s (unused by VLC)", VAR_11[VAR_22] );
    FUNC_7( VAR_12, "movieid: %d (unused by VLC)", VAR_23 );
    FUNC_7( VAR_12, "moviename: %s", VAR_24 );
    FUNC_7( VAR_12, "playeverframe: %s (unused by VLC)",
             VAR_25 ? "true":"false" );
    FUNC_7( VAR_12, "qtnext: %s", VAR_26 );
    FUNC_7( VAR_12, "quitwhendone: %s (unused by VLC)",
             VAR_27 ? "true":"false" );
    FUNC_7( VAR_12, "src: %s", VAR_28 );
    FUNC_7( VAR_12, "mimetype: %s", VAR_29 );
    FUNC_7( VAR_12, "volume: %d (unused by VLC)", VAR_30 );


    if( !VAR_28 )
    {
        FUNC_8( VAR_12, "Mandatory attribute 'src' not found" );
    }
    else
    {
        VAR_15 = FUNC_4( VAR_28, VAR_24 );


        if( VAR_20 ) { FUNC_0( VAR_15, "QuickTime Media Link", "href", "%s", VAR_20 ) ; };
        if( VAR_29 ) { FUNC_0( VAR_15, "QuickTime Media Link", FUNC_1("Mime"), "%s", VAR_29 ) ; };
        FUNC_6( VAR_13, VAR_15 );
        FUNC_5( VAR_15 );
        if( VAR_26 )
        {
            FUNC_11( VAR_26 );
            VAR_15 = FUNC_4( VAR_26, ((void*)0) );
            FUNC_6( VAR_13, VAR_15 );
            FUNC_5( VAR_15 );
        }
    }

    VAR_16 = 0;

error:
    if( VAR_14 )
        FUNC_13( VAR_14 );

    FUNC_3( VAR_20 );
    FUNC_3( VAR_24 );
    FUNC_3( VAR_26 );
    FUNC_3( VAR_28 );
    FUNC_3( VAR_29 );
    return VAR_16;
}
