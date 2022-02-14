
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_default; int parsed; } ;
typedef TYPE_1__ WithClauseResult ;
typedef int List ;
typedef int Hypertable ;
typedef int Datum ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *) ;

List *
FUNC_2(WithClauseResult *VAR_2, Hypertable *VAR_3)
{
 if (VAR_2[VAR_0].is_default == 0)
 {
  Datum VAR_4 = VAR_2[VAR_0].parsed;
  return FUNC_1(FUNC_0(VAR_4), VAR_3);
 }
 else
  return VAR_1;
}
