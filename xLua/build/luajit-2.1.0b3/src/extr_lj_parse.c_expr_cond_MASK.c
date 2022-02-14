
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ k; int f; } ;
struct TYPE_7__ {int fs; } ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ ExpDesc ;
typedef int BCPos ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static BCPos FUNC_2(LexState *VAR_2)
{
  ExpDesc VAR_3;
  FUNC_1(VAR_2, &VAR_3);
  if (VAR_3.k == VAR_1) VAR_3.k = VAR_0;
  FUNC_0(VAR_2->fs, &VAR_3);
  return VAR_3.f;
}
