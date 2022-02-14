
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ num_dimensions; } ;
struct TYPE_8__ {TYPE_3__* space; } ;
struct TYPE_7__ {scalar_t__ num_dimensions; } ;
typedef int List ;
typedef int LOCKMODE ;
typedef TYPE_1__ HypertableRestrictInfo ;
typedef TYPE_2__ Hypertable ;
typedef int Chunk ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int ** FUNC_2 (TYPE_3__*,int *,int ,unsigned int*) ;

__attribute__((used)) static Chunk **
FUNC_3(HypertableRestrictInfo *VAR_0, Hypertable *VAR_1, LOCKMODE VAR_2,
         unsigned int *VAR_3)
{
 List *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->num_dimensions == VAR_1->space->num_dimensions);

 return FUNC_2(VAR_1->space, VAR_4, VAR_2, VAR_3);
}
