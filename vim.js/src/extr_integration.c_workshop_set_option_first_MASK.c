
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Boolean ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;

void FUNC_6(char *VAR_1, char *VAR_2)
{



 Boolean VAR_3 = !FUNC_1(VAR_2, "on");

 if (!FUNC_1(VAR_1, "workshopkeys")) {
  FUNC_4(VAR_3);
 } else if (!FUNC_1(VAR_1, "savefiles")) {
  VAR_0 = VAR_3;
 } else if (!FUNC_1(VAR_1, "balloon")) {
  FUNC_3(VAR_3);
 } else if (!FUNC_1(VAR_1, "balloondelay")) {
  int VAR_4 = FUNC_0(VAR_2);

  FUNC_2(VAR_4);
 } else {

  FUNC_5(VAR_1, VAR_2);
 }
}
