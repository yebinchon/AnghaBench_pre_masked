
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_4__ {int * p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ,char*,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;
 int FUNC_9 (char const*,char*) ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *,char const**) ;

__attribute__((used)) static void FUNC_13( stream_t* VAR_0, input_item_t* VAR_1 )
{
    xml_reader_t *VAR_2 = VAR_0->p_sys;
    bool const VAR_3 = FUNC_11( VAR_2 ) == 1;

    char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    char const *VAR_6, *VAR_7;
    while( ( VAR_6 = FUNC_12( VAR_2, &VAR_7 ) ) )
    {
        if( VAR_7 == ((void*)0) )
            continue;

        if( !FUNC_9( VAR_6, "name" ) && !VAR_4 )
            VAR_4 = FUNC_10( VAR_7 );
        else
            if( !FUNC_9( VAR_6, "content" ) && !VAR_5 )
                VAR_5 = FUNC_10( VAR_7 );

        if( VAR_4 && VAR_5 )
            break;
    }

    if( VAR_3 == 0 )
        FUNC_2( VAR_2, "meta" );

    if( !VAR_4 || !VAR_5 )
        goto done;

    if( !FUNC_9( VAR_4, "TotalDuration" ) )
        FUNC_4( VAR_1, FUNC_0("Playlist"), FUNC_0("Total duration"),
                            "%lld", FUNC_1( VAR_5 ) );
    else
        if( !FUNC_9( VAR_4, "Author" ) )
            FUNC_6( VAR_1, VAR_5 );
    else
        if( !FUNC_9( VAR_4, "Rating" ) )
            FUNC_7( VAR_1, VAR_5 );
    else
        if( !FUNC_9( VAR_4, "Genre" ) )
            FUNC_5( VAR_1, VAR_5 );
    else
        FUNC_8( VAR_0, "ignoring unknown meta-attribute %s", VAR_4 );

done:
    FUNC_3( VAR_4 );
    FUNC_3( VAR_5 );
}
