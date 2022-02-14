
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {int iArgCol; scalar_t__ eStart; int regApp; int csrApp; int regAccum; TYPE_8__* pFunc; TYPE_4__* pOwner; scalar_t__ pFilter; struct TYPE_13__* pNextWin; } ;
typedef TYPE_5__ Window ;
typedef int Vdbe ;
struct TYPE_14__ {int funcFlags; scalar_t__ zName; } ;
struct TYPE_11__ {TYPE_2__* pList; } ;
struct TYPE_12__ {TYPE_3__ x; } ;
struct TYPE_10__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_9__ {int pExpr; } ;
typedef int Parse ;
typedef int CollSeq ;


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
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int ,int,int,int) ;
 int FUNC_10 (int *,int ,int ,int ,int ,char const*,int ) ;
 int FUNC_11 (int *,int ,int,int ,int,int) ;
 int FUNC_12 (int *,TYPE_8__*,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_17(
  Parse *VAR_22,
  Window *VAR_23,
  int VAR_24,
  int VAR_25,
  int VAR_26,
  int VAR_27
){
  Vdbe *VAR_28 = FUNC_5(VAR_22);
  Window *VAR_29;
  for(VAR_29=VAR_23; VAR_29; VAR_29=VAR_29->pNextWin){
    int VAR_30 = VAR_29->pFunc->funcFlags;
    int VAR_31;
    int VAR_32 = FUNC_16(VAR_29);

    if( VAR_24>=0 ){
      int VAR_33;
      for(VAR_33=0; VAR_33<VAR_32; VAR_33++){
        FUNC_9(VAR_28, VAR_4, VAR_24, VAR_29->iArgCol+VAR_33, VAR_26+VAR_33);
      }
      VAR_31 = VAR_26;
      if( VAR_30 & VAR_16 ){
        if( VAR_32==0 ){
          VAR_31 = VAR_27;
        }else{
          FUNC_8(VAR_28, VAR_10, VAR_27, VAR_26+VAR_32);
        }
        VAR_32++;
      }
    }else{
      FUNC_2( !(VAR_30 & VAR_16) );
      VAR_31 = VAR_26 + VAR_29->iArgCol;
    }

    if( (VAR_29->pFunc->funcFlags & VAR_14)
      && VAR_29->eStart!=VAR_17
    ){
      int VAR_34 = FUNC_7(VAR_28, VAR_8, VAR_31);
      FUNC_0(VAR_28);
      if( VAR_25==0 ){
        FUNC_8(VAR_28, VAR_0, VAR_29->regApp+1, 1);
        FUNC_8(VAR_28, VAR_10, VAR_31, VAR_29->regApp);
        FUNC_9(VAR_28, VAR_9, VAR_29->regApp, 2, VAR_29->regApp+2);
        FUNC_8(VAR_28, VAR_6, VAR_29->csrApp, VAR_29->regApp+2);
      }else{
        FUNC_11(VAR_28, VAR_11, VAR_29->csrApp, 0, VAR_31, 1);
        FUNC_1(VAR_28);
        FUNC_7(VAR_28, VAR_5, VAR_29->csrApp);
        FUNC_15(VAR_28, FUNC_14(VAR_28)-2);
      }
      FUNC_15(VAR_28, VAR_34);
    }else if( VAR_29->regApp ){
      FUNC_2( VAR_29->pFunc->zName==VAR_21
           || VAR_29->pFunc->zName==VAR_18
      );
      FUNC_2( VAR_25==0 || VAR_25==1 );
      FUNC_8(VAR_28, VAR_0, VAR_29->regApp+1-VAR_25, 1);
    }else if( VAR_29->pFunc->zName==VAR_20
           || VAR_29->pFunc->zName==VAR_19
    ){

    }else{
      int VAR_35 = 0;
      if( VAR_29->pFilter ){
        int VAR_36;
        FUNC_2( VAR_32==0 || VAR_32==VAR_29->pOwner->x.pList->nExpr );
        FUNC_2( VAR_32 || VAR_29->pOwner->x.pList==0 );
        if( VAR_24>0 ){
          VAR_36 = FUNC_4(VAR_22);
          FUNC_9(VAR_28, VAR_4, VAR_24, VAR_29->iArgCol+VAR_32,VAR_36);
        }else{
          VAR_36 = VAR_31 + VAR_32;
        }
        VAR_35 = FUNC_9(VAR_28, VAR_7, VAR_36, 0, 1);
        FUNC_0(VAR_28);
        if( VAR_24>0 ){
          FUNC_6(VAR_22, VAR_36);
        }
      }
      if( VAR_29->pFunc->funcFlags & VAR_15 ){
        CollSeq *VAR_37;
        FUNC_2( VAR_32>0 );
        VAR_37 = FUNC_3(VAR_22, VAR_29->pOwner->x.pList->a[0].pExpr);
        FUNC_10(VAR_28, VAR_3, 0,0,0, (const char*)VAR_37, VAR_12);
      }
      FUNC_9(VAR_28, VAR_25? VAR_1 : VAR_2,
                        VAR_25, VAR_31, VAR_29->regAccum);
      FUNC_12(VAR_28, VAR_29->pFunc, VAR_13);
      FUNC_13(VAR_28, (u8)VAR_32);
      if( VAR_35 ) FUNC_15(VAR_28, VAR_35);
    }
  }
}
