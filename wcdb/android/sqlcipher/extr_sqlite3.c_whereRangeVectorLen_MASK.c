
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_24__ {TYPE_4__* pExpr; } ;
typedef TYPE_11__ WhereTerm ;
struct TYPE_37__ {TYPE_8__* a; } ;
struct TYPE_36__ {TYPE_13__* pExpr; } ;
struct TYPE_35__ {TYPE_6__* pEList; } ;
struct TYPE_34__ {TYPE_5__* a; } ;
struct TYPE_33__ {TYPE_13__* pExpr; } ;
struct TYPE_32__ {TYPE_13__* pRight; TYPE_17__* pLeft; } ;
struct TYPE_31__ {TYPE_2__* pList; } ;
struct TYPE_30__ {TYPE_1__* a; } ;
struct TYPE_29__ {TYPE_13__* pExpr; } ;
struct TYPE_28__ {TYPE_3__ x; } ;
struct TYPE_27__ {int zName; } ;
struct TYPE_23__ {TYPE_9__* pList; TYPE_7__* pSelect; } ;
struct TYPE_26__ {int flags; scalar_t__ op; int iTable; scalar_t__ iColumn; TYPE_10__ x; } ;
struct TYPE_25__ {scalar_t__* aiColumn; scalar_t__* aSortOrder; int * azColl; int pTable; scalar_t__ nColumn; } ;
typedef int Parse ;
typedef TYPE_12__ Index ;
typedef TYPE_13__ Expr ;
typedef TYPE_14__ CollSeq ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_14__* FUNC_1 (int *,TYPE_13__*,TYPE_13__*) ;
 char FUNC_2 (TYPE_13__*,int ) ;
 int FUNC_3 (TYPE_13__*) ;
 int FUNC_4 (TYPE_17__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 char FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(
  Parse *VAR_3,
  int VAR_4,
  Index *VAR_5,
  int VAR_6,
  WhereTerm *VAR_7
){
  int VAR_8 = FUNC_4(VAR_7->pExpr->pLeft);
  int VAR_9;

  VAR_8 = FUNC_0(VAR_8, (VAR_5->nColumn - VAR_6));
  for(VAR_9=1; VAR_9<VAR_8; VAR_9++){


    char VAR_10;
    char VAR_11 = 0;
    CollSeq *VAR_12;
    Expr *VAR_13 = VAR_7->pExpr->pLeft->x.pList->a[VAR_9].pExpr;
    Expr *VAR_14 = VAR_7->pExpr->pRight;
    if( VAR_14->flags & VAR_0 ){
      VAR_14 = VAR_14->x.pSelect->pEList->a[VAR_9].pExpr;
    }else{
      VAR_14 = VAR_14->x.pList->a[VAR_9].pExpr;
    }





    if( VAR_13->op!=VAR_1
     || VAR_13->iTable!=VAR_4
     || VAR_13->iColumn!=VAR_5->aiColumn[VAR_9+VAR_6]
     || VAR_5->aSortOrder[VAR_9+VAR_6]!=VAR_5->aSortOrder[VAR_6]
    ){
      break;
    }

    FUNC_7( VAR_13->iColumn==VAR_2 );
    VAR_10 = FUNC_2(VAR_14, FUNC_3(VAR_13));
    VAR_11 = FUNC_6(VAR_5->pTable, VAR_13->iColumn);
    if( VAR_10!=VAR_11 ) break;

    VAR_12 = FUNC_1(VAR_3, VAR_13, VAR_14);
    if( VAR_12==0 ) break;
    if( FUNC_5(VAR_12->zName, VAR_5->azColl[VAR_9+VAR_6]) ) break;
  }
  return VAR_9;
}
