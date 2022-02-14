
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ capacity; int constraints; scalar_t__ num_dimension_constraints; scalar_t__ num_constraints; int mctx; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ChunkConstraints ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

ChunkConstraints *
FUNC_3(int VAR_1, MemoryContext VAR_2)
{
 ChunkConstraints *VAR_3 = FUNC_1(VAR_2, sizeof(ChunkConstraints));

 VAR_3->mctx = VAR_2;
 VAR_3->capacity = VAR_1 + VAR_0;
 VAR_3->num_constraints = 0;
 VAR_3->num_dimension_constraints = 0;
 VAR_3->constraints = FUNC_2(VAR_2, FUNC_0(VAR_3->capacity));

 return VAR_3;
}
