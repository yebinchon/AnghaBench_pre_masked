
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ contype; } ;
typedef TYPE_1__* Form_pg_constraint ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(Form_pg_constraint VAR_1)
{
 if (VAR_1->contype == VAR_0)
 {
  return 0;
 }
 return 1;
}
