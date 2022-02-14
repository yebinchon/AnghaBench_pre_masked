
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int num_constraints; struct TYPE_8__* constraints; int capacity; } ;
typedef TYPE_1__ ChunkConstraints ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;

ChunkConstraints *
FUNC_4(ChunkConstraints *VAR_0)
{
 ChunkConstraints *VAR_1 = FUNC_2(sizeof(ChunkConstraints));

 FUNC_1(VAR_1, VAR_0, sizeof(ChunkConstraints));
 VAR_1->constraints = FUNC_3(FUNC_0(VAR_0->capacity));
 FUNC_1(VAR_1->constraints, VAR_0->constraints, FUNC_0(VAR_0->num_constraints));

 return VAR_1;
}
