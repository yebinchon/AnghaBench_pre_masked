
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;
struct udev {int dummy; } ;
typedef int devid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (struct udev_device*,char*,int) ;
 struct udev_device* FUNC_6 (struct udev*,char*,char*) ;
 int FUNC_7 (struct udev_device*) ;
 struct udev* FUNC_8 () ;
 int FUNC_9 (struct udev*) ;

int
FUNC_10(int VAR_2, char *VAR_3[])
{
 struct udev *VAR_4;
 struct udev_device *VAR_5 = ((void*)0);
 char VAR_6[128], VAR_7[VAR_0];
 char *VAR_8, *VAR_9;
 int VAR_10;

 if (VAR_2 == 1) {
  (void) FUNC_2("%s <devicepath> [search path]\n", VAR_3[0]);
  FUNC_0(1);
 }
 VAR_8 = VAR_3[1];

 if ((VAR_4 = FUNC_8()) == ((void*)0)) {
  FUNC_1("udev_new");
  FUNC_0(1);
 }


 if (FUNC_3(VAR_8, VAR_7) == ((void*)0)) {
  FUNC_1("realpath");
  FUNC_0(1);
 }
 VAR_9 = FUNC_4(VAR_7, '/') + 1;

 if ((VAR_5 = FUNC_6(VAR_4, "block",
     VAR_9)) == ((void*)0)) {
  FUNC_1(VAR_9);
  FUNC_0(1);
 }

 if ((VAR_10 = FUNC_5(VAR_5, VAR_6, sizeof (VAR_6))) != 0) {
  FUNC_7(VAR_5);
  VAR_1 = VAR_10;
  FUNC_1(VAR_9);
  FUNC_0(1);
 }

 (void) FUNC_2("devid %s\n", VAR_6);

 FUNC_7(VAR_5);
 FUNC_9(VAR_4);

 return (0);
}
