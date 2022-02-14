
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int cmp_type_cache; int value_type_cache; int cmp_func_cache; } ;
typedef TYPE_1__ TransCache ;
struct TYPE_13__ {scalar_t__ is_null; } ;
struct TYPE_12__ {TYPE_3__ cmp; TYPE_3__ value; } ;
typedef int MemoryContext ;
typedef TYPE_2__ InternalCmpAggStore ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,TYPE_3__,TYPE_3__) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_3__,TYPE_3__*) ;

__attribute__((used)) static inline Datum
FUNC_6(MemoryContext VAR_0, InternalCmpAggStore *VAR_1,
     InternalCmpAggStore *VAR_2, char *VAR_3, FunctionCallInfo VAR_4)
{
 MemoryContext VAR_5;
 TransCache *VAR_6;

 if (VAR_2 == ((void*)0))
  FUNC_2(VAR_1);

 VAR_6 = FUNC_4(VAR_4);





 if (VAR_1 == ((void*)0))
 {
  VAR_5 = FUNC_1(VAR_0);

  VAR_1 =
   (InternalCmpAggStore *) FUNC_0(VAR_0, sizeof(InternalCmpAggStore));
  FUNC_5(&VAR_6->value_type_cache, VAR_2->value, &VAR_1->value);
  FUNC_5(&VAR_6->cmp_type_cache, VAR_2->cmp, &VAR_1->cmp);

  FUNC_1(VAR_5);
  FUNC_2(VAR_1);
 }

 if (VAR_1->cmp.is_null && VAR_2->cmp.is_null)
 {
  FUNC_2(VAR_1);
 }
 else if (VAR_1->cmp.is_null != VAR_2->cmp.is_null)
 {
  if (VAR_1->cmp.is_null)
   FUNC_2(VAR_2);
  else
   FUNC_2(VAR_1);
 }
 else if (FUNC_3(&VAR_6->cmp_func_cache, VAR_4, VAR_3, VAR_2->cmp, VAR_1->cmp))
 {
  VAR_5 = FUNC_1(VAR_0);
  FUNC_5(&VAR_6->value_type_cache, VAR_2->value, &VAR_1->value);
  FUNC_5(&VAR_6->cmp_type_cache, VAR_2->cmp, &VAR_1->cmp);
  FUNC_1(VAR_5);
 }

 FUNC_2(VAR_1);
}
