
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_chroma; } ;
struct TYPE_7__ {TYPE_1__ format; scalar_t__ b_active; } ;
typedef TYPE_2__ overlay_t ;
struct TYPE_8__ {TYPE_2__** pp_tail; TYPE_2__** pp_head; } ;
typedef TYPE_3__ list_t ;


 scalar_t__ FUNC_0 (char,char,char,char) ;

overlay_t *FUNC_1( list_t *VAR_0 )
{
    static overlay_t **VAR_1 = ((void*)0);

    if( VAR_1 == ((void*)0) )
        VAR_1 = VAR_0->pp_head;
    else
        VAR_1 = VAR_1 + 1;

    for( ; VAR_1 < VAR_0->pp_tail; ++VAR_1 )
    {
        if( ( *VAR_1 != ((void*)0) ) &&
            ( (*VAR_1)->b_active )&&
            ( (*VAR_1)->format.i_chroma != FUNC_0( '\0','\0','\0','\0') ) )
        {
            return *VAR_1;
        }
    }
    VAR_1 = ((void*)0);
    return ((void*)0);
}
