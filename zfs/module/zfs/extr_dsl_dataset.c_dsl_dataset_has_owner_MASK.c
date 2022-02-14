
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ds_lock; int * ds_owner; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

boolean_t
FUNC_2(dsl_dataset_t *VAR_0)
{
 boolean_t VAR_1;
 FUNC_0(&VAR_0->ds_lock);
 VAR_1 = (VAR_0->ds_owner != ((void*)0));
 FUNC_1(&VAR_0->ds_lock);
 return (VAR_1);
}
