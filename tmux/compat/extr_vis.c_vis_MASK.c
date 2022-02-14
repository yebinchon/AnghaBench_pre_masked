
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;

char *
FUNC_3(char *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 if (FUNC_2(VAR_6, VAR_7)) {
  if ((VAR_6 == '"' && (VAR_7 & VAR_1) != 0) ||
      (VAR_6 == '\\' && (VAR_7 & VAR_3) == 0))
   *VAR_5++ = '\\';
  *VAR_5++ = VAR_6;
  *VAR_5 = '\0';
  return (VAR_5);
 }

 if (VAR_7 & VAR_0) {
  switch(VAR_6) {
  case '\n':
   *VAR_5++ = '\\';
   *VAR_5++ = 'n';
   goto done;
  case '\r':
   *VAR_5++ = '\\';
   *VAR_5++ = 'r';
   goto done;
  case '\b':
   *VAR_5++ = '\\';
   *VAR_5++ = 'b';
   goto done;
  case '\a':
   *VAR_5++ = '\\';
   *VAR_5++ = 'a';
   goto done;
  case '\v':
   *VAR_5++ = '\\';
   *VAR_5++ = 'v';
   goto done;
  case '\t':
   *VAR_5++ = '\\';
   *VAR_5++ = 't';
   goto done;
  case '\f':
   *VAR_5++ = '\\';
   *VAR_5++ = 'f';
   goto done;
  case ' ':
   *VAR_5++ = '\\';
   *VAR_5++ = 's';
   goto done;
  case '\0':
   *VAR_5++ = '\\';
   *VAR_5++ = '0';
   if (FUNC_1(VAR_8)) {
    *VAR_5++ = '0';
    *VAR_5++ = '0';
   }
   goto done;
  }
 }
 if (((VAR_6 & 0177) == ' ') || (VAR_7 & VAR_4) ||
     ((VAR_7 & VAR_2) && (VAR_6 == '*' || VAR_6 == '?' || VAR_6 == '[' || VAR_6 == '#'))) {
  *VAR_5++ = '\\';
  *VAR_5++ = ((u_char)VAR_6 >> 6 & 07) + '0';
  *VAR_5++ = ((u_char)VAR_6 >> 3 & 07) + '0';
  *VAR_5++ = ((u_char)VAR_6 & 07) + '0';
  goto done;
 }
 if ((VAR_7 & VAR_3) == 0)
  *VAR_5++ = '\\';
 if (VAR_6 & 0200) {
  VAR_6 &= 0177;
  *VAR_5++ = 'M';
 }
 if (FUNC_0((u_char)VAR_6)) {
  *VAR_5++ = '^';
  if (VAR_6 == 0177)
   *VAR_5++ = '?';
  else
   *VAR_5++ = VAR_6 + '@';
 } else {
  *VAR_5++ = '-';
  *VAR_5++ = VAR_6;
 }
done:
 *VAR_5 = '\0';
 return (VAR_5);
}
