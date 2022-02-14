
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* ml_index_func ) (TYPE_1__*,void*) ;} ;
typedef TYPE_1__ multilist_t ;
typedef int multilist_sublist_t ;


 int * FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,void*) ;

multilist_sublist_t *
FUNC_2(multilist_t *VAR_0, void *VAR_1)
{
 return (FUNC_0(VAR_0, VAR_0->ml_index_func(VAR_0, VAR_1)));
}
