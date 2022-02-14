
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zErrMsg; scalar_t__ nErr; int db; int rc; } ;
typedef TYPE_1__ Parse ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(Parse *VAR_0, Parse *VAR_1){
  FUNC_0( VAR_1->zErrMsg==0 || VAR_1->nErr );
  FUNC_0( VAR_0->zErrMsg==0 || VAR_0->nErr );
  if( VAR_0->nErr==0 ){
    VAR_0->zErrMsg = VAR_1->zErrMsg;
    VAR_0->nErr = VAR_1->nErr;
    VAR_0->rc = VAR_1->rc;
  }else{
    FUNC_1(VAR_1->db, VAR_1->zErrMsg);
  }
}
