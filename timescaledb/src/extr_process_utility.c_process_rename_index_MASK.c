
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int newname; } ;
typedef TYPE_1__ RenameStmt ;
typedef int ProcessUtilityArgs ;
typedef int Oid ;
typedef int Hypertable ;
typedef int Chunk ;
typedef int Cache ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(ProcessUtilityArgs *VAR_0, Cache *VAR_1, Oid VAR_2, RenameStmt *VAR_3)
{
 Oid VAR_4 = FUNC_0(VAR_2, 1);
 Hypertable *VAR_5;

 if (!FUNC_1(VAR_4))
  return;

 VAR_5 = FUNC_6(VAR_1, VAR_4);

 if (((void*)0) != VAR_5)
 {
  FUNC_5(VAR_5, VAR_2, VAR_3->newname);

  FUNC_2(VAR_0, VAR_5);
 }
 else
 {
  Chunk *VAR_6 = FUNC_3(VAR_4, 0, 0);

  if (((void*)0) != VAR_6)
   FUNC_4(VAR_6, VAR_2, VAR_3->newname);
 }
}
