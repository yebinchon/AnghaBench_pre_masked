
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pHasContent; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ BtShared ;
typedef int Bitvec ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(BtShared *VAR_0, Pgno VAR_1){
  Bitvec *VAR_2 = VAR_0->pHasContent;
  return (VAR_2 && (VAR_1>FUNC_0(VAR_2) || FUNC_1(VAR_2, VAR_1)));
}
