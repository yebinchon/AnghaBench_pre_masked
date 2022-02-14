
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,char*,char*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*) ;
 int VAR_8 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,int*,int ) ;

__attribute__((used)) static int
FUNC_11(void)
{
 pid_t VAR_9;
 int VAR_10, VAR_11;
 static char VAR_12[] = "/tmp/exportfs.XXXXXX";





 if (VAR_8 >= 0)
  FUNC_2(VAR_8);

 VAR_8 = FUNC_8(VAR_12);

 if (VAR_8 < 0)
  return (VAR_5);

 FUNC_9(VAR_12);

 (void) FUNC_6(VAR_8, VAR_2, VAR_1);

 VAR_9 = FUNC_7();

 if (VAR_9 < 0) {
  (void) FUNC_2(VAR_8);
  VAR_8 = -1;
  return (VAR_5);
 }

 if (VAR_9 > 0) {
  while ((VAR_10 = FUNC_10(VAR_9, &VAR_11, 0)) <= 0 &&
      VAR_7 == VAR_0) { }

  if (VAR_10 <= 0) {
   (void) FUNC_2(VAR_8);
   VAR_8 = -1;
   return (VAR_5);
  }

  if (!FUNC_1(VAR_11) || FUNC_0(VAR_11) != 0) {
   (void) FUNC_2(VAR_8);
   VAR_8 = -1;
   return (VAR_3);
  }

  return (VAR_4);
 }





 if (FUNC_3(VAR_8, VAR_6) < 0)
  FUNC_5(1);

 VAR_10 = FUNC_4("/usr/sbin/exportfs", "exportfs", "-v", ((void*)0));

 if (VAR_10 < 0) {
  FUNC_5(1);
 }

 FUNC_5(0);
}
