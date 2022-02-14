
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extname; } ;
typedef int Node ;
typedef TYPE_1__ AlterExtensionStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5(Node *VAR_4)
{
 AlterExtensionStmt *VAR_5 = (AlterExtensionStmt *) VAR_4;

 if (FUNC_4(VAR_5->extname, VAR_2) != 0)
  return 1;


 if (VAR_3)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("extension \"%s\" cannot be updated after the old version has already been "
      "loaded",
      VAR_5->extname),
     FUNC_2("Start a new session and execute ALTER EXTENSION as the first command. "
       "Make sure to pass the \"-X\" flag to psql.")));

 return 0;
}
