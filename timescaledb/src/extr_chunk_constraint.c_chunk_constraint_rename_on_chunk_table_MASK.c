
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int table_name; int schema_name; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
struct TYPE_7__ {char* subname; char* newname; int relation; int renameType; } ;
typedef TYPE_2__ RenameStmt ;
typedef TYPE_3__ Chunk ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_3__* FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(int32 VAR_1, char *VAR_2, char *VAR_3)
{
 Chunk *VAR_4 = FUNC_3(VAR_1, 0, 1);
 RenameStmt VAR_5 = {
  .renameType = VAR_0,
  .relation = FUNC_2(FUNC_0(VAR_4->fd.schema_name), FUNC_0(VAR_4->fd.table_name), 0),
  .subname = VAR_2,
  .newname = VAR_3,
 };

 FUNC_1(&VAR_5);
}
