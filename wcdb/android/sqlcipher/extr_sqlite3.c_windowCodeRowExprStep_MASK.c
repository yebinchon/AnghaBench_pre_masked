
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ eStart; scalar_t__ eEnd; int iEphCsr; scalar_t__ pStart; scalar_t__ pEnd; } ;
typedef TYPE_1__ Window ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_22__ {int nMem; int nTab; } ;
struct TYPE_21__ {TYPE_1__* pWin; } ;
typedef TYPE_2__ Select ;
typedef TYPE_3__ Parse ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,int) ;
 int * FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int ,int,int) ;
 int FUNC_11 (int *,int ,int,int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_18 (TYPE_3__*,TYPE_1__*,int,int,int,int) ;
 int FUNC_19 (TYPE_3__*,int,int) ;
 int FUNC_20 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_21 (TYPE_3__*,TYPE_2__*,int *,int,int,int*) ;
 int FUNC_22 (TYPE_3__*,TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_23(
  Parse *VAR_16,
  Select *VAR_17,
  WhereInfo *VAR_18,
  int VAR_19,
  int VAR_20
){
  Window *VAR_21 = VAR_17->pWin;
  Vdbe *VAR_22 = FUNC_7(VAR_16);
  int VAR_23;
  int VAR_24;
  int VAR_25;

  int VAR_26;
  int VAR_27;
  int VAR_28 = VAR_16->nTab++;
  int VAR_29 = VAR_16->nTab++;
  int VAR_30;
  int VAR_31;
  int VAR_32;
  int VAR_33;
  int VAR_34 = 0;
  int VAR_35 = 0;
  int VAR_36 = 0;

  FUNC_5( VAR_21->eStart==VAR_14
       || VAR_21->eStart==VAR_12
       || VAR_21->eStart==VAR_13
       || VAR_21->eStart==VAR_15
  );
  FUNC_5( VAR_21->eEnd==VAR_13
       || VAR_21->eEnd==VAR_12
       || VAR_21->eEnd==VAR_15
       || VAR_21->eEnd==VAR_14
  );


  VAR_23 = ++VAR_16->nMem;
  VAR_24 = FUNC_15(VAR_16);
  VAR_25 = FUNC_15(VAR_16);

  VAR_30 = ++VAR_16->nMem;
  VAR_31 = ++VAR_16->nMem;

  FUNC_21(VAR_16, VAR_17, VAR_18, VAR_23, VAR_24, &VAR_36);

  VAR_32 = FUNC_8(VAR_22, VAR_2);


  FUNC_16(VAR_22, VAR_24);
  FUNC_10(VAR_22, VAR_6, 0, FUNC_13(VAR_22)+3);
  FUNC_1(VAR_22);
  FUNC_0((VAR_22, "Flush_partition subroutine"));
  FUNC_10(VAR_22, VAR_7, VAR_28, VAR_21->iEphCsr);
  FUNC_10(VAR_22, VAR_7, VAR_29, VAR_21->iEphCsr);



  if( VAR_21->pStart ){
    FUNC_6(VAR_16, VAR_21->pStart, VAR_30);
    FUNC_19(VAR_16, VAR_30, 0);
  }
  if( VAR_21->pEnd ){
    FUNC_6(VAR_16, VAR_21->pEnd, VAR_31);
    FUNC_19(VAR_16, VAR_31, 1);
  }
  if( VAR_21->pEnd && VAR_21->eStart==VAR_13 ){
    FUNC_5( VAR_21->pStart!=0 );
    FUNC_5( VAR_21->eEnd==VAR_13 );
    FUNC_11(VAR_22, VAR_1, VAR_30, FUNC_13(VAR_22)+2, VAR_31);
    FUNC_3(VAR_22);
    FUNC_10(VAR_22, VAR_0, VAR_36, VAR_30);
    FUNC_11(VAR_22, VAR_11, VAR_30, VAR_31, VAR_31);
  }

  if( VAR_21->pStart && VAR_21->eEnd==VAR_14 ){
    FUNC_5( VAR_21->pEnd!=0 );
    FUNC_5( VAR_21->eStart==VAR_14 );
    FUNC_11(VAR_22, VAR_4, VAR_30, FUNC_13(VAR_22)+3, VAR_31);
    FUNC_3(VAR_22);
    FUNC_10(VAR_22, VAR_0, VAR_36, VAR_30);
    FUNC_10(VAR_22, VAR_0, VAR_36, VAR_31);
  }


  VAR_26 = FUNC_20(VAR_16, VAR_21);

  FUNC_10(VAR_22, VAR_10, VAR_21->iEphCsr, VAR_25);
  FUNC_1(VAR_22);
  FUNC_10(VAR_22, VAR_10, VAR_28, VAR_25);
  FUNC_4(VAR_22);
  FUNC_12(VAR_22, 1);
  FUNC_10(VAR_22, VAR_10, VAR_29, VAR_25);
  FUNC_4(VAR_22);
  FUNC_12(VAR_22, 1);




  VAR_33 = FUNC_13(VAR_22);
  if( VAR_21->eEnd==VAR_14 ){
    VAR_34 = FUNC_11(VAR_22, VAR_3, VAR_31, 0 , 1);
    FUNC_1(VAR_22);
  }
  FUNC_10(VAR_22, VAR_5, VAR_29, FUNC_13(VAR_22)+2);
  FUNC_1(VAR_22);
  VAR_27 = FUNC_8(VAR_22, VAR_2);
  FUNC_18(VAR_16, VAR_21, VAR_29, 0, VAR_26, VAR_36);
  if( VAR_21->eEnd==VAR_15 ){
    FUNC_10(VAR_22, VAR_2, 0, VAR_33);
    FUNC_14(VAR_22, VAR_27);
    VAR_33 = FUNC_13(VAR_22);
  }else{
    FUNC_14(VAR_22, VAR_27);
    if( VAR_21->eEnd==VAR_14 ){
      FUNC_14(VAR_22, VAR_34);
    }
  }

  if( VAR_21->eEnd==VAR_13 ){
    VAR_34 = FUNC_11(VAR_22, VAR_3, VAR_31, 0 , 1);
    FUNC_1(VAR_22);
  }
  if( VAR_21->eStart==VAR_13 ){
    VAR_35 = FUNC_11(VAR_22, VAR_3, VAR_30, 0 , 1);
    FUNC_1(VAR_22);
  }
  FUNC_17(VAR_16, VAR_21, 0);
  FUNC_22(VAR_16, VAR_21, VAR_19, VAR_20);
  FUNC_10(VAR_22, VAR_5, VAR_21->iEphCsr, FUNC_13(VAR_22)+2);
  FUNC_1(VAR_22);
  FUNC_10(VAR_22, VAR_2, 0, VAR_25);
  if( VAR_21->eStart==VAR_13 ){
    FUNC_14(VAR_22, VAR_35);
  }

  if( VAR_21->eStart==VAR_12
   || VAR_21->eStart==VAR_14
   || VAR_21->eStart==VAR_13
  ){
    int VAR_37 = FUNC_15(VAR_16);;
    if( VAR_21->eStart==VAR_14 ){
      FUNC_11(VAR_22, VAR_3, VAR_30, VAR_37, 1);
      FUNC_1(VAR_22);
    }
    if( VAR_21->eStart==VAR_13 ){
      FUNC_10(VAR_22, VAR_5, VAR_28, FUNC_13(VAR_22)+2);
      FUNC_1(VAR_22);
      FUNC_10(VAR_22, VAR_2, 0, VAR_37);
    }else{
      FUNC_10(VAR_22, VAR_5, VAR_28, FUNC_13(VAR_22)+1);
      FUNC_2(VAR_22);
    }
    FUNC_18(VAR_16, VAR_21, VAR_28, 1, VAR_26, VAR_36);
    FUNC_16(VAR_22, VAR_37);
  }
  if( VAR_21->eEnd==VAR_13 ){
    FUNC_14(VAR_22, VAR_34);
  }
  FUNC_10(VAR_22, VAR_2, 0, VAR_33);


  FUNC_16(VAR_22, VAR_25);
  FUNC_9(VAR_22, VAR_8, VAR_21->iEphCsr);
  FUNC_9(VAR_22, VAR_9, VAR_23);
  FUNC_0((VAR_22, "end flush_partition subroutine"));


  FUNC_14(VAR_22, VAR_32);
}
