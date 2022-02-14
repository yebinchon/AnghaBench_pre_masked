
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_28__ {scalar_t__ iOrderByCol; } ;
struct TYPE_29__ {TYPE_1__ x; } ;
struct ExprList_item {scalar_t__ zSpan; scalar_t__ zName; TYPE_2__ u; int pExpr; scalar_t__ bSorterRef; } ;
typedef int Vdbe ;
struct TYPE_32__ {int pSchema; } ;
typedef TYPE_5__ Table ;
struct TYPE_36__ {int nMem; int nTab; int db; int * pVdbe; } ;
struct TYPE_35__ {int iOffset; TYPE_3__* pEList; } ;
struct TYPE_34__ {int eDest; int iSDParm; int iSdst; int zAffSdst; } ;
struct TYPE_33__ {int labelDone; int labelBkOut; int regReturn; int nDefer; int iECursor; int nOBSat; int sortFlags; TYPE_4__* aDefer; TYPE_10__* pOrderBy; } ;
struct TYPE_31__ {int iCsr; int nKey; TYPE_5__* pTab; } ;
struct TYPE_30__ {struct ExprList_item* a; } ;
struct TYPE_27__ {int nKeyCol; } ;
struct TYPE_26__ {int nExpr; } ;
typedef TYPE_6__ SortCtx ;
typedef TYPE_7__ SelectDest ;
typedef TYPE_8__ Select ;
typedef TYPE_9__ Parse ;
typedef TYPE_10__ ExprList ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int,int) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;


 int VAR_24 ;


 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_9__*,int ,int) ;
 int FUNC_7 (TYPE_9__*,int) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_9__*,int,int,TYPE_5__*,int ) ;
 TYPE_14__* FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_9__*,int,int) ;
 int FUNC_12 (TYPE_9__*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ,int) ;
 int FUNC_17 (int *,int ,int,int) ;
 int FUNC_18 (int *,int ,int,int,int) ;
 int FUNC_19 (int *,int ,int,int,int,int ,int) ;
 int FUNC_20 (int *,int ,int,int,int,int) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (TYPE_9__*) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int) ;

