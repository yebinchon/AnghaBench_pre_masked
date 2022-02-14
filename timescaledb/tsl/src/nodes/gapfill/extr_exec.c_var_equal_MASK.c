
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ varno; scalar_t__ varattno; scalar_t__ vartype; } ;
typedef TYPE_1__ Var ;



__attribute__((used)) static bool
FUNC_0(Var *VAR_0, Var *VAR_1)
{
 return VAR_0->varno == VAR_1->varno && VAR_0->varattno == VAR_1->varattno && VAR_0->vartype == VAR_1->vartype;
}
