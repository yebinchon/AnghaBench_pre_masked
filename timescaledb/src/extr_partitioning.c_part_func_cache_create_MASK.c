
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TypeCacheEntry ;
struct TYPE_4__ {void* coerce_funcid; int * tce; void* argtype; } ;
typedef TYPE_1__ PartFuncCache ;
typedef void* Oid ;
typedef int MemoryContext ;


 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static PartFuncCache *
FUNC_1(Oid VAR_0, TypeCacheEntry *VAR_1, Oid VAR_2, MemoryContext VAR_3)
{
 PartFuncCache *VAR_4;

 VAR_4 = FUNC_0(VAR_3, sizeof(PartFuncCache));
 VAR_4->argtype = VAR_0;
 VAR_4->tce = VAR_1;
 VAR_4->coerce_funcid = VAR_2;

 return VAR_4;
}
