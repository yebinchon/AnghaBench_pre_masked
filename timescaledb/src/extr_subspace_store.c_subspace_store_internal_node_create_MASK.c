
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last_internal_node; scalar_t__ descendants; int vector; } ;
typedef TYPE_1__ SubspaceStoreInternalNode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline SubspaceStoreInternalNode *
FUNC_2(bool VAR_1)
{
 SubspaceStoreInternalNode *VAR_2 = FUNC_0(sizeof(SubspaceStoreInternalNode));

 VAR_2->vector = FUNC_1(VAR_0);
 VAR_2->descendants = 0;
 VAR_2->last_internal_node = VAR_1;
 return VAR_2;
}
