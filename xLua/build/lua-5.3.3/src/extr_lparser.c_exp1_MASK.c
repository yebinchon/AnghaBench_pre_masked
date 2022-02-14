
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int info; } ;
struct TYPE_9__ {scalar_t__ k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_10__ {int fs; } ;
typedef TYPE_3__ LexState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (LexState *VAR_1) {
  expdesc VAR_2;
  int VAR_3;
  FUNC_0(VAR_1, &VAR_2);
  FUNC_1(VAR_1->fs, &VAR_2);
  FUNC_2(VAR_2.k == VAR_0);
  VAR_3 = VAR_2.u.info;
  return VAR_3;
}
