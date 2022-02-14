
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_3 ;
 char* FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 () ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (char const*) ;

int
FUNC_9(int VAR_6, const char *VAR_7[])
{
 if (VAR_6 != 2) {
  (void) FUNC_2(VAR_3, "usage: %s <pool>\n", VAR_7[0]);
  FUNC_1(2);
 }

 if (!FUNC_7()) {
  (void) FUNC_2(VAR_3, "WARNING: zfs_ioc_t has binary "
      "incompatible command values\n");
  FUNC_1(3);
 }

 (void) FUNC_4();
 VAR_5 = FUNC_5(VAR_1, VAR_0);
 if (VAR_5 < 0) {
  (void) FUNC_2(VAR_3, "open: %s\n", FUNC_6(VAR_2));
  FUNC_3();
  FUNC_1(2);
 }

 FUNC_8(VAR_7[1]);

 (void) FUNC_0(VAR_5);
 FUNC_3();

 return (VAR_4);
}
