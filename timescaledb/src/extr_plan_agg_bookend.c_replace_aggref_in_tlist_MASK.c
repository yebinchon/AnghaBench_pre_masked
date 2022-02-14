
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * mm_path; } ;
struct TYPE_5__ {TYPE_1__* pathtarget; } ;
struct TYPE_4__ {int * exprs; } ;
typedef TYPE_2__ Path ;
typedef int Node ;
typedef TYPE_3__ MutatorContext ;
typedef int MinMaxAggPath ;
typedef int List ;


 scalar_t__ FUNC_0 (int *,void*) ;

void
FUNC_1(MinMaxAggPath *VAR_0)
{
 MutatorContext VAR_1;

 VAR_1.mm_path = VAR_0;

 ((Path *) VAR_0)->pathtarget->exprs =
  (List *) FUNC_0((Node *) ((Path *) VAR_0)->pathtarget->exprs,
         (void *) &VAR_1);
}
