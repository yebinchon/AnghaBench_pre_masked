
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int psz_url; int s; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;
 int VAR_0 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_1__*,char*,char*) ;
 int FUNC_10 (TYPE_1__*,char*,...) ;
 int FUNC_11 (char*,char*,int*) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,char) ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (char*,char*,int) ;
 char* FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17( stream_t *VAR_1, input_item_node_t *VAR_2 )
{
    char *VAR_3 = ((void*)0);
    char *VAR_4;
    char *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);
    char *VAR_7;
    char *VAR_8;
    int VAR_9 = -1;
    input_item_t *VAR_10;
    bool VAR_11 = 1;
    bool VAR_12 = 1;

    while( ( VAR_4 = FUNC_16( VAR_1->s ) ) )
    {
        if (VAR_11 && !FUNC_1(VAR_4))
        {
            VAR_12 = FUNC_2(VAR_4);
            VAR_11 = 0;
        }

        if (!VAR_12)
        {
            char *VAR_13 = FUNC_0(VAR_4);
            FUNC_5(VAR_4);
            VAR_4 = VAR_13;
        }

        if( !FUNC_15( VAR_4, "[playlist]", sizeof("[playlist]")-1 ) )
        {
            FUNC_5( VAR_4 );
            continue;
        }
        VAR_7 = VAR_4;
        VAR_8 = FUNC_13( VAR_4, '=' );
        if( VAR_8 )
        {
            *VAR_8='\0';
            VAR_8++;
        }
        else
        {
            FUNC_5( VAR_4 );
            continue;
        }
        if( !FUNC_12( VAR_7, "version" ) )
        {
            FUNC_9( VAR_1, "pls file version: %s", VAR_8 );
            FUNC_5( VAR_4 );
            continue;
        }
        if( !FUNC_12( VAR_7, "numberofentries" ) )
        {
            FUNC_9( VAR_1, "pls should have %d entries", FUNC_4(VAR_8) );
            FUNC_5( VAR_4);
            continue;
        }


        int VAR_14;
        if( FUNC_11( VAR_7, "%*[^0-9]%d", &VAR_14 ) != 1 )
        {
            FUNC_10( VAR_1, "couldn't find number of items" );
            FUNC_5( VAR_4 );
            continue;
        }

        if( VAR_9 == -1 )
            VAR_9 = VAR_14;
        else if( VAR_9 != VAR_14 )
        {

            if( VAR_5 )
            {
                VAR_10 = FUNC_6( VAR_5, VAR_3 );
                FUNC_8( VAR_2, VAR_10 );
                FUNC_7( VAR_10 );
                FUNC_5( VAR_6 );
                VAR_6 = VAR_5 = ((void*)0);
            }
            else
            {
                FUNC_10( VAR_1, "no file= part found for item %d", VAR_9 );
            }
            FUNC_5( VAR_3 );
            VAR_3 = ((void*)0);
            VAR_9 = VAR_14;
        }

        if( !FUNC_15( VAR_7, "file", sizeof("file") -1 ) )
        {
            FUNC_5( VAR_6 );
            VAR_6 =
            VAR_5 = FUNC_3( VAR_8, VAR_1->psz_url );
        }
        else if( !FUNC_15( VAR_7, "title", sizeof("title") -1 ) )
        {
            FUNC_5( VAR_3 );
            VAR_3 = FUNC_14( VAR_8 );
        }
        else if( !FUNC_15( VAR_7, "length", sizeof("length") -1 ) )
                                     ;
        else
        {
            FUNC_10( VAR_1, "unknown key found in pls file: %s", VAR_7 );
        }
        FUNC_5( VAR_4 );
    }

    if( VAR_5 )
    {
        VAR_10 = FUNC_6( VAR_5, VAR_3 );
        FUNC_8( VAR_2, VAR_10 );
        FUNC_7( VAR_10 );
        FUNC_5( VAR_6 );
    }
    else
    {
        FUNC_10( VAR_1, "no file= part found for item %d", VAR_9 );
    }
    FUNC_5( VAR_3 );
    VAR_3 = ((void*)0);

    return VAR_0;
}
