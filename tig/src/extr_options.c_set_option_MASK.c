
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (int,char const**) ;
 int FUNC_4 (int,char const**) ;
 int FUNC_5 (char const*,char*) ;

enum status_code
FUNC_6(const char *VAR_0, int VAR_1, const char *VAR_2[])
{
 if (!FUNC_5(VAR_0, "color"))
  return FUNC_2(VAR_1, VAR_2);

 if (!FUNC_5(VAR_0, "set"))
  return FUNC_3(VAR_1, VAR_2);

 if (!FUNC_5(VAR_0, "bind"))
  return FUNC_1(VAR_1, VAR_2);

 if (!FUNC_5(VAR_0, "source"))
  return FUNC_4(VAR_1, VAR_2);

 return FUNC_0("Unknown option command: %s", VAR_0);
}
