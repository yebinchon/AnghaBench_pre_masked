
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* schemaname; int if_not_exists; int schemaElts; int * authrole; } ;
typedef TYPE_1__ CreateSchemaStmt ;


 int FUNC_0 (TYPE_1__*,char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1)
{
 CreateSchemaStmt VAR_2 = {
  .schemaname = (char *) VAR_1,
  .authrole = ((void*)0),
  .schemaElts = VAR_0,
  .if_not_exists = 1,
 };

 FUNC_0(&VAR_2,
      "(generated CREATE SCHEMA command)"

      ,
      -1,
      -1

 );
}
