
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,int*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (int *,int ,...) ;

boolean_t
FUNC_5(libzfs_handle_t *VAR_3, boolean_t VAR_4, const char *VAR_5)
{
 namecheck_err_t VAR_6;
 char VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, &VAR_6, &VAR_7);







 if (VAR_8 == 0 && !VAR_4 &&
     (FUNC_3(VAR_5, "mirror", 6) == 0 ||
     FUNC_3(VAR_5, "raidz", 5) == 0 ||
     FUNC_3(VAR_5, "spare", 5) == 0 ||
     FUNC_2(VAR_5, "log") == 0)) {
  if (VAR_3 != ((void*)0))
   FUNC_4(VAR_3,
       FUNC_0(VAR_2, "name is reserved"));
  return (VAR_0);
 }


 if (VAR_8 != 0) {
  if (VAR_3 != ((void*)0)) {
   switch (VAR_6) {
   case 129:
    FUNC_4(VAR_3,
        FUNC_0(VAR_2, "name is too long"));
    break;

   case 135:
    FUNC_4(VAR_3,
        FUNC_0(VAR_2, "invalid character "
        "'%c' in pool name"), VAR_7);
    break;

   case 132:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "name must begin with a letter"));
    break;

   case 130:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "name is reserved"));
    break;

   case 137:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "pool name is reserved"));
    break;

   case 134:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "leading slash in name"));
    break;

   case 136:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "empty component in name"));
    break;

   case 128:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "trailing slash in name"));
    break;

   case 133:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "multiple '@' and/or '#' delimiters in "
        "name"));
    break;

   case 131:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "permission set is missing '@'"));
    break;

   default:
    FUNC_4(VAR_3, FUNC_0(VAR_2,
        "(%d) not defined"), VAR_6);
    break;
   }
  }
  return (VAR_0);
 }

 return (VAR_1);
}
