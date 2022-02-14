
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pList; } ;
struct TYPE_6__ {scalar_t__ z; } ;
struct TYPE_7__ {struct TYPE_7__* pNext; TYPE_1__ t; } ;
typedef TYPE_2__ RenameToken ;
typedef TYPE_3__ RenameCtx ;



__attribute__((used)) static RenameToken *FUNC_0(RenameCtx *VAR_0){
  RenameToken *VAR_1 = VAR_0->pList;
  RenameToken *VAR_2;
  RenameToken **VAR_3;

  for(VAR_2=VAR_1->pNext; VAR_2; VAR_2=VAR_2->pNext){
    if( VAR_2->t.z>VAR_1->t.z ) VAR_1 = VAR_2;
  }
  for(VAR_3=&VAR_0->pList; *VAR_3!=VAR_1; VAR_3=&(*VAR_3)->pNext);
  *VAR_3 = VAR_1->pNext;

  return VAR_1;
}
