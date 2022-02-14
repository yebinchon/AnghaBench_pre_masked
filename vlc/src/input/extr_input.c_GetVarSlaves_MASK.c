
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_thread_t ;
typedef int input_item_slave_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int **,int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int ,int ) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (int *,char*) ;
 char* FUNC_8 (char*,int *) ;

__attribute__((used)) static void FUNC_9( input_thread_t *VAR_2,
                          input_item_slave_t ***VAR_3, int *VAR_4 )
{
    char *VAR_5 = FUNC_7( VAR_2, "input-slave" );
    if( !VAR_5 )
        return;

    input_item_slave_t **VAR_6 = *VAR_3;
    int VAR_7 = *VAR_4;

    char *VAR_8 = VAR_5;
    while( VAR_5 && *VAR_5 )
    {
        while( *VAR_5 == ' ' || *VAR_5 == '#' )
            VAR_5++;

        char *VAR_9 = FUNC_3( VAR_5, '#' );
        if( VAR_9 )
            *VAR_9++ = '\0';

        if( *VAR_5 == 0 )
            break;

        char *VAR_10 = FUNC_5(VAR_5, "://")
                                   ? FUNC_4( VAR_5 ) : FUNC_8( VAR_5, ((void*)0) );
        VAR_5 = VAR_9;
        if( VAR_10 == ((void*)0) )
            continue;

        input_item_slave_t *VAR_11 =
            FUNC_2( VAR_10, VAR_1, VAR_0 );
        FUNC_1( VAR_10 );

        if( FUNC_6( VAR_11 == ((void*)0) ) )
            break;
        FUNC_0(VAR_7, VAR_6, VAR_11);
    }
    FUNC_1( VAR_8 );

    *VAR_3 = VAR_6;
    *VAR_4 = VAR_7;
}
