
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_35__ {int nExpr; } ;
struct TYPE_34__ {int nMem; int db; int nTab; int * pVdbe; } ;
struct TYPE_33__ {int nSelectRow; int iLimit; int iOffset; scalar_t__ op; int selFlags; int * pLimit; TYPE_8__* pOrderBy; struct TYPE_33__* pPrior; struct TYPE_33__* pNext; void** addrOpenEphm; scalar_t__ pWin; TYPE_1__* pEList; TYPE_4__* pSrc; } ;
struct TYPE_32__ {TYPE_8__* pOrderBy; } ;
struct TYPE_31__ {int nSrc; TYPE_3__* a; } ;
struct TYPE_29__ {scalar_t__ isRecursive; } ;
struct TYPE_30__ {int iCursor; TYPE_2__ fg; } ;
struct TYPE_28__ {int nExpr; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ SelectDest ;
typedef TYPE_6__ Select ;
typedef TYPE_7__ Parse ;
typedef int KeyInfo ;
typedef TYPE_8__ ExprList ;
typedef int Expr ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (TYPE_7__*,TYPE_6__*,int) ;
 int * FUNC_7 (TYPE_7__*,TYPE_6__*,int) ;
 int FUNC_8 (TYPE_7__*,TYPE_6__*,int,int ,int ,TYPE_5__*,int,int) ;
 scalar_t__ FUNC_9 (TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_7__*,char*) ;
 int FUNC_11 (int ,TYPE_8__*) ;
 int FUNC_12 (TYPE_7__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int,int) ;
 int FUNC_14 (int *,int ,int) ;
 void* FUNC_15 (int *,int ,int,int) ;
 int FUNC_16 (int *,int ,int,int,int) ;
 int FUNC_17 (int *,int ,int,int,int ,char*,int ) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (TYPE_7__*) ;
 int FUNC_20 (int *,int) ;

__attribute__((used)) static void FUNC_21(
  Parse *VAR_17,
  Select *VAR_18,
  SelectDest *VAR_19
){
  SrcList *VAR_20 = VAR_18->pSrc;
  int VAR_21 = VAR_18->pEList->nExpr;
  Vdbe *VAR_22 = VAR_17->pVdbe;
  Select *VAR_23 = VAR_18->pPrior;
  int VAR_24;
  int VAR_25, VAR_26;
  int VAR_27 = 0;
  int VAR_28;
  int VAR_29;
  int VAR_30 = 0;
  int VAR_31 = VAR_14;
  SelectDest VAR_32;
  int VAR_33;
  int VAR_34;
  ExprList *VAR_35;
  Expr *VAR_36;
  int VAR_37, VAR_38;


  if( VAR_18->pWin ){
    FUNC_10(VAR_17, "cannot use window functions in recursive queries");
    return;
  }



  if( FUNC_9(VAR_17, VAR_11, 0, 0, 0) ) return;


  VAR_26 = FUNC_19(VAR_17);
  VAR_18->nSelectRow = 320;
  FUNC_6(VAR_17, VAR_18, VAR_26);
  VAR_36 = VAR_18->pLimit;
  VAR_37 = VAR_18->iLimit;
  VAR_38 = VAR_18->iOffset;
  VAR_18->pLimit = 0;
  VAR_18->iLimit = VAR_18->iOffset = 0;
  VAR_35 = VAR_18->pOrderBy;


  for(VAR_33=0; FUNC_0(VAR_33<VAR_20->nSrc); VAR_33++){
    if( VAR_20->a[VAR_33].fg.isRecursive ){
      VAR_27 = VAR_20->a[VAR_33].iCursor;
      break;
    }
  }




  VAR_29 = VAR_17->nTab++;
  if( VAR_18->op==VAR_16 ){
    VAR_31 = VAR_35 ? VAR_13 : VAR_12;
    VAR_30 = VAR_17->nTab++;
  }else{
    VAR_31 = VAR_35 ? VAR_15 : VAR_14;
  }
  FUNC_13(&VAR_32, VAR_31, VAR_29);


  VAR_28 = ++VAR_17->nMem;
  FUNC_16(VAR_22, VAR_5, VAR_27, VAR_28, VAR_21);
  if( VAR_35 ){
    KeyInfo *VAR_39 = FUNC_7(VAR_17, VAR_18, 1);
    FUNC_17(VAR_22, VAR_4, VAR_29, VAR_35->nExpr+2, 0,
                      (char*)VAR_39, VAR_8);
    VAR_32.pOrderBy = VAR_35;
  }else{
    FUNC_15(VAR_22, VAR_4, VAR_29, VAR_21);
  }
  FUNC_2((VAR_22, "Queue table"));
  if( VAR_30 ){
    VAR_18->addrOpenEphm[0] = FUNC_15(VAR_22, VAR_4, VAR_30, 0);
    VAR_18->selFlags |= VAR_10;
  }


  VAR_18->pOrderBy = 0;


  VAR_23->pNext = 0;
  FUNC_1((VAR_17, 1, "SETUP"));
  VAR_34 = FUNC_12(VAR_17, VAR_23, &VAR_32);
  VAR_23->pNext = VAR_18;
  if( VAR_34 ) goto end_of_recursive_query;


  VAR_24 = FUNC_15(VAR_22, VAR_6, VAR_29, VAR_26); FUNC_3(VAR_22);


  FUNC_14(VAR_22, VAR_3, VAR_27);
  if( VAR_35 ){
    FUNC_16(VAR_22, VAR_0, VAR_29, VAR_35->nExpr+1, VAR_28);
  }else{
    FUNC_15(VAR_22, VAR_7, VAR_29, VAR_28);
  }
  FUNC_14(VAR_22, VAR_2, VAR_29);


  VAR_25 = FUNC_19(VAR_17);
  FUNC_5(VAR_22, VAR_38, VAR_25);
  FUNC_8(VAR_17, VAR_18, VAR_27,
      0, 0, VAR_19, VAR_25, VAR_26);
  if( VAR_37 ){
    FUNC_15(VAR_22, VAR_1, VAR_37, VAR_26);
    FUNC_3(VAR_22);
  }
  FUNC_20(VAR_22, VAR_25);




  if( VAR_18->selFlags & VAR_9 ){
    FUNC_10(VAR_17, "recursive aggregate queries not supported");
  }else{
    VAR_18->pPrior = 0;
    FUNC_1((VAR_17, 1, "RECURSIVE STEP"));
    FUNC_12(VAR_17, VAR_18, &VAR_32);
    FUNC_4( VAR_18->pPrior==0 );
    VAR_18->pPrior = VAR_23;
  }


  FUNC_18(VAR_22, VAR_24);
  FUNC_20(VAR_22, VAR_26);

end_of_recursive_query:
  FUNC_11(VAR_17->db, VAR_18->pOrderBy);
  VAR_18->pOrderBy = VAR_35;
  VAR_18->pLimit = VAR_36;
  return;
}
