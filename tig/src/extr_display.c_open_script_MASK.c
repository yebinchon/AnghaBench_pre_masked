
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int,char const*) ;
 int VAR_2 ;

enum status_code
FUNC_4(const char *VAR_3)
{
 if (FUNC_2())
  return FUNC_0("Scripts cannot be run from scripts");

 char VAR_4[VAR_0];

 if (!FUNC_3(VAR_4, sizeof(VAR_4), VAR_3))
  return FUNC_0("Failed to expand path: %s", VAR_3);

 return FUNC_1(&VAR_2, "%s", VAR_4)
  ? VAR_1 : FUNC_0("Failed to open %s", VAR_4);
}
