
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;

int
FUNC_3(void)
{
 u_int VAR_1[4];
 u_int VAR_2[4];

 FUNC_0(0, VAR_1);
 VAR_2[0] = VAR_1[1];
 VAR_2[1] = VAR_1[3];
 VAR_2[2] = VAR_1[2];
 VAR_2[3] = 0;

 if (FUNC_2(((char *) VAR_2), "GenuineIntel") == 0) {
  return 0;
 } else {
  FUNC_1(VAR_0, "Unknown cpu vendor \"%s\"\n", ((char *) VAR_2));
  return (-1);
 }
}
