
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* first; } ;
typedef TYPE_2__ filter_chain_t ;
struct TYPE_5__ {int filter; } ;


 int FUNC_0 (TYPE_2__*,int *) ;

void FUNC_1( filter_chain_t *VAR_0 )
{
    while( VAR_0->first != ((void*)0) )
        FUNC_0( VAR_0, &VAR_0->first->filter );
}
