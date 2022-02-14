
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ds_lock; int * ds_owner; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {int dd_pool; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

boolean_t
FUNC_7(dsl_dataset_t *VAR_4, void *VAR_5, boolean_t VAR_6)
{
 boolean_t VAR_7 = VAR_0;

 FUNC_0(FUNC_4(VAR_4->ds_dir->dd_pool));
 FUNC_5(&VAR_4->ds_lock);
 if (VAR_4->ds_owner == ((void*)0) && (VAR_6 || !(FUNC_1(VAR_4) ||
     (FUNC_2(VAR_4,
     VAR_1) &&
     !VAR_3)))) {
  VAR_4->ds_owner = VAR_5;
  FUNC_3(VAR_4, VAR_5);
  VAR_7 = VAR_2;
 }
 FUNC_6(&VAR_4->ds_lock);
 return (VAR_7);
}
