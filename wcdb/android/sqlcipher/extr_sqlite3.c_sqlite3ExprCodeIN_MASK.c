
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_24__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_31__ {TYPE_4__* pList; } ;
struct TYPE_36__ {struct TYPE_36__* pLeft; TYPE_1__ x; } ;
struct TYPE_35__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_34__ {TYPE_24__* db; scalar_t__ nErr; int * pVdbe; } ;
struct TYPE_33__ {TYPE_5__* pExpr; } ;
struct TYPE_32__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;
typedef int CollSeq ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
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
 char VAR_23 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int*) ;
 char* FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_24__*,...) ;
 scalar_t__ FUNC_9 (TYPE_24__*,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_5__*,int*) ;
 int * FUNC_13 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_5__*,int,int*,int*,int*) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,int) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ,int,int) ;
 int FUNC_21 (int *,int ,int,int,int) ;
 int FUNC_22 (int *,int ,int,int,int,void*,int) ;
 int FUNC_23 (int *,int ,int,int,int,int) ;
 int FUNC_24 (int *,char) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (int *,int) ;
 TYPE_5__* FUNC_29 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_30(
  Parse *VAR_24,
  Expr *VAR_25,
  int VAR_26,
  int VAR_27
){
  int VAR_28 = 0;
  int VAR_29;
  int VAR_30;
  int VAR_31;
  Vdbe *VAR_32;
  int *VAR_33 = 0;
  char *VAR_34 = 0;
  int VAR_35;
  int VAR_36;
  Expr *VAR_37;
  int VAR_38;
  int VAR_39;
  int VAR_40 = 0;
  int VAR_41;
  int VAR_42;
  int VAR_43;
  int VAR_44 = 0;

  VAR_37 = VAR_25->pLeft;
  if( FUNC_11(VAR_24, VAR_25) ) return;
  VAR_34 = FUNC_7(VAR_24, VAR_25);
  VAR_35 = FUNC_14(VAR_25->pLeft);
  VAR_33 = (int*)FUNC_9(
      VAR_24->db, VAR_35*(sizeof(int) + sizeof(char)) + 1
  );
  if( VAR_24->db->mallocFailed ) goto sqlite3ExprCodeIN_oom_error;





  VAR_32 = VAR_24->pVdbe;
  FUNC_5( VAR_32!=0 );
  FUNC_4((VAR_32, "begin IN expr"));
  VAR_29 = FUNC_15(VAR_24, VAR_25,
                             VAR_4 | VAR_6,
                             VAR_26==VAR_27 ? 0 : &VAR_28,
                             VAR_33, &VAR_44);

  FUNC_5( VAR_24->nErr || VAR_35==1 || VAR_29==VAR_1
       || VAR_29==VAR_2 || VAR_29==VAR_3
  );
  VAR_31 = FUNC_6(VAR_24, VAR_37, &VAR_36);
  for(VAR_38=0; VAR_38<VAR_35 && VAR_33[VAR_38]==VAR_38; VAR_38++){}
  if( VAR_38==VAR_35 ){

    VAR_30 = VAR_31;
  }else{

    VAR_30 = FUNC_16(VAR_24, VAR_35);
    for(VAR_38=0; VAR_38<VAR_35; VAR_38++){
      FUNC_21(VAR_32, VAR_11, VAR_31+VAR_38, VAR_30+VAR_33[VAR_38], 0);
    }
  }







  if( VAR_29==VAR_5 ){
    ExprList *VAR_45 = VAR_25->x.pList;
    CollSeq *VAR_46 = FUNC_13(VAR_24, VAR_25->pLeft);
    int VAR_47 = FUNC_27(VAR_24);
    int VAR_48, VAR_49;
    int VAR_50 = 0;
    int VAR_51;
    FUNC_5( !FUNC_0(VAR_25, VAR_0) );
    if( VAR_27!=VAR_26 ){
      VAR_50 = FUNC_17(VAR_24);
      FUNC_21(VAR_32, VAR_9, VAR_30, VAR_30, VAR_50);
    }
    for(VAR_51=0; VAR_51<VAR_45->nExpr; VAR_51++){
      VAR_48 = FUNC_12(VAR_24, VAR_45->a[VAR_51].pExpr, &VAR_49);
      if( VAR_50 && FUNC_10(VAR_45->a[VAR_51].pExpr) ){
        FUNC_21(VAR_32, VAR_9, VAR_50, VAR_48, VAR_50);
      }
      if( VAR_51<VAR_45->nExpr-1 || VAR_27!=VAR_26 ){
        FUNC_22(VAR_32, VAR_12, VAR_30, VAR_47, VAR_48,
                          (void*)VAR_46, VAR_22);
        FUNC_3(VAR_32, VAR_51<VAR_45->nExpr-1);
        FUNC_3(VAR_32, VAR_51==VAR_45->nExpr-1);
        FUNC_24(VAR_32, VAR_34[0]);
      }else{
        FUNC_5( VAR_27==VAR_26 );
        FUNC_22(VAR_32, VAR_16, VAR_30, VAR_26, VAR_48,
                          (void*)VAR_46, VAR_22); FUNC_2(VAR_32);
        FUNC_24(VAR_32, VAR_34[0] | VAR_23);
      }
      FUNC_18(VAR_24, VAR_49);
    }
    if( VAR_50 ){
      FUNC_20(VAR_32, VAR_15, VAR_50, VAR_27); FUNC_2(VAR_32);
      FUNC_25(VAR_32, VAR_26);
    }
    FUNC_28(VAR_32, VAR_47);
    FUNC_18(VAR_24, VAR_50);
    goto sqlite3ExprCodeIN_finished;
  }





  if( VAR_27==VAR_26 ){
    VAR_39 = VAR_26;
  }else{
    VAR_39 = VAR_40 = FUNC_27(VAR_24);
  }
  for(VAR_38=0; VAR_38<VAR_35; VAR_38++){
    Expr *VAR_52 = FUNC_29(VAR_25->pLeft, VAR_38);
    if( FUNC_10(VAR_52) ){
      FUNC_20(VAR_32, VAR_15, VAR_30+VAR_38, VAR_39);
      FUNC_2(VAR_32);
    }
  }





  if( VAR_29==VAR_7 ){



    FUNC_21(VAR_32, VAR_21, VAR_44, VAR_26, VAR_30);
    FUNC_2(VAR_32);
    VAR_41 = FUNC_19(VAR_32, VAR_14);
  }else{
    FUNC_22(VAR_32, VAR_8, VAR_30, VAR_35, 0, VAR_34, VAR_35);
    if( VAR_26==VAR_27 ){

      FUNC_23(VAR_32, VAR_18, VAR_44, VAR_26,
                           VAR_30, VAR_35); FUNC_2(VAR_32);
      goto sqlite3ExprCodeIN_finished;
    }

    VAR_41 = FUNC_23(VAR_32, VAR_13, VAR_44, 0,
                                      VAR_30, VAR_35); FUNC_2(VAR_32);
  }




  if( VAR_28 && VAR_35==1 ){
    FUNC_20(VAR_32, VAR_19, VAR_28, VAR_26);
    FUNC_2(VAR_32);
  }




  if( VAR_26==VAR_27 ) FUNC_25(VAR_32, VAR_26);
  if( VAR_40 ) FUNC_28(VAR_32, VAR_40);
  VAR_43 = FUNC_20(VAR_32, VAR_20, VAR_44, VAR_26);
  FUNC_2(VAR_32);
  if( VAR_35>1 ){
    VAR_42 = FUNC_27(VAR_24);
  }else{


    VAR_42 = VAR_26;
  }
  for(VAR_38=0; VAR_38<VAR_35; VAR_38++){
    Expr *VAR_53;
    CollSeq *VAR_54;
    int VAR_55 = FUNC_17(VAR_24);
    VAR_53 = FUNC_29(VAR_37, VAR_38);
    VAR_54 = FUNC_13(VAR_24, VAR_53);
    FUNC_21(VAR_32, VAR_10, VAR_44, VAR_38, VAR_55);
    FUNC_22(VAR_32, VAR_16, VAR_30+VAR_38, VAR_42, VAR_55,
                      (void*)VAR_54, VAR_22);
    FUNC_2(VAR_32);
    FUNC_18(VAR_24, VAR_55);
  }
  FUNC_20(VAR_32, VAR_14, 0, VAR_27);
  if( VAR_35>1 ){
    FUNC_28(VAR_32, VAR_42);
    FUNC_20(VAR_32, VAR_17, VAR_44, VAR_43+1);
    FUNC_2(VAR_32);



    FUNC_20(VAR_32, VAR_14, 0, VAR_26);
  }


  FUNC_26(VAR_32, VAR_41);

sqlite3ExprCodeIN_finished:
  if( VAR_30!=VAR_31 ) FUNC_18(VAR_24, VAR_30);
  FUNC_1((VAR_32, "end IN expr"));
sqlite3ExprCodeIN_oom_error:
  FUNC_8(VAR_24->db, VAR_33);
  FUNC_8(VAR_24->db, VAR_34);
}
