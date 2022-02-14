
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ eStart; scalar_t__ eEnd; int iEphCsr; scalar_t__ eType; int nBufferCol; int regPart; TYPE_4__* pOrderBy; TYPE_4__* pPartition; } ;
typedef TYPE_1__ Window ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_22__ {int nExpr; } ;
struct TYPE_21__ {int nMem; int nTab; } ;
struct TYPE_20__ {TYPE_1__* pWin; } ;
typedef TYPE_2__ Select ;
typedef TYPE_3__ Parse ;
typedef int KeyInfo ;
typedef TYPE_4__ ExprList ;


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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (TYPE_3__*,TYPE_4__*,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int FUNC_8 (int *,int ,int,int,int) ;
 int FUNC_9 (int *,void*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (TYPE_3__*,TYPE_1__*,int,int ,int,int) ;
 int FUNC_15 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_2__*,int *,int,int,int*) ;
 int FUNC_17 (TYPE_3__*,TYPE_1__*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_18(
  Parse *VAR_17,
  Select *VAR_18,
  WhereInfo *VAR_19,
  int VAR_20,
  int VAR_21
){
  Window *VAR_22 = VAR_18->pWin;
  Vdbe *VAR_23 = FUNC_3(VAR_17);
  int VAR_24;
  int VAR_25;
  ExprList *VAR_26 = VAR_22->pPartition;
  ExprList *VAR_27 = VAR_22->pOrderBy;
  int VAR_28 = VAR_27 ? VAR_27->nExpr : 0;
  int VAR_29;

  int VAR_30;
  int VAR_31;
  int VAR_32;
  int VAR_33;
  int VAR_34;
  int VAR_35;
  int VAR_36;
  int VAR_37;
  int VAR_38;
  int VAR_39 = VAR_22->pOrderBy && VAR_22->eStart==VAR_14
          && VAR_22->eEnd==VAR_16;

  FUNC_2( (VAR_22->eStart==VAR_16 && VAR_22->eEnd==VAR_14)
       || (VAR_22->eStart==VAR_16 && VAR_22->eEnd==VAR_16)
       || (VAR_22->eStart==VAR_14 && VAR_22->eEnd==VAR_14)
       || (VAR_22->eStart==VAR_14 && VAR_22->eEnd==VAR_16)
  );

  VAR_38 = FUNC_12(VAR_17);
  VAR_29 = VAR_17->nMem+1;
  VAR_17->nMem += VAR_28;


  VAR_32 = ++VAR_17->nMem;
  VAR_33 = FUNC_12(VAR_17);

  VAR_34 = VAR_17->nTab++;
  VAR_35 = ++VAR_17->nMem;

  FUNC_16(VAR_17, VAR_18, VAR_19, VAR_32, VAR_33, &VAR_37);
  VAR_30 = FUNC_5(VAR_23, VAR_4);


  FUNC_13(VAR_23, VAR_33);
  FUNC_7(VAR_23, VAR_8, 0, FUNC_10(VAR_23)+2);
  FUNC_0(VAR_23);
  FUNC_7(VAR_23, VAR_9, VAR_34, VAR_22->iEphCsr);


  VAR_36 = FUNC_15(VAR_17, VAR_22);

  FUNC_7(VAR_23, VAR_5, 0, VAR_35);
  FUNC_7(VAR_23, VAR_12, VAR_34, VAR_38);
  FUNC_0(VAR_23);
  FUNC_7(VAR_23, VAR_12, VAR_22->iEphCsr, VAR_38);
  FUNC_1(VAR_23);

  if( VAR_39 ){
    int VAR_40 = FUNC_10(VAR_23);
    FUNC_14(VAR_17, VAR_22, VAR_34, 0, VAR_36, VAR_37);
    FUNC_7(VAR_23, VAR_7, VAR_34, VAR_40);
    FUNC_0(VAR_23);
    FUNC_7(VAR_23, VAR_12, VAR_34, VAR_38);
    FUNC_1(VAR_23);
  }
  VAR_31 = FUNC_10(VAR_23);

  if( VAR_27 && (VAR_22->eEnd==VAR_14 || VAR_22->eStart==VAR_14) ){
    int VAR_41 = (VAR_22->eStart==VAR_14);
    int VAR_42 = 0;
    if( VAR_22->eType==VAR_15 ){
      int VAR_43 = VAR_22->nBufferCol + (VAR_26 ? VAR_26->nExpr : 0);
      int VAR_44 = VAR_22->regPart + (VAR_26 ? VAR_26->nExpr : 0);
      KeyInfo *VAR_45 = FUNC_4(VAR_17, VAR_27, 0, 0);
      for(VAR_24=0; VAR_24<VAR_28; VAR_24++){
        FUNC_8(VAR_23, VAR_1, VAR_34, VAR_43+VAR_24, VAR_29+VAR_24);
      }
      VAR_25 = FUNC_8(VAR_23, VAR_2, VAR_29, VAR_44, VAR_28);
      FUNC_9(VAR_23, (void*)VAR_45, VAR_13);
      VAR_42 = FUNC_8(VAR_23, VAR_6, VAR_25+2, 0, VAR_25+2);
      FUNC_0(VAR_23);
      FUNC_8(VAR_23, VAR_3, VAR_29, VAR_44, VAR_28-1);
    }

    FUNC_17(VAR_17, VAR_22, VAR_35, VAR_20, VAR_21,
        (VAR_41 ? VAR_36 : 0), (VAR_41 ? VAR_37 : 0)
    );
    if( VAR_42 ) FUNC_11(VAR_23, VAR_42);
  }

  if( VAR_39==0 ){
    FUNC_14(VAR_17, VAR_22, VAR_34, 0, VAR_36, VAR_37);
  }
  FUNC_7(VAR_23, VAR_0, VAR_35, 1);
  FUNC_7(VAR_23, VAR_7, VAR_34, VAR_31);
  FUNC_0(VAR_23);

  FUNC_17(VAR_17, VAR_22, VAR_35, VAR_20, VAR_21, 0, 0);

  FUNC_13(VAR_23, VAR_38);
  FUNC_6(VAR_23, VAR_10, VAR_22->iEphCsr);
  FUNC_6(VAR_23, VAR_11, VAR_32);


  FUNC_11(VAR_23, VAR_30);
}
