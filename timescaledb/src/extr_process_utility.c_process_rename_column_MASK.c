
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_9__ {int space; TYPE_1__ fd; } ;
struct TYPE_8__ {int newname; int subname; } ;
typedef TYPE_2__ RenameStmt ;
typedef int ProcessUtilityArgs ;
typedef int Oid ;
typedef TYPE_3__ Hypertable ;
typedef int Dimension ;
typedef int Chunk ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int * FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ,int ,int ) ;
 TYPE_3__* FUNC_10 (int *,int ) ;

__attribute__((used)) static void
FUNC_11(ProcessUtilityArgs *VAR_4, Cache *VAR_5, Oid VAR_6, RenameStmt *VAR_7)
{
 Hypertable *VAR_8 = FUNC_10(VAR_5, VAR_6);
 Dimension *VAR_9;

 if (((void*)0) == VAR_8)
 {
  Chunk *VAR_10 = FUNC_6(VAR_6, 0, 0);

  if (((void*)0) != VAR_10)
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_3("cannot rename column \"%s\" of hypertable chunk \"%s\"",
       VAR_7->subname,
       FUNC_4(VAR_6)),
      FUNC_2("Rename the hypertable column instead.")));
  return;
 }


 if ((FUNC_7(VAR_8->fd.id) & VAR_3) != 0)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_3("cannot rename column \"%s\" of materialization table \"%s\"",
      VAR_7->subname,
      FUNC_4(VAR_6))));

 FUNC_5(VAR_4, VAR_8);

 VAR_9 = FUNC_9(VAR_8->space, VAR_0, VAR_7->subname);

 if (((void*)0) == VAR_9)
  return;

 FUNC_8(VAR_9, VAR_7->newname);
}
