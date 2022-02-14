
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int nBufferCol; int regPart; int iEphCsr; TYPE_7__* pPartition; } ;
typedef TYPE_4__ Window ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_19__ {int nExpr; } ;
struct TYPE_18__ {int nMem; } ;
struct TYPE_17__ {TYPE_3__* pSrc; TYPE_4__* pWin; } ;
struct TYPE_15__ {TYPE_2__* a; } ;
struct TYPE_14__ {int iCursor; TYPE_1__* pTab; } ;
struct TYPE_13__ {int nCol; } ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef int KeyInfo ;
typedef TYPE_7__ ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_6__*) ;
 int * FUNC_3 (TYPE_6__*,TYPE_7__*,int ,int ) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int *,int ,int,int,int) ;
 int FUNC_6 (int *,void*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  Parse *VAR_9,
  Select *VAR_10,
  WhereInfo *VAR_11,
  int VAR_12,
  int VAR_13,
  int *VAR_14
){
  Window *VAR_15 = VAR_10->pWin;
  Vdbe *VAR_16 = FUNC_2(VAR_9);
  int VAR_17 = VAR_10->pSrc->a[0].iCursor;
  int VAR_18 = VAR_10->pSrc->a[0].pTab->nCol;
  int VAR_19;

  int VAR_20 = VAR_9->nMem+1;
  int VAR_21 = VAR_20+VAR_18;
  int VAR_22 = VAR_21+1;

  *VAR_14 = VAR_22;
  VAR_9->nMem += VAR_18 + 2;



  for(VAR_19=0; VAR_19<VAR_18; VAR_19++){
    FUNC_5(VAR_16, VAR_0, VAR_17, VAR_19, VAR_20+VAR_19);
  }
  FUNC_5(VAR_16, VAR_6, VAR_20, VAR_18, VAR_21);



  if( VAR_15->pPartition ){
    int VAR_23;
    ExprList *VAR_24 = VAR_15->pPartition;
    int VAR_25 = VAR_24->nExpr;
    int VAR_26 = VAR_20 + VAR_15->nBufferCol;
    KeyInfo *VAR_27 = FUNC_3(VAR_9, VAR_24, 0, 0);

    VAR_23 = FUNC_5(VAR_16, VAR_1, VAR_26, VAR_15->regPart,VAR_25);
    FUNC_6(VAR_16, (void*)VAR_27, VAR_8);
    FUNC_5(VAR_16, VAR_5, VAR_23+2, VAR_23+4, VAR_23+2);
    FUNC_1(VAR_16);
    FUNC_5(VAR_16, VAR_2, VAR_26, VAR_15->regPart, VAR_25-1);
    FUNC_4(VAR_16, VAR_3, VAR_12, VAR_13);
    FUNC_0((VAR_16, "call flush_partition"));
  }


  FUNC_4(VAR_16, VAR_7, VAR_15->iEphCsr, VAR_22);
  FUNC_5(VAR_16, VAR_4, VAR_15->iEphCsr, VAR_21, VAR_22);


  FUNC_7(VAR_11);


  FUNC_4(VAR_16, VAR_3, VAR_12, VAR_13);
  FUNC_0((VAR_16, "call flush_partition"));
}
