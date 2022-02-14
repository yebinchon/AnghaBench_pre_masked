
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ iOrderByCol; } ;
struct TYPE_26__ {TYPE_1__ x; } ;
struct ExprList_item {int sortOrder; TYPE_8__* pExpr; TYPE_2__ u; } ;
struct TYPE_27__ {TYPE_9__* pDfltColl; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_33__ {int zName; } ;
struct TYPE_32__ {int flags; } ;
struct TYPE_31__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_30__ {int * aSortOrder; TYPE_9__** aColl; } ;
struct TYPE_29__ {TYPE_3__* db; } ;
struct TYPE_28__ {TYPE_7__* pOrderBy; } ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ KeyInfo ;
typedef TYPE_7__ ExprList ;
typedef TYPE_8__ Expr ;
typedef TYPE_9__ CollSeq ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_9__* FUNC_1 (TYPE_5__*,TYPE_4__*,scalar_t__) ;
 TYPE_8__* FUNC_2 (TYPE_5__*,TYPE_8__*,int ) ;
 TYPE_9__* FUNC_3 (TYPE_5__*,TYPE_8__*) ;
 TYPE_6__* FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static KeyInfo *FUNC_6(Parse *VAR_1, Select *VAR_2, int VAR_3){
  ExprList *VAR_4 = VAR_2->pOrderBy;
  int VAR_5 = VAR_2->pOrderBy->nExpr;
  sqlite3 *VAR_6 = VAR_1->db;
  KeyInfo *VAR_7 = FUNC_4(VAR_6, VAR_5+VAR_3, 1);
  if( VAR_7 ){
    int VAR_8;
    for(VAR_8=0; VAR_8<VAR_5; VAR_8++){
      struct ExprList_item *VAR_9 = &VAR_4->a[VAR_8];
      Expr *VAR_10 = VAR_9->pExpr;
      CollSeq *VAR_11;

      if( VAR_10->flags & VAR_0 ){
        VAR_11 = FUNC_3(VAR_1, VAR_10);
      }else{
        VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_9->u.x.iOrderByCol-1);
        if( VAR_11==0 ) VAR_11 = VAR_6->pDfltColl;
        VAR_4->a[VAR_8].pExpr =
          FUNC_2(VAR_1, VAR_10, VAR_11->zName);
      }
      FUNC_0( FUNC_5(VAR_7) );
      VAR_7->aColl[VAR_8] = VAR_11;
      VAR_7->aSortOrder[VAR_8] = VAR_4->a[VAR_8].sortOrder;
    }
  }

  return VAR_7;
}
