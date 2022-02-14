
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ num_dimensions; } ;
struct TYPE_8__ {TYPE_5__* space; } ;
struct TYPE_7__ {scalar_t__ num_dimensions; } ;
typedef int List ;
typedef int LOCKMODE ;
typedef TYPE_1__ HypertableRestrictInfo ;
typedef TYPE_2__ Hypertable ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_5__*,int *,int ) ;

List *
FUNC_3(HypertableRestrictInfo *VAR_0, Hypertable *VAR_1,
             LOCKMODE VAR_2)
{
 List *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->num_dimensions == VAR_1->space->num_dimensions);

 return FUNC_2(VAR_1->space, VAR_3, VAR_2);
}
