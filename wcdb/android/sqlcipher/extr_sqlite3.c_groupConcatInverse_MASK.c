
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {scalar_t__ nChar; scalar_t__ mxAlloc; int * zText; } ;
typedef TYPE_1__ StrAccum ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;
  StrAccum *VAR_5;
  FUNC_1( VAR_2==1 || VAR_2==2 );
  if( FUNC_5(VAR_3[0])==VAR_0 ) return;
  VAR_5 = (StrAccum*)FUNC_3(VAR_1, sizeof(*VAR_5));


  if( FUNC_0(VAR_5) ){
    VAR_4 = FUNC_4(VAR_3[0]);
    if( VAR_2==2 ){
      VAR_4 += FUNC_4(VAR_3[1]);
    }else{
      VAR_4++;
    }
    if( VAR_4>=(int)VAR_5->nChar ){
      VAR_5->nChar = 0;
    }else{
      VAR_5->nChar -= VAR_4;
      FUNC_2(VAR_5->zText, &VAR_5->zText[VAR_4], VAR_5->nChar);
    }
    if( VAR_5->nChar==0 ) VAR_5->mxAlloc = 0;
  }
}
