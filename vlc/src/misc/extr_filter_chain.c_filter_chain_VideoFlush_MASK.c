
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int filter_t ;
struct TYPE_4__ {TYPE_2__* first; } ;
typedef TYPE_1__ filter_chain_t ;
struct TYPE_5__ {int * pending; int filter; struct TYPE_5__* next; } ;
typedef TYPE_2__ chained_filter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2( filter_chain_t *VAR_0 )
{
    for( chained_filter_t *VAR_1 = VAR_0->first; VAR_1 != ((void*)0); VAR_1 = VAR_1->next )
    {
        filter_t *VAR_2 = &VAR_1->filter;

        FUNC_0( VAR_1->pending );
        VAR_1->pending = ((void*)0);

        FUNC_1( VAR_2 );
    }
}
