
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ds_fsid_guid; int * ds_owner; } ;
typedef TYPE_1__ dsl_dataset_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 dsl_dataset_t *VAR_1 = VAR_0;

 FUNC_0(VAR_1->ds_owner == ((void*)0));

 FUNC_1(VAR_1->ds_fsid_guid);
}
