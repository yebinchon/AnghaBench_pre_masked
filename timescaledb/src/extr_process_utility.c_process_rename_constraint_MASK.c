
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int relation; } ;
typedef TYPE_1__ RenameStmt ;
typedef int ProcessUtilityArgs ;
typedef int Oid ;
typedef int Hypertable ;
typedef int Chunk ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int * FUNC_6 (int ,int ,int) ;
 int * FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(ProcessUtilityArgs *VAR_3, Cache *VAR_4, Oid VAR_5, RenameStmt *VAR_6)
{
 Hypertable *VAR_7;

 VAR_7 = FUNC_7(VAR_4, VAR_5);

 if (((void*)0) != VAR_7)
 {
  FUNC_5(VAR_6->relation);
  FUNC_4(VAR_3, VAR_7);
  FUNC_3(VAR_7, VAR_2, VAR_6);
 }
 else
 {
  Chunk *VAR_8 = FUNC_6(VAR_5, 0, 0);

  if (((void*)0) != VAR_8)
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("renaming constraints on chunks is not supported")));
 }
}
