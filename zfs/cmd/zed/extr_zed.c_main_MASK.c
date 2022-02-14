
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct zed_conf {int do_foreground; int do_force; scalar_t__ do_memlock; scalar_t__ do_verbose; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 struct zed_conf* FUNC_9 () ;
 int FUNC_10 (struct zed_conf*) ;
 scalar_t__ FUNC_11 (struct zed_conf*) ;
 int FUNC_12 (struct zed_conf*) ;
 int FUNC_13 (struct zed_conf*,int,char**) ;
 scalar_t__ FUNC_14 (struct zed_conf*,int *,int *) ;
 scalar_t__ FUNC_15 (struct zed_conf*) ;
 scalar_t__ FUNC_16 (struct zed_conf*) ;
 int FUNC_17 (struct zed_conf*) ;
 int FUNC_18 (struct zed_conf*) ;
 int FUNC_19 (struct zed_conf*,int ,int *) ;
 int FUNC_20 (struct zed_conf*) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (char*) ;
 int FUNC_23 () ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int ,char*,...) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;

int
FUNC_28(int VAR_10, char *VAR_11[])
{
 struct zed_conf *VAR_12;
 uint64_t VAR_13;
 int64_t VAR_14[2];

 FUNC_24(VAR_11[0]);
 FUNC_26(VAR_4);
 VAR_12 = FUNC_9();
 FUNC_13(VAR_12, VAR_10, VAR_11);
 if (VAR_12->do_verbose)
  FUNC_26(VAR_3);

 if (FUNC_6() != 0)
  FUNC_22("Must be run as root");

 FUNC_12(VAR_12);

 FUNC_21(VAR_5 + 1);

 (void) FUNC_8(0);

 if (FUNC_4("/") < 0)
  FUNC_22("Failed to change to root directory");

 if (FUNC_15(VAR_12) < 0)
  FUNC_5(VAR_0);

 if (!VAR_12->do_foreground) {
  FUNC_3();
  FUNC_27(VAR_2);
 }
 FUNC_2();

 if (VAR_12->do_memlock)
  FUNC_1();

 if ((FUNC_16(VAR_12) < 0) && (!VAR_12->do_force))
  FUNC_5(VAR_0);

 if (!VAR_12->do_foreground)
  FUNC_0();

 FUNC_25(VAR_4,
     "ZFS Event Daemon %s-%s (PID %d)",
     VAR_7, VAR_6, (int)FUNC_7());

 if (FUNC_11(VAR_12) < 0)
  FUNC_5(VAR_0);

 if (FUNC_14(VAR_12, &VAR_13, VAR_14) < 0)
  FUNC_5(VAR_0);

 FUNC_18(VAR_12);
 FUNC_19(VAR_12, VAR_13, VAR_14);

 while (!VAR_8) {
  if (VAR_9) {
   VAR_9 = 0;
   (void) FUNC_15(VAR_12);
  }
  FUNC_20(VAR_12);
 }
 FUNC_25(VAR_4, "Exiting");
 FUNC_17(VAR_12);
 FUNC_10(VAR_12);
 FUNC_23();
 FUNC_5(VAR_1);
}
