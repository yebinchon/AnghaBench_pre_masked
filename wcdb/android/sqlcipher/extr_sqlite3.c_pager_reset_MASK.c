
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pPCache; int pBackup; int iDataVersion; } ;
typedef TYPE_1__ Pager ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(Pager *VAR_0){
  VAR_0->iDataVersion++;
  FUNC_0(VAR_0->pBackup);
  FUNC_1(VAR_0->pPCache);
}
