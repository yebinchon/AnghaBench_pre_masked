
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {scalar_t__ eState; scalar_t__ pKey; int nKey; scalar_t__ curIntKey; } ;
typedef TYPE_1__ BtCursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int,void*) ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(BtCursor *VAR_3){
  int VAR_4 = VAR_2;
  FUNC_0( VAR_0==VAR_3->eState );
  FUNC_0( 0==VAR_3->pKey );
  FUNC_0( FUNC_1(VAR_3) );

  if( VAR_3->curIntKey ){

    VAR_3->nKey = FUNC_3(VAR_3);
  }else{






    void *VAR_5;
    VAR_3->nKey = FUNC_5(VAR_3);
    VAR_5 = FUNC_6( VAR_3->nKey + 9 + 8 );
    if( VAR_5 ){
      VAR_4 = FUNC_4(VAR_3, 0, (int)VAR_3->nKey, VAR_5);
      if( VAR_4==VAR_2 ){
        FUNC_2(((u8*)VAR_5)+VAR_3->nKey, 0, 9+8);
        VAR_3->pKey = VAR_5;
      }else{
        FUNC_7(VAR_5);
      }
    }else{
      VAR_4 = VAR_1;
    }
  }
  FUNC_0( !VAR_3->curIntKey || !VAR_3->pKey );
  return VAR_4;
}
