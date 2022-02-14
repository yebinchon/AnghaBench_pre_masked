
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_13__ ;


typedef int Vdbe ;
struct TYPE_24__ {int iPKey; } ;
typedef TYPE_1__ Table ;
struct TYPE_27__ {int isDeferred; int nCol; TYPE_1__* pFrom; } ;
struct TYPE_26__ {int tnum; int* aiColumn; } ;
struct TYPE_25__ {int nTab; int isMultiWrite; int pToplevel; TYPE_13__* db; } ;
struct TYPE_23__ {int flags; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;
typedef TYPE_4__ FKey ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_13__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int,int,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*,int,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int,int) ;
 int FUNC_13 (int *,int ,int,int,int) ;
 int FUNC_14 (int *,int ,int,int,int,int ,int) ;
 int FUNC_15 (int *,int ,int,int,int,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_23 (int *,int ) ;

__attribute__((used)) static void FUNC_24(
  Parse *VAR_21,
  int VAR_22,
  Table *VAR_23,
  Index *VAR_24,
  FKey *VAR_25,
  int *VAR_26,
  int VAR_27,
  int VAR_28,
  int VAR_29
){
  int VAR_30;
  Vdbe *VAR_31 = FUNC_4(VAR_21);
  int VAR_32 = VAR_21->nTab - 1;
  int VAR_33 = FUNC_20(VAR_21);

  FUNC_23(VAR_31,
    (!VAR_25->isDeferred
      && !(VAR_21->db->flags & VAR_18)
      && !VAR_21->pToplevel
      && !VAR_21->isMultiWrite) ? VAR_0 : VAR_1);
  if( VAR_28<0 ){
    FUNC_12(VAR_31, VAR_6, VAR_25->isDeferred, VAR_33);
    FUNC_0(VAR_31);
  }
  for(VAR_30=0; VAR_30<VAR_25->nCol; VAR_30++){
    int VAR_34 = VAR_26[VAR_30] + VAR_27 + 1;
    FUNC_12(VAR_31, VAR_8, VAR_34, VAR_33); FUNC_0(VAR_31);
  }

  if( VAR_29==0 ){
    if( VAR_24==0 ){


      int VAR_35;
      int VAR_36 = FUNC_3(VAR_21);






      FUNC_12(VAR_31, VAR_14, VAR_26[0]+1+VAR_27, VAR_36);
      VAR_35 = FUNC_12(VAR_31, VAR_10, VAR_36, 0);
      FUNC_0(VAR_31);





      if( VAR_23==VAR_25->pFrom && VAR_28==1 ){
        FUNC_13(VAR_31, VAR_4, VAR_27, VAR_33, VAR_36); FUNC_0(VAR_31);
        FUNC_16(VAR_31, VAR_20);
      }

      FUNC_8(VAR_21, VAR_32, VAR_22, VAR_23, VAR_13);
      FUNC_13(VAR_31, VAR_12, VAR_32, 0, VAR_36); FUNC_0(VAR_31);
      FUNC_18(VAR_31, VAR_33);
      FUNC_19(VAR_31, FUNC_17(VAR_31)-2);
      FUNC_19(VAR_31, VAR_35);
      FUNC_10(VAR_21, VAR_36);
    }else{
      int VAR_37 = VAR_25->nCol;
      int VAR_38 = FUNC_2(VAR_21, VAR_37);
      int VAR_39 = FUNC_3(VAR_21);

      FUNC_13(VAR_31, VAR_13, VAR_32, VAR_24->tnum, VAR_22);
      FUNC_22(VAR_21, VAR_24);
      for(VAR_30=0; VAR_30<VAR_37; VAR_30++){
        FUNC_12(VAR_31, VAR_3, VAR_26[VAR_30]+1+VAR_27, VAR_38+VAR_30);
      }
      if( VAR_23==VAR_25->pFrom && VAR_28==1 ){
        int VAR_40 = FUNC_17(VAR_31) + VAR_37 + 1;
        for(VAR_30=0; VAR_30<VAR_37; VAR_30++){
          int VAR_41 = VAR_26[VAR_30]+1+VAR_27;
          int VAR_42 = VAR_24->aiColumn[VAR_30]+1+VAR_27;
          FUNC_1( VAR_24->aiColumn[VAR_30]>=0 );
          FUNC_1( VAR_26[VAR_30]!=VAR_23->iPKey );
          if( VAR_24->aiColumn[VAR_30]==VAR_23->iPKey ){

            VAR_42 = VAR_27;
          }
          FUNC_13(VAR_31, VAR_11, VAR_41, VAR_40, VAR_42); FUNC_0(VAR_31);
          FUNC_16(VAR_31, VAR_19);
        }
        FUNC_18(VAR_31, VAR_33);
      }

      FUNC_14(VAR_31, VAR_9, VAR_38, VAR_37, VAR_39,
                        FUNC_6(VAR_21->db,VAR_24), VAR_37);
      FUNC_15(VAR_31, VAR_7, VAR_32, VAR_33, VAR_39, 0); FUNC_0(VAR_31);

      FUNC_10(VAR_21, VAR_39);
      FUNC_9(VAR_21, VAR_38, VAR_37);
    }
  }

  if( !VAR_25->isDeferred && !(VAR_21->db->flags & VAR_18)
   && !VAR_21->pToplevel
   && !VAR_21->isMultiWrite
  ){




    FUNC_1( VAR_28==1 );
    FUNC_5(VAR_21, VAR_17,
        VAR_0, 0, VAR_15, VAR_16);
  }else{
    if( VAR_28>0 && VAR_25->isDeferred==0 ){
      FUNC_7(VAR_21);
    }
    FUNC_12(VAR_31, VAR_5, VAR_25->isDeferred, VAR_28);
  }

  FUNC_21(VAR_31, VAR_33);
  FUNC_11(VAR_31, VAR_2, VAR_32);
}
