
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_6__ {scalar_t__ ds_num_children; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;

uint64_t
FUNC_2(dsl_dataset_t *VAR_0)
{
 FUNC_0(VAR_0->ds_is_snapshot);
 return (FUNC_1(VAR_0)->ds_num_children - 1);
}
