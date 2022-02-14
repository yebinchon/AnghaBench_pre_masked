
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_next; int * psz_value; int * psz_name; } ;
typedef TYPE_1__ config_chain_t ;


 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 (int *) ;

config_chain_t *FUNC_2( const config_chain_t *VAR_0 )
{
    config_chain_t *VAR_1 = ((void*)0);
    config_chain_t **VAR_2 = &VAR_1;

    for( ; VAR_0 != ((void*)0); VAR_0 = VAR_0->p_next )
    {
        config_chain_t *VAR_3 = FUNC_0( sizeof(*VAR_3) );
        if( !VAR_3 )
            break;
        VAR_3->p_next = ((void*)0);
        VAR_3->psz_name = VAR_0->psz_name ? FUNC_1( VAR_0->psz_name ) : ((void*)0);
        VAR_3->psz_value = VAR_0->psz_value ? FUNC_1( VAR_0->psz_value ) : ((void*)0);

        *VAR_2 = VAR_3;
        VAR_2 = &VAR_3->p_next;
    }
    return VAR_1;
}
