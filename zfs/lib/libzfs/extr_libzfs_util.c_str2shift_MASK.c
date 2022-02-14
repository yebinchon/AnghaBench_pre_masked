
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libzfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*) ;
 char FUNC_2 (char const) ;
 int FUNC_3 (int *,int ,char const*) ;

__attribute__((used)) static int
FUNC_4(libzfs_handle_t *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = "BKMGTPEZ";
 int VAR_4;

 if (VAR_2[0] == '\0')
  return (0);
 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3); VAR_4++) {
  if (FUNC_2(VAR_2[0]) == VAR_3[VAR_4])
   break;
 }
 if (VAR_4 == FUNC_1(VAR_3)) {
  if (VAR_1)
   FUNC_3(VAR_1, FUNC_0(VAR_0,
       "invalid numeric suffix '%s'"), VAR_2);
  return (-1);
 }





 if (VAR_2[1] == '\0' ||
     (FUNC_2(VAR_2[0]) != 'B' &&
     ((FUNC_2(VAR_2[1]) == 'B' && VAR_2[2] == '\0') ||
     (FUNC_2(VAR_2[1]) == 'I' && FUNC_2(VAR_2[2]) == 'B' &&
     VAR_2[3] == '\0'))))
  return (10 * VAR_4);

 if (VAR_1)
  FUNC_3(VAR_1, FUNC_0(VAR_0,
      "invalid numeric suffix '%s'"), VAR_2);
 return (-1);
}
