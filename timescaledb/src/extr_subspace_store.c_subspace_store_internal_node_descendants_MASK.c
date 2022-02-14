
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ storage; } ;
struct TYPE_5__ {size_t descendants; scalar_t__ last_internal_node; int vector; } ;
typedef TYPE_1__ SubspaceStoreInternalNode ;
typedef TYPE_2__ DimensionSlice ;


 TYPE_2__* FUNC_0 (int ,int) ;

__attribute__((used)) static size_t
FUNC_1(SubspaceStoreInternalNode *VAR_0, int VAR_1)
{
 DimensionSlice *VAR_2 = FUNC_0(VAR_0->vector, VAR_1);

 if (VAR_2 == ((void*)0))
  return 0;

 if (VAR_0->last_internal_node)
  return 1;

 return ((SubspaceStoreInternalNode *) VAR_2->storage)->descendants;
}
