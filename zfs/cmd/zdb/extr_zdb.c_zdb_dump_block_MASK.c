
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_longlong_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, void *VAR_2, uint64_t VAR_3, int VAR_4)
{
 uint64_t *VAR_5 = (uint64_t *)VAR_2;
 unsigned VAR_6 = VAR_3 / sizeof (uint64_t);
 int VAR_7 = !!(VAR_4 & VAR_0);
 unsigned VAR_8, VAR_9;
 const char *VAR_10;
 char *VAR_11;


 if (VAR_7)
  VAR_10 = " 7 6 5 4 3 2 1 0   f e d c b a 9 8";
 else
  VAR_10 = " 0 1 2 3 4 5 6 7   8 9 a b c d e f";

 (void) FUNC_2("\n%s\n%6s   %s  0123456789abcdef\n", VAR_1, "", VAR_10);





 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8 += 2) {
  (void) FUNC_2("%06llx:  %016llx  %016llx  ",
      (u_longlong_t)(VAR_8 * sizeof (uint64_t)),
      (u_longlong_t)(VAR_7 ? FUNC_0(VAR_5[VAR_8]) : VAR_5[VAR_8]),
      (u_longlong_t)(VAR_7 ? FUNC_0(VAR_5[VAR_8 + 1]) : VAR_5[VAR_8 + 1]));

  VAR_11 = (char *)&VAR_5[VAR_8];
  for (VAR_9 = 0; VAR_9 < 2 * sizeof (uint64_t); VAR_9++)
   (void) FUNC_2("%c", FUNC_1(VAR_11[VAR_9]) ? VAR_11[VAR_9] : '.');
  (void) FUNC_2("\n");
 }
}
