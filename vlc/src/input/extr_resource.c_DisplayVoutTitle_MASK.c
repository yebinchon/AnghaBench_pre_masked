
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_3__ {int * p_input; } ;
typedef TYPE_1__ input_resource_t ;
typedef int input_item_t ;


 int FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8( input_resource_t *VAR_0,
                              vout_thread_t *VAR_1 )
{
    if( VAR_0->p_input == ((void*)0) )
        return;



    input_item_t *VAR_2 = FUNC_2( VAR_0->p_input );

    char *VAR_3 = FUNC_5( VAR_2 );
    if( VAR_3 && *VAR_3 )
    {
        FUNC_7( VAR_1, VAR_3 );
    }
    else
    {
        char *VAR_4 = FUNC_3( VAR_2 );
        char *VAR_5 = FUNC_6( VAR_2 );

        if( !VAR_5 || *VAR_5 == '\0' )
        {
            FUNC_1( VAR_5 );
            VAR_5 = FUNC_4( VAR_2 );
        }
        if( VAR_4 && *VAR_4 )
        {
            char *VAR_6;
            if( FUNC_0( &VAR_6, "%s - %s", VAR_5, VAR_4 ) != -1 )
            {
                FUNC_7( VAR_1, VAR_6 );
                FUNC_1( VAR_6 );
            }
        }
        else if( VAR_5 )
        {
            FUNC_7( VAR_1, VAR_5 );
        }
        FUNC_1( VAR_5 );
        FUNC_1( VAR_4 );
    }
    FUNC_1( VAR_3 );
}
