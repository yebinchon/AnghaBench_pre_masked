
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum status_code
FUNC_2(bool *VAR_1, const char *VAR_2)
{
 *VAR_1 = (!FUNC_1(VAR_2, "1") || !FUNC_1(VAR_2, "true") || !FUNC_1(VAR_2, "yes"))
  ? 1 : 0;
 if (*VAR_1 || !FUNC_1(VAR_2, "0") || !FUNC_1(VAR_2, "false") || !FUNC_1(VAR_2, "no"))
  return VAR_0;
 return FUNC_0("Non-boolean value treated as false: %s", VAR_2);
}
