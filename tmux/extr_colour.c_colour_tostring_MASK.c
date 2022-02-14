
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int *,int *) ;
 int FUNC_1 (char*,int,char*,int,...) ;

const char *
FUNC_2(int VAR_2)
{
 static char VAR_3[32];
 u_char VAR_4, VAR_5, VAR_6;

 if (VAR_2 & VAR_1) {
  FUNC_0(VAR_2, &VAR_4, &VAR_5, &VAR_6);
  FUNC_1(VAR_3, sizeof VAR_3, "#%02x%02x%02x", VAR_4, VAR_5, VAR_6);
  return (VAR_3);
 }

 if (VAR_2 & VAR_0) {
  FUNC_1(VAR_3, sizeof VAR_3, "colour%u", VAR_2 & 0xff);
  return (VAR_3);
 }

 switch (VAR_2) {
 case 0:
  return ("black");
 case 1:
  return ("red");
 case 2:
  return ("green");
 case 3:
  return ("yellow");
 case 4:
  return ("blue");
 case 5:
  return ("magenta");
 case 6:
  return ("cyan");
 case 7:
  return ("white");
 case 8:
  return ("default");
 case 9:
  return ("terminal");
 case 90:
  return ("brightblack");
 case 91:
  return ("brightred");
 case 92:
  return ("brightgreen");
 case 93:
  return ("brightyellow");
 case 94:
  return ("brightblue");
 case 95:
  return ("brightmagenta");
 case 96:
  return ("brightcyan");
 case 97:
  return ("brightwhite");
 }
 return ("invalid");
}
