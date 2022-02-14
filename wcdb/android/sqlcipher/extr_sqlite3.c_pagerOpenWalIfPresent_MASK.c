
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eState; scalar_t__ eLock; scalar_t__ journalMode; int pPCache; int zWal; int pVfs; int tempFile; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(Pager *VAR_6){
  int VAR_7 = VAR_5;
  FUNC_0( VAR_6->eState==VAR_2 );
  FUNC_0( VAR_6->eLock>=VAR_3 );

  if( !VAR_6->tempFile ){
    int VAR_8;
    VAR_7 = FUNC_2(
        VAR_6->pVfs, VAR_6->zWal, VAR_4, &VAR_8
    );
    if( VAR_7==VAR_5 ){
      if( VAR_8 ){
        Pgno VAR_9;

        VAR_7 = FUNC_1(VAR_6, &VAR_9);
        if( VAR_7 ) return VAR_7;
        if( VAR_9==0 ){
          VAR_7 = FUNC_3(VAR_6->pVfs, VAR_6->zWal, 0);
        }else{
          FUNC_6( FUNC_5(VAR_6->pPCache)==0 );
          VAR_7 = FUNC_4(VAR_6, 0);
        }
      }else if( VAR_6->journalMode==VAR_1 ){
        VAR_6->journalMode = VAR_0;
      }
    }
  }
  return VAR_7;
}
