
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int st_rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,char*,char*,...) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,struct stat64*) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*) ;

int
FUNC_11(int VAR_5, char **VAR_6)
{
 int VAR_7, VAR_8 = 0;
 char VAR_9[VAR_2];
 char *VAR_10 = ((void*)0);
 char *VAR_11;
 struct stat64 VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_5 < 2) {
  FUNC_7("Usage: %s /dev/zvol_device_node\n", VAR_6[0]);
  return (VAR_0);
 }

 VAR_11 = VAR_6[1];
 VAR_8 = FUNC_8(VAR_11, &VAR_12);
 if (VAR_8 != 0) {
  FUNC_7("Unable to access device file: %s\n", VAR_11);
  return (VAR_4);
 }

 VAR_13 = FUNC_5(VAR_12.st_rdev);
 VAR_14 = VAR_13 % VAR_3;

 VAR_7 = FUNC_6(VAR_11, VAR_1);
 if (VAR_7 < 0) {
  FUNC_7("Unable to open device file: %s\n", VAR_11);
  return (VAR_4);
 }

 VAR_8 = FUNC_3(VAR_9, VAR_7);
 if (VAR_8 < 0) {
  FUNC_7("ioctl_get_msg failed:%s\n", FUNC_9(VAR_4));
  return (VAR_4);
 }
 if (VAR_14 > 0)
  VAR_16 = FUNC_0(&VAR_10, "%s-part%d", VAR_9,
      VAR_14);
 else
  VAR_16 = FUNC_0(&VAR_10, "%s", VAR_9);

 if (VAR_16 == -1 || VAR_10 == ((void*)0))
  goto error;

 for (VAR_15 = 0; VAR_15 < FUNC_10(VAR_10); VAR_15++) {
  if (FUNC_4(VAR_10[VAR_15]))
   VAR_10[VAR_15] = '+';
 }

 FUNC_7("%s\n", VAR_10);
 FUNC_2(VAR_10);
error:
 FUNC_1(VAR_7);
 return (VAR_8);
}
