
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int snapshot ;
typedef int snapbase ;
typedef int nvlist_t ;
typedef int dataset ;
typedef int clonesnap ;
typedef int clone ;
typedef int bookmark ;
typedef int backup ;


 int FUNC_0 (size_t*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 size_t* VAR_8 ;
 scalar_t__* VAR_9 ;
 scalar_t__ FUNC_6 (int ,unsigned int,TYPE_1__*) ;
 int FUNC_7 (char*,int ,int *,int *,int ) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char const*) ;
 int VAR_10 ;
 char* FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,char const*,int) ;
 int FUNC_14 (char const*,char*,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char const*,char*) ;
 int FUNC_20 (char const*,char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (char const*,char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char const*) ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (char const*) ;
 int FUNC_29 (char const*) ;
 int FUNC_30 (char const*) ;
 int FUNC_31 (char*,int) ;
 int FUNC_32 (char*,char*) ;
 int FUNC_33 (char const*,char*) ;
 int FUNC_34 (char*) ;
 int FUNC_35 (char*,char*) ;
 int FUNC_36 (char*,int) ;
 int FUNC_37 (char*,char*) ;
 int FUNC_38 (char const*,char*) ;
 int FUNC_39 (char*) ;
 int FUNC_40 (char*) ;
 int FUNC_41 (char const*) ;
 int FUNC_42 (char const*) ;
 int FUNC_43 (char const*) ;
 int FUNC_44 (char*) ;
 int FUNC_45 (char*) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_46(const char *VAR_12)
{
 char VAR_13[] = "/tmp/ioc_test_file_XXXXXX";
 char VAR_14[VAR_6];
 char VAR_15[VAR_6 + 32];
 char VAR_16[VAR_6 + 32];
 char VAR_17[VAR_6 + 32];
 char VAR_18[VAR_6];
 char VAR_19[VAR_6];
 char VAR_20[VAR_6 + 32];
 int VAR_21, VAR_22;




 (void) FUNC_11(VAR_14, sizeof (VAR_14), "%s/test-fs", VAR_12);
 (void) FUNC_11(VAR_15, sizeof (VAR_15), "%s@snapbase", VAR_14);
 (void) FUNC_11(VAR_16, sizeof (VAR_16), "%s@snapshot", VAR_14);
 (void) FUNC_11(VAR_17, sizeof (VAR_17), "%s#bookmark", VAR_14);
 (void) FUNC_11(VAR_19, sizeof (VAR_19), "%s/test-fs-clone", VAR_12);
 (void) FUNC_11(VAR_20, sizeof (VAR_20), "%s@snap", VAR_19);
 (void) FUNC_11(VAR_18, sizeof (VAR_18), "%s/backup", VAR_12);

 VAR_22 = FUNC_7(VAR_14, VAR_2, ((void*)0), ((void*)0), 0);
 if (VAR_22) {
  (void) FUNC_5(VAR_10, "could not create '%s': %s\n",
      VAR_14, FUNC_12(VAR_7));
  FUNC_2(2);
 }

 VAR_21 = FUNC_9(VAR_13);
 if (VAR_21 < 0) {
  (void) FUNC_5(VAR_10, "could not create '%s': %s\n",
      VAR_13, FUNC_12(VAR_7));
  FUNC_2(2);
 }





 FUNC_30(VAR_12);
 FUNC_29(VAR_12);
 FUNC_27(VAR_12);
 FUNC_28(VAR_12);
 FUNC_26(VAR_12);

 FUNC_18(VAR_14);
 FUNC_38(VAR_12, VAR_15);
 FUNC_38(VAR_12, VAR_16);

 FUNC_39(VAR_16);
 FUNC_37(VAR_15, VAR_16);
 FUNC_36(VAR_16, VAR_21);
 FUNC_31(VAR_18, VAR_21);

 FUNC_14(VAR_12, VAR_16, VAR_17);
 FUNC_22(VAR_14);
 FUNC_21(VAR_17);
 FUNC_19(VAR_12, VAR_17);

 FUNC_24(VAR_12, VAR_16);
 FUNC_23(VAR_16);
 FUNC_33(VAR_12, VAR_16);

 FUNC_17(VAR_16, VAR_19);
 FUNC_38(VAR_12, VAR_20);
 FUNC_32(VAR_16, VAR_20);
 FUNC_45(VAR_20);
 FUNC_45(VAR_19);

 FUNC_35(VAR_14, VAR_16);
 FUNC_20(VAR_12, VAR_16);
 FUNC_20(VAR_12, VAR_15);

 FUNC_34(VAR_14);
 FUNC_16(VAR_12);

 FUNC_25(VAR_14);
 FUNC_15(VAR_14);
 FUNC_40(VAR_14);

 FUNC_41(VAR_12);
 FUNC_42(VAR_12);

 FUNC_43(VAR_12);




 zfs_cmd_t VAR_23 = {"\0"};

 nvlist_t *VAR_24 = FUNC_4();
 FUNC_3(VAR_24, VAR_16);
 (void) FUNC_8(VAR_24, VAR_0, ((void*)0));
 FUNC_10(VAR_24);

 (void) FUNC_45(VAR_14);
 (void) FUNC_45(VAR_18);

 (void) FUNC_1(VAR_21);
 (void) FUNC_44(VAR_13);




 for (int VAR_25 = 0; VAR_25 < FUNC_0(VAR_8); VAR_25++) {
  if (VAR_9[VAR_8[VAR_25] - VAR_4])
   (void) FUNC_5(VAR_10, "cmd %d tested, not skipped!\n",
       (int)(VAR_8[VAR_25] - VAR_4));

  VAR_9[VAR_8[VAR_25] - VAR_4] = VAR_1;
 }

 (void) FUNC_13(VAR_23.zc_name, VAR_12, sizeof (VAR_23.zc_name));
 VAR_23.zc_name[sizeof (VAR_23.zc_name) - 1] = '\0';

 for (unsigned VAR_26 = VAR_4; VAR_26 < VAR_5; VAR_26++) {
  unsigned VAR_27 = VAR_26 - VAR_4;

  if (VAR_9[VAR_27])
   continue;

  if (FUNC_6(VAR_11, VAR_26, &VAR_23) != 0 &&
      VAR_7 != VAR_3) {
   (void) FUNC_5(VAR_10, "cmd %d is missing a test case "
       "(%ld)\n", VAR_27, VAR_7);
  }
 }
}
