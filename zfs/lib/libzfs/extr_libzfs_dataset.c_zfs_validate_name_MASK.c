
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*,int*,char*) ;
 int * FUNC_2 (char const*,char) ;
 int FUNC_3 (int *,int ,...) ;

int
FUNC_4(libzfs_handle_t *VAR_3, const char *VAR_4, int VAR_5,
    boolean_t VAR_6)
{
 namecheck_err_t VAR_7;
 char VAR_8;

 if (!(VAR_5 & VAR_2) && FUNC_2(VAR_4, '@') != ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_3(VAR_3, FUNC_0(VAR_0,
       "snapshot delimiter '@' is not expected here"));
  return (0);
 }

 if (VAR_5 == VAR_2 && FUNC_2(VAR_4, '@') == ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_3(VAR_3, FUNC_0(VAR_0,
       "missing '@' delimiter in snapshot name"));
  return (0);
 }

 if (!(VAR_5 & VAR_1) && FUNC_2(VAR_4, '#') != ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_3(VAR_3, FUNC_0(VAR_0,
       "bookmark delimiter '#' is not expected here"));
  return (0);
 }

 if (VAR_5 == VAR_1 && FUNC_2(VAR_4, '#') == ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_3(VAR_3, FUNC_0(VAR_0,
       "missing '#' delimiter in bookmark name"));
  return (0);
 }

 if (VAR_6 && FUNC_2(VAR_4, '%') != ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_3(VAR_3, FUNC_0(VAR_0,
       "invalid character %c in name"), '%');
  return (0);
 }

 if (FUNC_1(VAR_4, &VAR_7, &VAR_8) != 0) {
  if (VAR_3 != ((void*)0)) {
   switch (VAR_7) {
   case 129:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "name is too long"));
    break;

   case 135:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "leading slash in name"));
    break;

   case 137:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "empty component or misplaced '@'"
        " or '#' delimiter in name"));
    break;

   case 128:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "trailing slash in name"));
    break;

   case 136:
    FUNC_3(VAR_3,
        FUNC_0(VAR_0, "invalid character "
        "'%c' in name"), VAR_8);
    break;

   case 134:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "multiple '@' and/or '#' delimiters in "
        "name"));
    break;

   case 133:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "pool doesn't begin with a letter"));
    break;

   case 131:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "name is reserved"));
    break;

   case 138:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "reserved disk name"));
    break;

   case 130:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "self reference, '.' is found in name"));
    break;

   case 132:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "parent reference, '..' is found in name"));
    break;

   default:
    FUNC_3(VAR_3, FUNC_0(VAR_0,
        "(%d) not defined"), VAR_7);
    break;
   }
  }

  return (0);
 }

 return (-1);
}
