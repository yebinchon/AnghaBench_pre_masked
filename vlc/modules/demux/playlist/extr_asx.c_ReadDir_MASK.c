
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_10__ {char const* psz_url; struct TYPE_10__* s; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int * FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int *,int *,int *,char*) ;
 int FUNC_3 (int *,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 char* FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (char const*,char*,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (char*) ;
 int * FUNC_19 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_20 (int *) ;
 char* FUNC_21 (int *,char const**) ;
 int FUNC_22 (int *,char const**) ;

__attribute__((used)) static int FUNC_23( stream_t *VAR_5, input_item_node_t *VAR_6 )
{
    if (FUNC_16(VAR_5->psz_url == ((void*)0)))
        return VAR_0;

    const char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    char *VAR_9 = FUNC_14( VAR_5->psz_url );
    if (FUNC_16(VAR_9 == ((void*)0)))
        return VAR_1;

    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);

    xml_reader_t *VAR_12 = ((void*)0);
    input_item_t *VAR_13 = FUNC_0( VAR_5 );
    stream_t* VAR_14 = FUNC_1( VAR_5 );

    bool VAR_15 = 0;
    int VAR_16;
    int VAR_17 = 0;

    VAR_12 = FUNC_19( VAR_5, VAR_14 ? VAR_14
                                                       : VAR_5->s );
    if( !VAR_12 )
    {
        FUNC_13( VAR_5, "Cannot parse ASX input file as XML");
        goto error;
    }

    do
    {
        VAR_16 = FUNC_22( VAR_12, &VAR_7 );
        if( VAR_16 == VAR_3 )
            break;

        if( VAR_16 == VAR_4 )
        {
            if( !VAR_15 )
            {
                if(!FUNC_15( VAR_7, "ASX", 3 ) )
                    VAR_15 = 1;
                else
                {
                    FUNC_13( VAR_5, "invalid root node" );
                    goto error;
                }
            }


            if( !FUNC_15( VAR_7, "TITLE", 5 ) )
            {
                if( ! FUNC_3( VAR_12, &VAR_10 ) )
                    break;
                FUNC_10( VAR_13, VAR_10 );
            }
            else if( !FUNC_15( VAR_7, "AUTHOR", 6 ) )
            {
                if( ! FUNC_3( VAR_12, &VAR_8 ) )
                    break;
                FUNC_7( VAR_13, VAR_8 );
            }
            else if( !FUNC_15( VAR_7, "COPYRIGHT", 9 ) )
            {
                if( ! FUNC_3( VAR_12, &VAR_8 ) )
                    break;
                FUNC_8( VAR_13, VAR_8 );
            }
            else if( !FUNC_15( VAR_7, "MOREINFO", 8 ) )
            {
                const char *VAR_18;
                do
                {
                    VAR_18 = FUNC_21( VAR_12, &VAR_7 );
                }
                while( VAR_18 && FUNC_15( VAR_18, "HREF", 4 ) );

                if( !VAR_18 )
                {
                    if( ! FUNC_3( VAR_12, &VAR_8 ) )
                        break;
                }
                else
                    VAR_8 = FUNC_14( VAR_7 );

                FUNC_18( VAR_8 );
                FUNC_11( VAR_13, VAR_8 );
            }
            else if( !FUNC_15( VAR_7, "ABSTRACT", 8 ) )
            {
                if( ! FUNC_3( VAR_12, &VAR_8 ) )
                    break;
                FUNC_9( VAR_13, VAR_8 );
            }
            else

            if( !FUNC_15( VAR_7, "BASE", 4 ) )
            {
                if( ! FUNC_3( VAR_12, &VAR_9 ) )
                    break;
            }
            else

            if( !FUNC_15( VAR_7, "ENTRYREF", 7 ) )
            {
                const char *VAR_19;
                do
                {
                    VAR_19 = FUNC_21( VAR_12, &VAR_7 );
                }
                while( VAR_19 && !FUNC_15( VAR_19, "HREF", 4 ) );
                if( ! VAR_19 )
                    break;


                input_item_t *VAR_20;
                VAR_8 = FUNC_14( VAR_7 );
                FUNC_18( VAR_8 );
                VAR_20 = FUNC_5( VAR_8, VAR_10 );
                FUNC_12( VAR_6, VAR_20 );

                FUNC_6( VAR_20 );
            }
            else

            if( !FUNC_15( VAR_7, "ENTRY", 5 ) )
            {
                FUNC_2( &VAR_17, VAR_12, VAR_6,
                              VAR_13, VAR_9);
            }







        }
    }
    while( VAR_16 != VAR_2 || FUNC_15( VAR_7, "ASX", 3 ) );

error:
    FUNC_4( VAR_9 );
    FUNC_4( VAR_10 );
    FUNC_4( VAR_11 );
    FUNC_4( VAR_8 );

    if( VAR_12)
        FUNC_20( VAR_12 );
    if( VAR_14 )
        FUNC_17( VAR_14 );

    return 0;
}
