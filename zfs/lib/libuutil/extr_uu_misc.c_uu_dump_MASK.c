
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (unsigned char const) ;

void
FUNC_2(FILE *VAR_0, const char *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 16) {
  int VAR_6;

  (void) FUNC_0(VAR_0, "%s", VAR_1);
  for (VAR_6 = 0; VAR_6 < 16 && VAR_5 + VAR_6 < VAR_3; VAR_6++) {
   (void) FUNC_0(VAR_0, "%2.2x ", VAR_4[VAR_5 + VAR_6]);
  }
  for (; VAR_6 < 16; VAR_6++) {
   (void) FUNC_0(VAR_0, "   ");
  }
  for (VAR_6 = 0; VAR_6 < 16 && VAR_5 + VAR_6 < VAR_3; VAR_6++) {
   (void) FUNC_0(VAR_0, "%c",
       FUNC_1(VAR_4[VAR_5 + VAR_6]) ? VAR_4[VAR_5 + VAR_6] : '.');
  }
  (void) FUNC_0(VAR_0, "\n");
 }
}
