
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int subpicture_t ;
struct TYPE_6__ {int * (* pf_sub_filter ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {TYPE_3__* first; } ;
typedef TYPE_2__ filter_chain_t ;
struct TYPE_8__ {TYPE_1__ filter; struct TYPE_8__* next; } ;
typedef TYPE_3__ chained_filter_t ;


 int * FUNC_0 (TYPE_1__*,int *) ;

subpicture_t *FUNC_1( filter_chain_t *VAR_0, subpicture_t *VAR_1 )
{
    for( chained_filter_t *VAR_2 = VAR_0->first; VAR_2 != ((void*)0); VAR_2 = VAR_2->next )
    {
        filter_t *VAR_3 = &VAR_2->filter;

        VAR_1 = VAR_3->pf_sub_filter( VAR_3, VAR_1 );

        if( !VAR_1 )
            break;
    }
    return VAR_1;
}
