
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
typedef scalar_t__ offset_t ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,scalar_t__,int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,struct sigaction*,int *) ;
 int FUNC_7 (int *) ;
 int VAR_13 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*,int) ;

int
FUNC_12(int VAR_14, char **VAR_15)
{
 int VAR_16 = 0;
 offset_t VAR_17 = (VAR_2 - 1);
 offset_t VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 char VAR_21[5] = "aaaa\0";
 char *VAR_22;
 mode_t VAR_23 = VAR_10 | VAR_11 | VAR_8 | VAR_9;
 struct sigaction VAR_24;

 if (VAR_14 != 2) {
  FUNC_10(VAR_15[0]);
 }

 if (FUNC_7(&VAR_24.sa_mask) == -1)
  return (VAR_12);
 VAR_24.sa_flags = 0;
 VAR_24.sa_handler = VAR_13;
 if (FUNC_6(VAR_7, &VAR_24, ((void*)0)) == -1)
  return (VAR_12);

 VAR_22 = FUNC_8(VAR_15[1]);

 VAR_16 = FUNC_3(VAR_22, VAR_3 | VAR_4, VAR_23);
 if (VAR_16 < 0) {
  VAR_20 = VAR_12;
  FUNC_4("Failed to create testfile");
  FUNC_1(VAR_22);
  return (VAR_20);
 }

 VAR_18 = FUNC_2(VAR_16, VAR_17, VAR_6);
 if (VAR_18 < 0) {
  VAR_20 = VAR_12;
  FUNC_4("Failed to seek to end of testfile");
  goto out;
 }

 VAR_19 = FUNC_11(VAR_16, VAR_21, 1);
 if (VAR_19 < 0) {
  VAR_20 = VAR_12;
  FUNC_4("Failed to write to end of file");
  goto out;
 }

 VAR_17 = 0;
 VAR_18 = FUNC_2(VAR_16, VAR_17, VAR_5);
 if (VAR_18 < 0) {
  VAR_20 = VAR_12;
  FUNC_4("Failed to seek to end of file");
  goto out;
 }

 VAR_19 = FUNC_11(VAR_16, VAR_21, 1);
 if (VAR_19 < 0) {
  if (VAR_12 == VAR_0 || VAR_12 == VAR_1) {
   (void) FUNC_5("write errno=EFBIG|EINVAL: success\n");
   VAR_20 = 0;
  } else {
   VAR_20 = VAR_12;
   FUNC_4("Did not receive EFBIG");
  }
 } else {
  (void) FUNC_5("write completed successfully, test failed\n");
  VAR_20 = 1;
 }

out:
 (void) FUNC_9(VAR_22);
 FUNC_1(VAR_22);
 FUNC_0(VAR_16);
 return (VAR_20);
}
