
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {scalar_t__ prompt_mode; int flags; } ;
typedef int key_code ;


 int VAR_0 ;




 char VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct client *VAR_4, key_code VAR_5, key_code *VAR_6)
{
 if (VAR_4->prompt_mode == VAR_3) {
  switch (VAR_5) {
  case '\003':
  case '\010':
  case '\011':
  case '\025':
  case '\027':
  case '\n':
  case '\r':
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   *VAR_6 = VAR_5;
   return (1);
  case '\033':
   VAR_4->prompt_mode = VAR_2;
   VAR_4->flags |= VAR_0;
   return (0);
  }
  *VAR_6 = VAR_5;
  return (2);
 }

 switch (VAR_5) {
 case 'A':
 case 'I':
 case 'C':
 case 's':
 case 'a':
  VAR_4->prompt_mode = VAR_3;
  VAR_4->flags |= VAR_0;
  break;
 case 'S':
  VAR_4->prompt_mode = VAR_3;
  VAR_4->flags |= VAR_0;
  *VAR_6 = '\025';
  return (1);
 case 'i':
 case '\033':
  VAR_4->prompt_mode = VAR_3;
  VAR_4->flags |= VAR_0;
  return (0);
 }

 switch (VAR_5) {
 case 'A':
 case '$':
  *VAR_6 = 132;
  return (1);
 case 'I':
 case '0':
 case '^':
  *VAR_6 = 131;
  return (1);
 case 'C':
 case 'D':
  *VAR_6 = '\013';
  return (1);
 case 135:
 case 'X':
  *VAR_6 = 135;
  return (1);
 case 'b':
 case 'B':
  *VAR_6 = 'b'|VAR_1;
  return (1);
 case 'd':
  *VAR_6 = '\025';
  return (1);
 case 'e':
 case 'E':
 case 'w':
 case 'W':
  *VAR_6 = 'f'|VAR_1;
  return (1);
 case 'p':
  *VAR_6 = '\031';
  return (1);
 case 's':
 case 134:
 case 'x':
  *VAR_6 = 134;
  return (1);
 case 133:
 case 'j':
  *VAR_6 = 133;
  return (1);
 case 130:
 case 'h':
  *VAR_6 = 130;
  return (1);
 case 'a':
 case 129:
 case 'l':
  *VAR_6 = 129;
  return (1);
 case 128:
 case 'k':
  *VAR_6 = 128;
  return (1);
 case '\010' :
 case '\003' :
 case '\n':
 case '\r':
  return (1);
 }
 return (0);
}
