
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int expkind ;
struct TYPE_5__ {int info; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct TYPE_7__ {TYPE_2__ u; int k; int t; int f; } ;
typedef TYPE_3__ expdesc ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (expdesc *VAR_1, expkind VAR_2, int VAR_3) {
  VAR_1->f = VAR_1->t = VAR_0;
  VAR_1->k = VAR_2;
  VAR_1->u.s.info = VAR_3;
}
