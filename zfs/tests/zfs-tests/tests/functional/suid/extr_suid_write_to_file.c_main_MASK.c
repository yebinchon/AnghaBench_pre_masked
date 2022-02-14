
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int) ;

int
FUNC_4(int VAR_3, char *VAR_4[])
{
 const char *VAR_5;
 mode_t VAR_6;

 if (VAR_3 < 2) {
  FUNC_1(VAR_2, "Invalid argc\n");
  FUNC_0(1);
 }

 VAR_5 = VAR_4[1];
 if (FUNC_2(VAR_5, "SUID") == 0) {
  VAR_6 = VAR_1;
 } else if (FUNC_2(VAR_5, "SGID") == 0) {
  VAR_6 = VAR_0;
 } else if (FUNC_2(VAR_5, "SUID_SGID") == 0) {
  VAR_6 = VAR_1 | VAR_0;
 } else if (FUNC_2(VAR_5, "NONE") == 0) {
  VAR_6 = 0;
 } else {
  FUNC_1(VAR_2, "Invalid name %s\n", VAR_5);
  FUNC_0(1);
 }

 FUNC_3(VAR_6);

 return (0);
}
