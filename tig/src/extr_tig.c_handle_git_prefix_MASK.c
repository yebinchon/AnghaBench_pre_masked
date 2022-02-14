
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef int cwd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static inline enum status_code
FUNC_5(void)
{
 const char *VAR_1 = FUNC_3("GIT_PREFIX");
 char VAR_2[4096];

 if (!VAR_1 || !*VAR_1)
  return VAR_0;






 if (!FUNC_2(VAR_2, sizeof(VAR_2)))
  return FUNC_1("Failed to read CWD");
 if (FUNC_4("GIT_WORK_TREE", VAR_2, 1))
  return FUNC_1("Failed to set GIT_WORK_TREE");
 if (FUNC_0(VAR_1))
  return FUNC_1("Failed to change directory to %s", VAR_1);
 if (FUNC_4("GIT_PREFIX", "", 1))
  return FUNC_1("Failed to clear GIT_PREFIX");

 return VAR_0;
}
