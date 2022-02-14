
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int subpicture_t ;
typedef int spu_t ;
struct TYPE_6__ {int * (* pf_sub_source ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {TYPE_3__* first; } ;
typedef TYPE_2__ filter_chain_t ;
struct TYPE_8__ {TYPE_1__ filter; struct TYPE_8__* next; } ;
typedef TYPE_3__ chained_filter_t ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2( filter_chain_t *VAR_0, spu_t *VAR_1,
                             vlc_tick_t VAR_2 )
{
    for( chained_filter_t *VAR_3 = VAR_0->first; VAR_3 != ((void*)0); VAR_3 = VAR_3->next )
    {
        filter_t *VAR_4 = &VAR_3->filter;
        subpicture_t *VAR_5 = VAR_4->pf_sub_source( VAR_4, VAR_2 );
        if( VAR_5 )
            FUNC_0( VAR_1, VAR_5 );
    }
}
