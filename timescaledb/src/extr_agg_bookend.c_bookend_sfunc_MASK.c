
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int cmp_type_cache; int value_type_cache; int cmp_func_cache; } ;
typedef TYPE_1__ TransCache ;
struct TYPE_13__ {int cmp; int value; } ;
struct TYPE_12__ {int is_null; } ;
typedef TYPE_2__ PolyDatum ;
typedef int MemoryContext ;
typedef TYPE_3__ InternalCmpAggStore ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,TYPE_2__,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_2__,int *) ;

__attribute__((used)) static inline Datum
FUNC_6(MemoryContext VAR_0, InternalCmpAggStore *VAR_1, PolyDatum VAR_2, PolyDatum VAR_3,
     char *VAR_4, FunctionCallInfo VAR_5)
{
 MemoryContext VAR_6;
 TransCache *VAR_7 = FUNC_4(VAR_5);

 VAR_6 = FUNC_1(VAR_0);

 if (VAR_1 == ((void*)0))
 {
  VAR_1 = (InternalCmpAggStore *) FUNC_0(VAR_0, sizeof(InternalCmpAggStore));
  FUNC_5(&VAR_7->value_type_cache, VAR_2, &VAR_1->value);
  FUNC_5(&VAR_7->cmp_type_cache, VAR_3, &VAR_1->cmp);
 }
 else
 {

  if (!VAR_3.is_null &&
   FUNC_3(&VAR_7->cmp_func_cache, VAR_5, VAR_4, VAR_3, VAR_1->cmp))
  {
   FUNC_5(&VAR_7->value_type_cache, VAR_2, &VAR_1->value);
   FUNC_5(&VAR_7->cmp_type_cache, VAR_3, &VAR_1->cmp);
  }
 }
 FUNC_1(VAR_6);

 FUNC_2(VAR_1);
}