__attribute__((used)) static void FUNC_28(
  Parse *VAR_25,
  Select *VAR_26,
  SortCtx *VAR_27,
  int VAR_28,
  SelectDest *VAR_29
){
  Vdbe *VAR_30 = VAR_25->pVdbe;
  int VAR_31 = VAR_27->labelDone;
  int VAR_32 = FUNC_25(VAR_25);
  int VAR_33;
  int VAR_34 = 0;
  int VAR_35;
  ExprList *VAR_36 = VAR_27->pOrderBy;
  int VAR_37 = VAR_29->eDest;
  int VAR_38 = VAR_29->iSDParm;
  int VAR_39;
  int VAR_40;
  int VAR_41;
  int VAR_42;
  int VAR_43;
  int VAR_44;
  int VAR_45;
  int VAR_46 = 0;
  struct ExprList_item *VAR_47 = VAR_26->pEList->a;

  FUNC_4( VAR_31<0 );
  if( VAR_27->labelBkOut ){
    FUNC_17(VAR_30, VAR_2, VAR_27->regReturn, VAR_27->labelBkOut);
    FUNC_23(VAR_30, VAR_31);
    FUNC_26(VAR_30, VAR_27->labelBkOut);
  }
  VAR_35 = VAR_27->iECursor;
  if( VAR_37==VAR_24 || VAR_37==VAR_23 || VAR_37==130 ){
    VAR_40 = 0;
    VAR_39 = VAR_29->iSdst;
  }else{
    VAR_40 = FUNC_8(VAR_25);
    if( VAR_37==131 || VAR_37==128 ){
      VAR_39 = FUNC_8(VAR_25);
      VAR_28 = 0;
    }else{
      VAR_39 = FUNC_7(VAR_25, VAR_28);
    }
  }
  VAR_42 = VAR_36->nExpr - VAR_27->nOBSat;
  if( VAR_27->sortFlags & VAR_22 ){
    int VAR_48 = ++VAR_25->nMem;
    VAR_43 = VAR_25->nTab++;
    if( VAR_27->labelBkOut ){
      VAR_34 = FUNC_15(VAR_30, VAR_10); FUNC_3(VAR_30);
    }
    FUNC_18(VAR_30, VAR_11, VAR_43, VAR_48,
        VAR_42+1+VAR_28+VAR_46);
    if( VAR_34 ) FUNC_24(VAR_30, VAR_34);
    VAR_33 = 1 + FUNC_17(VAR_30, VAR_20, VAR_35, VAR_31);
    FUNC_3(VAR_30);
    FUNC_5(VAR_30, VAR_26->iOffset, VAR_32);
    FUNC_18(VAR_30, VAR_18, VAR_35, VAR_48, VAR_43);
    VAR_45 = 0;
  }else{
    VAR_33 = 1 + FUNC_17(VAR_30, VAR_17, VAR_35, VAR_31); FUNC_3(VAR_30);
    FUNC_5(VAR_30, VAR_26->iOffset, VAR_32);
    VAR_43 = VAR_35;
    VAR_45 = 1;
  }
  for(VAR_44=0, VAR_41=VAR_42+VAR_45-1; VAR_44<VAR_28; VAR_44++){



    if( VAR_47[VAR_44].u.x.iOrderByCol==0 ) VAR_41++;
  }
  for(VAR_44=VAR_28-1; VAR_44>=0; VAR_44--){





    {
      int VAR_49;
      if( VAR_47[VAR_44].u.x.iOrderByCol ){
        VAR_49 = VAR_47[VAR_44].u.x.iOrderByCol-1;
      }else{
        VAR_49 = VAR_41--;
      }
      FUNC_18(VAR_30, VAR_1, VAR_43, VAR_49, VAR_39+VAR_44);
      FUNC_2((VAR_30, "%s", VAR_47[VAR_44].zName?VAR_47[VAR_44].zName : VAR_47[VAR_44].zSpan));
    }
  }
  switch( VAR_37 ){
    case 128:
    case 131: {
      FUNC_18(VAR_30, VAR_1, VAR_43, VAR_42+VAR_45, VAR_39);
      FUNC_17(VAR_30, VAR_7, VAR_38, VAR_40);
      FUNC_18(VAR_30, VAR_5, VAR_38, VAR_39, VAR_40);
      FUNC_21(VAR_30, VAR_0);
      break;
    }

    case 129: {
      FUNC_4( VAR_28==FUNC_14(VAR_29->zAffSdst) );
      FUNC_19(VAR_30, VAR_6, VAR_39, VAR_28, VAR_40,
                        VAR_29->zAffSdst, VAR_28);
      FUNC_20(VAR_30, VAR_3, VAR_38, VAR_40, VAR_39, VAR_28);
      break;
    }
    case 130: {

      break;
    }

    default: {
      FUNC_4( VAR_37==VAR_24 || VAR_37==VAR_23 );
      FUNC_27( VAR_37==VAR_24 );
      FUNC_27( VAR_37==VAR_23 );
      if( VAR_37==VAR_24 ){
        FUNC_17(VAR_30, VAR_13, VAR_29->iSdst, VAR_28);
      }else{
        FUNC_16(VAR_30, VAR_21, VAR_29->iSDParm);
      }
      break;
    }
  }
  if( VAR_40 ){
    if( VAR_37==129 ){
      FUNC_11(VAR_25, VAR_39, VAR_28);
    }else{
      FUNC_12(VAR_25, VAR_39);
    }
    FUNC_12(VAR_25, VAR_40);
  }


  FUNC_26(VAR_30, VAR_32);
  if( VAR_27->sortFlags & VAR_22 ){
    FUNC_17(VAR_30, VAR_19, VAR_35, VAR_33); FUNC_3(VAR_30);
  }else{
    FUNC_17(VAR_30, VAR_8, VAR_35, VAR_33); FUNC_3(VAR_30);
  }
  if( VAR_27->regReturn ) FUNC_16(VAR_30, VAR_14, VAR_27->regReturn);
  FUNC_26(VAR_30, VAR_31);
}
