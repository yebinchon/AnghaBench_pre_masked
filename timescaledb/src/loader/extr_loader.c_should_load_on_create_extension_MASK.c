
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extname; scalar_t__ if_not_exists; } ;
typedef int Node ;
typedef TYPE_1__ CreateExtensionStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static bool
FUNC_7(Node *VAR_5)
{
 CreateExtensionStmt *VAR_6 = (CreateExtensionStmt *) VAR_5;
 bool VAR_7 = FUNC_6(VAR_6->extname, VAR_2) == 0;

 if (!VAR_7)
  return 0;

 if (!VAR_3)
  return 1;
 if (FUNC_5() && VAR_6->if_not_exists)
  return 0;


 FUNC_0(VAR_1,
   (FUNC_1(VAR_0),
    FUNC_4("extension \"%s\" has already been loaded with another version", VAR_6->extname),
    FUNC_2("The loaded version is \"%s\".", VAR_4),
    FUNC_3("Start a new session and execute CREATE EXTENSION as the first command. "
      "Make sure to pass the \"-X\" flag to psql.")));
 return 0;
}
