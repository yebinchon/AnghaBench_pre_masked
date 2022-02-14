
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nRef; scalar_t__ pShmNode; int pLockMutex; struct TYPE_9__* pPrev; struct TYPE_9__* pNext; } ;
typedef TYPE_1__ unixInodeInfo ;
struct TYPE_10__ {TYPE_1__* pInode; } ;
typedef TYPE_2__ unixFile ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(unixFile *VAR_1){
  unixInodeInfo *VAR_2 = VAR_1->pInode;
  FUNC_1( FUNC_8() );
  FUNC_1( FUNC_7(VAR_1) );
  if( FUNC_0(VAR_2) ){
    VAR_2->nRef--;
    if( VAR_2->nRef==0 ){
      FUNC_1( VAR_2->pShmNode==0 );
      FUNC_4(VAR_2->pLockMutex);
      FUNC_2(VAR_1);
      FUNC_6(VAR_2->pLockMutex);
      if( VAR_2->pPrev ){
        FUNC_1( VAR_2->pPrev->pNext==VAR_2 );
        VAR_2->pPrev->pNext = VAR_2->pNext;
      }else{
        FUNC_1( VAR_0==VAR_2 );
        VAR_0 = VAR_2->pNext;
      }
      if( VAR_2->pNext ){
        FUNC_1( VAR_2->pNext->pPrev==VAR_2 );
        VAR_2->pNext->pPrev = VAR_2->pPrev;
      }
      FUNC_5(VAR_2->pLockMutex);
      FUNC_3(VAR_2);
    }
  }
}
