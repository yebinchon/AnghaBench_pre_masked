
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char const*,char**) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__,int*,int ) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_5, char *VAR_6[])
{
 pid_t VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_7();
 if (VAR_7 == 0) {
  VAR_9 = FUNC_6("/dev/null", VAR_1);

  if (VAR_9 < 0)
   FUNC_2(-1);

  (void) FUNC_4(VAR_9, VAR_3);
  (void) FUNC_4(VAR_9, VAR_2);
  FUNC_3(VAR_9);

  (void) FUNC_5(VAR_5, VAR_6);
  FUNC_2(-1);
 } else if (VAR_7 > 0) {
  int VAR_10;

  while ((VAR_8 = FUNC_8(VAR_7, &VAR_10, 0)) == -1 &&
      VAR_4 == VAR_0) { }

  if (VAR_8 < 0 || !FUNC_1(VAR_10))
   return (-1);

  return (FUNC_0(VAR_10));
 }

 return (-1);
}
