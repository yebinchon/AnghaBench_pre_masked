
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cmp_func_cache; int cmp_type_cache; int value_type_cache; } ;
typedef TYPE_2__ TransCache ;
struct TYPE_8__ {TYPE_1__* flinfo; } ;
struct TYPE_6__ {scalar_t__ fn_extra; int fn_mcxt; } ;
typedef TYPE_3__* FunctionCallInfo ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static TransCache *
FUNC_3(FunctionCallInfo VAR_0)
{
 TransCache *VAR_1 = (TransCache *) VAR_0->flinfo->fn_extra;

 if (VAR_1 == ((void*)0))
 {
  VAR_0->flinfo->fn_extra = FUNC_0(VAR_0->flinfo->fn_mcxt, sizeof(TransCache));
  VAR_1 = (TransCache *) VAR_0->flinfo->fn_extra;
  FUNC_2(&VAR_1->value_type_cache);
  FUNC_2(&VAR_1->cmp_type_cache);
  FUNC_1(&VAR_1->cmp_func_cache);
 }
 return VAR_1;
}
