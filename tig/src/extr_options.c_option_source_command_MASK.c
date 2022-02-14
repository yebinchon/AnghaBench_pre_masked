
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static enum status_code
FUNC_3(int VAR_1, const char *VAR_2[])
{
 enum status_code VAR_3;
 bool VAR_4 = 0;

 if ((VAR_1 < 1) || (VAR_1 > 2))
  return FUNC_0("Invalid source command: source [-q] <path>");

 if (VAR_1 == 2) {
  if (!FUNC_2(VAR_2[0], "-q"))
   VAR_4 = 1;
  else
   return FUNC_0("Invalid source option: %s", VAR_2[0]);
 }

 VAR_3 = FUNC_1(VAR_2[VAR_1 - 1]);

 if (VAR_4)
  return VAR_3 == VAR_0 ? 0 : VAR_3;

 return VAR_3 == VAR_0
  ? FUNC_0("File does not exist: %s", VAR_2[VAR_1 - 1]) : VAR_3;
}
