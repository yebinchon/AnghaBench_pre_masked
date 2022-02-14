
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * p_next; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_12__ {TYPE_1__* (* pf_video_filter ) (TYPE_2__*,TYPE_1__*) ;} ;
typedef TYPE_2__ filter_t ;
struct TYPE_13__ {int * pending; TYPE_2__ filter; struct TYPE_13__* next; } ;
typedef TYPE_3__ chained_filter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static picture_t *FUNC_3( chained_filter_t *VAR_0, picture_t *VAR_1 )
{
    for( ; VAR_0 != ((void*)0); VAR_0 = VAR_0->next )
    {
        filter_t *VAR_2 = &VAR_0->filter;
        VAR_1 = VAR_2->pf_video_filter( VAR_2, VAR_1 );
        if( !VAR_1 )
            break;
        if( VAR_0->pending )
        {
            FUNC_1( VAR_2, "dropping pictures" );
            FUNC_0( VAR_0->pending );
        }
        VAR_0->pending = VAR_1->p_next;
        VAR_1->p_next = ((void*)0);
    }
    return VAR_1;
}
