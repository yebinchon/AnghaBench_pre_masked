
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int info; } ;
struct TYPE_5__ {scalar_t__ k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1 (FuncState *VAR_1, expdesc *VAR_2) {
  if (VAR_2->k == VAR_0)
    FUNC_0(VAR_1, VAR_2->u.info);
}
