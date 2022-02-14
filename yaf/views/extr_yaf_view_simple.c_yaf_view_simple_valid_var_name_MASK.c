
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_0)
  return 0;


 VAR_3 = (int)((unsigned char *)VAR_0)[0];
 if (VAR_0[0] != '_' &&
   (VAR_3 < 65 || VAR_3 > 90) &&
   (VAR_3 < 97 || VAR_3 > 122) &&
   (VAR_3 < 127 || VAR_3 > 255)
    ) {
  return 0;
 }


 if (VAR_1 > 1) {
  for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++) {
   VAR_3 = (int)((unsigned char *)VAR_0)[VAR_2];
   if (VAR_0[VAR_2] != '_' &&
     (VAR_3 < 48 || VAR_3 > 57) &&
     (VAR_3 < 65 || VAR_3 > 90) &&
     (VAR_3 < 97 || VAR_3 > 122) &&
     (VAR_3 < 127 || VAR_3 > 255)
      ) {
    return 0;
   }
  }
 }
 return 1;
}
