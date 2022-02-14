
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int jpc; } ;
typedef TYPE_1__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;

int FUNC_2 (FuncState *VAR_2) {
  int VAR_3 = VAR_2->jpc;
  int VAR_4;
  VAR_2->jpc = VAR_0;
  VAR_4 = FUNC_0(VAR_2, VAR_1, 0, VAR_0);
  FUNC_1(VAR_2, &VAR_4, VAR_3);
  return VAR_4;
}
