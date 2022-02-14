
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pOwner; } ;
typedef TYPE_3__ Window ;
struct TYPE_9__ {int nExpr; } ;
struct TYPE_6__ {TYPE_4__* pList; } ;
struct TYPE_7__ {TYPE_1__ x; } ;
typedef TYPE_4__ ExprList ;



__attribute__((used)) static int FUNC_0(Window *VAR_0){
  ExprList *VAR_1 = VAR_0->pOwner->x.pList;
  return (VAR_1 ? VAR_1->nExpr : 0);
}
