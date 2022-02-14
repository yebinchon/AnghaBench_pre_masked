
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {char* sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*,size_t) ;

int
FUNC_7(int VAR_3, char *VAR_4[])
{
 struct sockaddr_un VAR_5;
 int VAR_6;
 char *VAR_7;
 size_t VAR_8;
 if (VAR_3 != 2) {
  FUNC_3(VAR_2, "usage: %s /path/to/socket\n", VAR_4[0]);
  FUNC_2(1);
 }
 VAR_7 = VAR_4[1];
 VAR_8 = sizeof (VAR_5.sun_path);
 FUNC_6(VAR_5.sun_path, (char *)VAR_7, VAR_8 - 1);
 VAR_5.sun_path[VAR_8 - 1] = '\0';

 VAR_5.sun_family = VAR_0;
 if ((VAR_6 = FUNC_5(VAR_0, VAR_1, 0)) == -1) {
  FUNC_4("socket");
  return (1);
 }
 if (FUNC_0(VAR_6, (struct sockaddr *)&VAR_5, sizeof (struct sockaddr_un))) {
  FUNC_4("bind");
  return (1);
 }
 if (FUNC_1(VAR_6)) {
  FUNC_4("close");
  return (1);
 }
 return (0);
}
