
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_3__ {scalar_t__ capacity; int constraints; int mctx; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ChunkConstraints ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(ChunkConstraints *VAR_0, int16 VAR_1)
{
 MemoryContext VAR_2;

 if (VAR_1 <= VAR_0->capacity)
  return;

 VAR_2 = FUNC_1(VAR_0->mctx);
 VAR_0->capacity = VAR_1;
 VAR_0->constraints = FUNC_2(VAR_0->constraints, FUNC_0(VAR_1));
 FUNC_1(VAR_2);
}
