
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eLock; TYPE_1__* pBtree; struct TYPE_7__* pNext; } ;
struct TYPE_6__ {int btsFlags; TYPE_3__* pLock; TYPE_1__* pWriter; } ;
struct TYPE_5__ {TYPE_2__* pBt; } ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;
typedef TYPE_3__ BtLock ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(Btree *VAR_3){
  BtShared *VAR_4 = VAR_3->pBt;
  if( VAR_4->pWriter==VAR_3 ){
    BtLock *VAR_5;
    VAR_4->pWriter = 0;
    VAR_4->btsFlags &= ~(VAR_0|VAR_1);
    for(VAR_5=VAR_4->pLock; VAR_5; VAR_5=VAR_5->pNext){
      FUNC_0( VAR_5->eLock==VAR_2 || VAR_5->pBtree==VAR_3 );
      VAR_5->eLock = VAR_2;
    }
  }
}
