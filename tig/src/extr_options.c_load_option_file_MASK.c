
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
struct config_state {char const* member_0; int member_2; int errors; int lineno; int member_1; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,...) ;
 scalar_t__ FUNC_1 (struct io*) ;
 int FUNC_2 (struct io*,char*,int *,int ,struct config_state*) ;
 int FUNC_3 (struct io*,char*,char*) ;
 char* FUNC_4 (struct io*) ;
 int FUNC_5 (char*,int,char const*) ;
 int VAR_4 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static enum status_code
FUNC_8(const char *VAR_5)
{
 struct config_state VAR_6 = { VAR_5, 0, 0 };
 struct io VAR_7;
 char VAR_8[VAR_2];


 if (!VAR_5 || !FUNC_6(VAR_5))
  return VAR_3;

 if (!FUNC_5(VAR_8, sizeof(VAR_8), VAR_5))
  return FUNC_0("Failed to expand path: %s", VAR_5);


 if (!FUNC_3(&VAR_7, "%s", VAR_8)) {


  if (FUNC_1(&VAR_7) == VAR_0)
   return VAR_1;
  return FUNC_0("Error loading file %s: %s", VAR_8, FUNC_4(&VAR_7));
 }

 if (FUNC_2(&VAR_7, " \t", &VAR_6.lineno, VAR_4, &VAR_6) != VAR_3 ||
     VAR_6.errors == 1)
  FUNC_7("Errors while loading %s.", VAR_8);
 return VAR_3;
}
