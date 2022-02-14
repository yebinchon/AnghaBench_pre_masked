
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int newname; int subname; } ;
typedef TYPE_1__ RenameStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int * VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(RenameStmt *VAR_5)
{
 int VAR_6 = 0;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  if (FUNC_3(VAR_5->subname, VAR_4[VAR_6], VAR_2) == 0)
  {
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("cannot rename schemas used by the TimescaleDB extension")));
   return;
  }
 }

 FUNC_4(VAR_5->subname, VAR_5->newname);
 FUNC_6(VAR_5->subname, VAR_5->newname);
 FUNC_7(VAR_5->subname, VAR_5->newname);
 FUNC_5(VAR_5->subname, VAR_5->newname);
}
