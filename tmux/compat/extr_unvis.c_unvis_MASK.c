
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char) ;

int
FUNC_1(char *VAR_5, char VAR_6, int *VAR_7, int VAR_8)
{

 if (VAR_8 & VAR_0) {
  if (*VAR_7 == 130 || *VAR_7 == 129) {
   *VAR_7 = 133;
   return (VAR_3);
  }
  return (*VAR_7 == 133 ? VAR_1 : VAR_2);
 }

 switch (*VAR_7) {

 case 133:
  *VAR_5 = 0;
  if (VAR_6 == '\\') {
   *VAR_7 = 128;
   return (0);
  }
  *VAR_5 = VAR_6;
  return (VAR_3);

 case 128:
  switch(VAR_6) {
  case '\\':
   *VAR_5 = VAR_6;
   *VAR_7 = 133;
   return (VAR_3);
  case '0': case '1': case '2': case '3':
  case '4': case '5': case '6': case '7':
   *VAR_5 = (VAR_6 - '0');
   *VAR_7 = 130;
   return (0);
  case 'M':
   *VAR_5 = (char) 0200;
   *VAR_7 = 132;
   return (0);
  case '^':
   *VAR_7 = 134;
   return (0);
  case 'n':
   *VAR_5 = '\n';
   *VAR_7 = 133;
   return (VAR_3);
  case 'r':
   *VAR_5 = '\r';
   *VAR_7 = 133;
   return (VAR_3);
  case 'b':
   *VAR_5 = '\b';
   *VAR_7 = 133;
   return (VAR_3);
  case 'a':
   *VAR_5 = '\007';
   *VAR_7 = 133;
   return (VAR_3);
  case 'v':
   *VAR_5 = '\v';
   *VAR_7 = 133;
   return (VAR_3);
  case 't':
   *VAR_5 = '\t';
   *VAR_7 = 133;
   return (VAR_3);
  case 'f':
   *VAR_5 = '\f';
   *VAR_7 = 133;
   return (VAR_3);
  case 's':
   *VAR_5 = ' ';
   *VAR_7 = 133;
   return (VAR_3);
  case 'E':
   *VAR_5 = '\033';
   *VAR_7 = 133;
   return (VAR_3);
  case '\n':



   *VAR_7 = 133;
   return (VAR_1);
  case '$':



   *VAR_7 = 133;
   return (VAR_1);
  }
  *VAR_7 = 133;
  return (VAR_2);

 case 132:
  if (VAR_6 == '-')
   *VAR_7 = 131;
  else if (VAR_6 == '^')
   *VAR_7 = 134;
  else {
   *VAR_7 = 133;
   return (VAR_2);
  }
  return (0);

 case 131:
  *VAR_7 = 133;
  *VAR_5 |= VAR_6;
  return (VAR_3);

 case 134:
  if (VAR_6 == '?')
   *VAR_5 |= 0177;
  else
   *VAR_5 |= VAR_6 & 037;
  *VAR_7 = 133;
  return (VAR_3);

 case 130:
  if (FUNC_0(VAR_6)) {



   *VAR_5 = (*VAR_5 << 3) + (VAR_6 - '0');
   *VAR_7 = 129;
   return (0);
  }



  *VAR_7 = 133;
  return (VAR_4);

 case 129:
  *VAR_7 = 133;
  if (FUNC_0(VAR_6)) {
   *VAR_5 = (*VAR_5 << 3) + (VAR_6 - '0');
   return (VAR_3);
  }



  return (VAR_4);

 default:



  *VAR_7 = 133;
  return (VAR_2);
 }
}
