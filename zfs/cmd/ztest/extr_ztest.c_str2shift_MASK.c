
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 char FUNC_2 (char const) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2)
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
  (void) FUNC_0(VAR_1, "ztest: invalid bytes suffix: %s\n",
      VAR_2);
  FUNC_3(VAR_0);
 }
 if (VAR_2[1] == '\0' || (FUNC_2(VAR_2[1]) == 'B' && VAR_2[2] == '\0')) {
  return (10*VAR_4);
 }
 (void) FUNC_0(VAR_1, "ztest: invalid bytes suffix: %s\n", VAR_2);
 FUNC_3(VAR_0);

}
