
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* partitioning; } ;
struct TYPE_6__ {int * fn_expr; } ;
struct TYPE_7__ {TYPE_1__ func_fmgr; } ;
struct TYPE_8__ {TYPE_2__ partfunc; } ;
typedef int Node ;
typedef TYPE_4__ Dimension ;



__attribute__((used)) static Node *
FUNC_0(Dimension *VAR_0)
{
 if (VAR_0 == ((void*)0) || VAR_0->partitioning == ((void*)0))
  return ((void*)0);

 return VAR_0->partitioning->partfunc.func_fmgr.fn_expr;
}
