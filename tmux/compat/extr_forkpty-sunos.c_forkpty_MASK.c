
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char winsize ;
struct termios {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int ,char*) ;
 int FUNC_6 (char*,int) ;
 char* FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (int,int ,struct termios*) ;
 scalar_t__ FUNC_11 (int) ;

pid_t
FUNC_12(int *VAR_7, char *VAR_8, struct termios *VAR_9, struct winsize *VAR_10)
{
 int VAR_11 = -1;
 char *VAR_12;
 pid_t VAR_13;

 if ((*VAR_7 = FUNC_6("/dev/ptmx", VAR_2|VAR_1)) == -1)
  return (-1);
 if (FUNC_4(*VAR_7) != 0)
  goto out;
 if (FUNC_11(*VAR_7) != 0)
  goto out;

 if ((VAR_12 = FUNC_7(*VAR_7)) == ((void*)0))
  goto out;
 if (VAR_8 != ((void*)0))
  FUNC_9(VAR_8, VAR_12, VAR_6);
 if ((VAR_11 = FUNC_6(VAR_12, VAR_2|VAR_1)) == -1)
  goto out;

 switch (VAR_13 = FUNC_3()) {
 case -1:
  goto out;
 case 0:
  FUNC_0(*VAR_7);

  FUNC_8();





  if (FUNC_5(VAR_11, VAR_0, "ptem") == -1)
   FUNC_2("ioctl failed");
  if (FUNC_5(VAR_11, VAR_0, "ldterm") == -1)
   FUNC_2("ioctl failed");

  if (VAR_9 != ((void*)0) && FUNC_10(VAR_11, VAR_3, VAR_9) == -1)
   FUNC_2("tcsetattr failed");
  if (FUNC_5(VAR_11, VAR_5, VAR_10) == -1)
   FUNC_2("ioctl failed");

  FUNC_1(VAR_11, 0);
  FUNC_1(VAR_11, 1);
  FUNC_1(VAR_11, 2);
  if (VAR_11 > 2)
   FUNC_0(VAR_11);
  return (0);
 }

 FUNC_0(VAR_11);
 return (VAR_13);

out:
 if (*VAR_7 != -1)
  FUNC_0(*VAR_7);
 if (VAR_11 != -1)
  FUNC_0(VAR_11);
 return (-1);
}
