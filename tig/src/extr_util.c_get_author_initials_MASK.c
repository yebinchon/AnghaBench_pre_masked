
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int initials ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (char const*,char) ;
 unsigned char FUNC_3 (char const*) ;

__attribute__((used)) static const char *
FUNC_4(const char *VAR_0)
{
 static char VAR_1[256];
 size_t VAR_2 = 0;
 const char *VAR_3 = FUNC_2(VAR_0, '\0');



 FUNC_1(VAR_1, 0, sizeof(VAR_1));
 while (VAR_0 < VAR_3) {
  unsigned char VAR_4;
  size_t VAR_5;

  while (VAR_0 < VAR_3 && (isspace(*VAR_0) || ispunct(*VAR_0) || (*VAR_0) == '@' || (*VAR_0) == '-'))
   VAR_0++;

  VAR_4 = FUNC_3(VAR_0);
  if (VAR_4 >= sizeof(VAR_1) - 1 - VAR_2)
   break;
  while (VAR_4--) {
   VAR_1[VAR_2++] = *VAR_0++;
  }

  VAR_5 = VAR_2;
  while (VAR_0 < VAR_3 && !(FUNC_0(*VAR_0) || FUNC_0(*VAR_0) || (*VAR_0) == '@' || (*VAR_0) == '-')) {
   VAR_4 = FUNC_3(VAR_0);
   if (VAR_4 >= sizeof(VAR_1) - 1 - VAR_5) {
    while (VAR_0 < VAR_3 && !(FUNC_0(*VAR_0) || FUNC_0(*VAR_0) || (*VAR_0) == '@' || (*VAR_0) == '-'))
     VAR_0++;
    break;
   }
   while (VAR_4--) {
    VAR_1[VAR_5++] = *VAR_0++;
   }
  }

  VAR_1[VAR_5++] = 0;
 }

 return VAR_1;
}
