
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int FILE ;
 int VAR_0 ;



 int FUNC_0 (int *,char*,char) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_1, mode_t VAR_2)
{
 char VAR_3;

 switch (VAR_2 & VAR_0) {
 case 136:
  VAR_3 = 'B';
  break;
 case 135:
  VAR_3 = 'C';
  break;
 case 134:
  VAR_3 = '/';
  break;

 case 133:
  VAR_3 = '>';
  break;

 case 132:
  VAR_3 = '|';
  break;
 case 131:
  VAR_3 = '@';
  break;

 case 130:
  VAR_3 = 'P';
  break;

 case 128:
  VAR_3 = '=';
  break;
 case 129:
  VAR_3 = 'F';
  break;
 default:
  VAR_3 = '?';
  break;
 }
 (void) FUNC_0(VAR_1, "%c", VAR_3);
}
