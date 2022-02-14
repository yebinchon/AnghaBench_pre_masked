
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pNext; } ;
struct TYPE_5__ {TYPE_2__* pFirst; } ;
typedef TYPE_1__ MemJournal ;
typedef TYPE_2__ FileChunk ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(MemJournal *VAR_0){
  FileChunk *VAR_1;
  FileChunk *VAR_2;
  for(VAR_1=VAR_0->pFirst; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_0(VAR_1);
  }
  VAR_0->pFirst = 0;
}
