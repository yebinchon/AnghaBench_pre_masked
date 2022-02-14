
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum file_size { ____Placeholder_file_size } file_size ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char const*,unsigned long,...) ;

const char *
FUNC_2(unsigned long VAR_1, enum file_size VAR_2)
{
 static char VAR_3[64 + 1];
 static const char VAR_4[] = {
  'B', 'K', 'M', 'G', 'T', 'P'
 };

 if (!VAR_2)
  return "";

 if (VAR_2 == VAR_0) {
  const char *VAR_5 = "%.0f%c";
  double VAR_6 = VAR_1;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
   if (VAR_6 > 1024.0 && VAR_7 + 1 < FUNC_0(VAR_4)) {
    VAR_6 /= 1024;
    continue;
   }

   VAR_1 = VAR_6 * 10;
   if (VAR_1 % 10 > 0)
    VAR_5 = "%.1f%c";

   return FUNC_1(VAR_3, VAR_5, VAR_6, VAR_4[VAR_7])
    ? VAR_3 : ((void*)0);
  }
 }

 return FUNC_1(VAR_3, "%ld", VAR_1) ? VAR_3 : ((void*)0);
}
