
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zed_conf {scalar_t__ state_fd; int state_file; scalar_t__ do_zero; } ;
typedef int pid_t ;
typedef int mode_t ;
typedef int dirbuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,char*,char*,...) ;

int
FUNC_10(struct zed_conf *VAR_16)
{
 char VAR_17[VAR_7];
 mode_t VAR_18 = VAR_11 | VAR_8 | VAR_13 | VAR_9 | VAR_14;
 int VAR_19;
 char *VAR_20;
 int VAR_21;

 if (!VAR_16 || !VAR_16->state_file) {
  VAR_15 = VAR_1;
  FUNC_9(VAR_3, "Failed to open state file: %s",
      FUNC_3(VAR_15));
  return (-1);
 }
 VAR_19 = FUNC_4(VAR_17, VAR_16->state_file, sizeof (VAR_17));
 if (VAR_19 >= sizeof (VAR_17)) {
  VAR_15 = VAR_2;
  FUNC_9(VAR_4, "Failed to open state file: %s",
      FUNC_3(VAR_15));
  return (-1);
 }
 VAR_20 = FUNC_5(VAR_17, '/');
 if (VAR_20)
  *VAR_20 = '\0';

 if ((FUNC_1(VAR_17, VAR_18) < 0) && (VAR_15 != VAR_0)) {
  FUNC_9(VAR_4,
      "Failed to create directory \"%s\": %s",
      VAR_17, FUNC_3(VAR_15));
  return (-1);
 }
 if (VAR_16->state_fd >= 0) {
  if (FUNC_0(VAR_16->state_fd) < 0) {
   FUNC_9(VAR_4,
       "Failed to close state file \"%s\": %s",
       VAR_16->state_file, FUNC_3(VAR_15));
   return (-1);
  }
 }
 if (VAR_16->do_zero)
  (void) FUNC_6(VAR_16->state_file);

 VAR_16->state_fd = FUNC_2(VAR_16->state_file,
     (VAR_6 | VAR_5), (VAR_10 | VAR_12 | VAR_8 | VAR_9));
 if (VAR_16->state_fd < 0) {
  FUNC_9(VAR_4, "Failed to open state file \"%s\": %s",
      VAR_16->state_file, FUNC_3(VAR_15));
  return (-1);
 }
 VAR_21 = FUNC_8(VAR_16->state_fd);
 if (VAR_21 < 0) {
  FUNC_9(VAR_4, "Failed to lock state file \"%s\": %s",
      VAR_16->state_file, FUNC_3(VAR_15));
  return (-1);
 }
 if (VAR_21 > 0) {
  pid_t VAR_22 = FUNC_7(VAR_16->state_fd);
  if (VAR_22 < 0) {
   FUNC_9(VAR_4,
       "Failed to test lock on state file \"%s\"",
       VAR_16->state_file);
  } else if (VAR_22 > 0) {
   FUNC_9(VAR_4,
       "Found PID %d bound to state file \"%s\"",
       VAR_22, VAR_16->state_file);
  } else {
   FUNC_9(VAR_4,
       "Inconsistent lock state on state file \"%s\"",
       VAR_16->state_file);
  }
  return (-1);
 }
 return (0);
}
