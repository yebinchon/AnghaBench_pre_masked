
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ hrtime_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ,int ) ;
 long VAR_3 ;
 int FUNC_1 (long,int) ;
 long FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char**,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int ) ;
 long FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_7)
{
 char *VAR_8[4] = {"/sbin/modprobe", "-q", (char *)VAR_7, (char *)0};
 char *VAR_9, *VAR_10;
 long VAR_11 = 10;
 long VAR_12 = 10;
 int VAR_13 = 0, VAR_14;
 hrtime_t VAR_15;


 if (!FUNC_6(VAR_7)) {
  VAR_9 = FUNC_4("ZFS_MODULE_LOADING");
  if (VAR_9) {
   if (!FUNC_11(VAR_9, "YES", FUNC_10("YES")) ||
       !FUNC_11(VAR_9, "ON", FUNC_10("ON")))
    VAR_13 = 1;
   else
    VAR_13 = 0;
  }

  if (VAR_13) {
   if (FUNC_7("/sbin/modprobe", VAR_8, 0))
    return (VAR_1);
  }

  if (!FUNC_6(VAR_7))
   return (VAR_2);
 }
 VAR_10 = FUNC_4("ZFS_MODULE_TIMEOUT");
 if (VAR_10) {
  VAR_11 = FUNC_12(VAR_10, ((void*)0), 0);
  VAR_11 = FUNC_0(FUNC_1(VAR_11, (10 * 60)), 0);
 }

 VAR_15 = FUNC_5();
 do {
  VAR_14 = FUNC_8(VAR_5, VAR_4);
  if (VAR_14 >= 0) {
   (void) FUNC_3(VAR_14);
   return (0);
  } else if (VAR_6 != VAR_0) {
   return (VAR_6);
  } else if (FUNC_2(FUNC_5() - VAR_15) < VAR_12) {
   FUNC_9();
  } else {
   FUNC_13(10 * VAR_3);
  }
 } while (FUNC_2(FUNC_5() - VAR_15) < (VAR_11 * VAR_3));

 return (VAR_0);
}
