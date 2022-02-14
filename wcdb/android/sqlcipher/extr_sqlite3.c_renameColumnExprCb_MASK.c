
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* pRename; } ;
struct TYPE_12__ {TYPE_6__* pParse; TYPE_2__ u; } ;
typedef TYPE_3__ Walker ;
struct TYPE_15__ {scalar_t__ pTriggerTab; } ;
struct TYPE_10__ {scalar_t__ pTab; } ;
struct TYPE_14__ {scalar_t__ op; scalar_t__ iColumn; TYPE_1__ y; } ;
struct TYPE_13__ {scalar_t__ iCol; scalar_t__ pTab; } ;
typedef TYPE_4__ RenameCtx ;
typedef TYPE_5__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,TYPE_4__*,void*) ;

__attribute__((used)) static int FUNC_1(Walker *VAR_3, Expr *VAR_4){
  RenameCtx *VAR_5 = VAR_3->u.pRename;
  if( VAR_4->op==VAR_1
   && VAR_4->iColumn==VAR_5->iCol
   && VAR_3->pParse->pTriggerTab==VAR_5->pTab
  ){
    FUNC_0(VAR_3->pParse, VAR_5, (void*)VAR_4);
  }else if( VAR_4->op==VAR_0
   && VAR_4->iColumn==VAR_5->iCol
   && VAR_5->pTab==VAR_4->y.pTab
  ){
    FUNC_0(VAR_3->pParse, VAR_5, (void*)VAR_4);
  }
  return VAR_2;
}
