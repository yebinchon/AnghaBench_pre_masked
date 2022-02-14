
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * psz_value; struct TYPE_4__* p_next; int psz_name; } ;
typedef TYPE_1__ config_chain_t ;


 int * FUNC_0 (char const**) ;
 int FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,char const,int) ;
 scalar_t__ FUNC_4 (char*,char const) ;
 size_t FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,size_t) ;

const char *FUNC_7( config_chain_t **VAR_0, const char *VAR_1 )
{
    config_chain_t **VAR_2 = VAR_0;
    bool VAR_3 = 1;
    do
    {
        if (!VAR_3)
            VAR_1++;
        FUNC_1( VAR_1 );

        VAR_3 = 0;


        size_t VAR_4 = FUNC_5( VAR_1, "=,{} \t" );
        if( VAR_4 == 0 )
            continue;


        config_chain_t *VAR_5 = FUNC_2( sizeof(*VAR_5) );
        if( !VAR_5 )
            break;
        VAR_5->psz_name = FUNC_6( VAR_1, VAR_4 );
        VAR_1 += VAR_4;
        VAR_5->psz_value = ((void*)0);
        VAR_5->p_next = ((void*)0);

        *VAR_2 = VAR_5;
        VAR_2 = &VAR_5->p_next;


        FUNC_1( VAR_1 );
        if( FUNC_4( "={", *VAR_1 ) )
        {
            VAR_5->psz_value = FUNC_0( &VAR_1 );
            FUNC_1( VAR_1 );
        }
    }
    while( !FUNC_3( "}", *VAR_1, 2 ) );

    if( *VAR_1 ) VAR_1++; ;
    FUNC_1( VAR_1 );

    return VAR_1;
}
