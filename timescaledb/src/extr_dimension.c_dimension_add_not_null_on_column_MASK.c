
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int missing_ok; int subtype; int type; } ;
typedef int Oid ;
typedef TYPE_1__ AlterTableCmd ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(Oid VAR_3, char *VAR_4)
{
 AlterTableCmd VAR_5 = {
  .type = VAR_2,
  .subtype = VAR_0,
  .name = VAR_4,
  .missing_ok = 0,
 };

 FUNC_1(VAR_1,
   (FUNC_3("adding not-null constraint to column \"%s\"", VAR_4),
    FUNC_2("Time dimensions cannot have NULL values")));

 FUNC_0(VAR_3, FUNC_4(&VAR_5), 0);
}
