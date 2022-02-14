
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u8 ;
struct ValueNewStat4Ctx {TYPE_1__* pParse; } ;
struct TYPE_22__ {double r; int i; } ;
struct TYPE_24__ {int flags; TYPE_2__ u; } ;
typedef TYPE_4__ sqlite3_value ;
typedef int sqlite3 ;
typedef int i64 ;
struct TYPE_23__ {char* zToken; scalar_t__ iValue; } ;
struct TYPE_25__ {int op; int op2; int flags; TYPE_3__ u; struct TYPE_25__* pLeft; } ;
struct TYPE_21__ {scalar_t__ nErr; } ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int) ;
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
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;
 char* FUNC_7 (int *,char*,char const*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int,char*,int ,int ) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*,int ,int ) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*,int) ;
 int FUNC_17 (TYPE_4__*,int ,int,int ,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *,TYPE_5__*,int ,int ,TYPE_4__**,struct ValueNewStat4Ctx*) ;
 TYPE_4__* FUNC_20 (int *,struct ValueNewStat4Ctx*) ;

__attribute__((used)) static int FUNC_21(
  sqlite3 *VAR_24,
  Expr *VAR_25,
  u8 VAR_26,
  u8 VAR_27,
  sqlite3_value **VAR_28,
  struct ValueNewStat4Ctx *VAR_29
){
  int VAR_30;
  char *VAR_31 = 0;
  sqlite3_value *VAR_32 = 0;
  int VAR_33 = 1;
  const char *VAR_34 = "";
  int VAR_35 = VAR_10;

  FUNC_3( VAR_25!=0 );
  while( (VAR_30 = VAR_25->op)==VAR_23 || VAR_30==VAR_19 ) VAR_25 = VAR_25->pLeft;



  if( FUNC_2(VAR_30==VAR_18) ) VAR_30 = VAR_25->op2;






  FUNC_3( (VAR_25->flags & VAR_1)==0 || VAR_29==0 );

  if( VAR_30==VAR_13 ){
    u8 VAR_36 = FUNC_4(VAR_25->u.zToken,0);
    VAR_35 = FUNC_21(VAR_24, VAR_25->pLeft, VAR_26, VAR_36, VAR_28, VAR_29);
    FUNC_18( VAR_35!=VAR_10 );
    if( *VAR_28 ){
      FUNC_14(*VAR_28, VAR_36, VAR_11);
      FUNC_10(*VAR_28, VAR_27, VAR_11);
    }
    return VAR_35;
  }




  if( VAR_30==VAR_22
   && (VAR_25->pLeft->op==VAR_16 || VAR_25->pLeft->op==VAR_14) ){
    VAR_25 = VAR_25->pLeft;
    VAR_30 = VAR_25->op;
    VAR_33 = -1;
    VAR_34 = "-";
  }

  if( VAR_30==VAR_20 || VAR_30==VAR_14 || VAR_30==VAR_16 ){
    VAR_32 = FUNC_20(VAR_24, VAR_29);
    if( VAR_32==0 ) goto no_mem;
    if( FUNC_0(VAR_25, VAR_0) ){
      FUNC_16(VAR_32, (i64)VAR_25->u.iValue*VAR_33);
    }else{
      VAR_31 = FUNC_7(VAR_24, "%s%s", VAR_34, VAR_25->u.zToken);
      if( VAR_31==0 ) goto no_mem;
      FUNC_12(VAR_32, -1, VAR_31, VAR_11, VAR_8);
    }
    if( (VAR_30==VAR_16 || VAR_30==VAR_14 ) && VAR_27==VAR_6 ){
      FUNC_10(VAR_32, VAR_7, VAR_11);
    }else{
      FUNC_10(VAR_32, VAR_27, VAR_11);
    }
    if( VAR_32->flags & (VAR_2|VAR_3) ) VAR_32->flags &= ~VAR_4;
    if( VAR_26!=VAR_11 ){
      VAR_35 = FUNC_13(VAR_32, VAR_26);
    }
  }else if( VAR_30==VAR_22 ) {

    if( VAR_10==FUNC_21(VAR_24,VAR_25->pLeft,VAR_26,VAR_27,&VAR_32,VAR_29)
     && VAR_32!=0
    ){
      FUNC_15(VAR_32);
      if( VAR_32->flags & VAR_3 ){
        VAR_32->u.r = -VAR_32->u.r;
      }else if( VAR_32->u.i==VAR_5 ){
        VAR_32->u.r = -(double)VAR_5;
        FUNC_1(VAR_32, VAR_3);
      }else{
        VAR_32->u.i = -VAR_32->u.i;
      }
      FUNC_10(VAR_32, VAR_27, VAR_26);
    }
  }else if( VAR_30==VAR_17 ){
    VAR_32 = FUNC_20(VAR_24, VAR_29);
    if( VAR_32==0 ) goto no_mem;
    FUNC_15(VAR_32);
  }

  else if( VAR_30==VAR_12 ){
    int VAR_37;
    FUNC_3( VAR_25->u.zToken[0]=='x' || VAR_25->u.zToken[0]=='X' );
    FUNC_3( VAR_25->u.zToken[1]=='\'' );
    VAR_32 = FUNC_20(VAR_24, VAR_29);
    if( !VAR_32 ) goto no_mem;
    VAR_31 = &VAR_25->u.zToken[2];
    VAR_37 = FUNC_9(VAR_31)-1;
    FUNC_3( VAR_31[VAR_37]=='\'' );
    FUNC_17(VAR_32, FUNC_6(VAR_24, VAR_31, VAR_37), VAR_37/2,
                         0, VAR_8);
  }






  else if( VAR_30==VAR_21 ){
    VAR_32 = FUNC_20(VAR_24, VAR_29);
    if( VAR_32 ){
      VAR_32->flags = VAR_2;
      VAR_32->u.i = VAR_25->u.zToken[4]==0;
    }
  }

  *VAR_28 = VAR_32;
  return VAR_35;

no_mem:



    FUNC_8(VAR_24);
  FUNC_5(VAR_24, VAR_31);
  FUNC_3( *VAR_28==0 );



  FUNC_3( VAR_29==0 ); FUNC_11(VAR_32);

  return VAR_9;
}
