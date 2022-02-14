
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zed_conf {char* pid_file; int pid_fd; } ;
typedef char* pid_t ;
typedef int mode_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int const) ;
 int FUNC_5 (char*,int,int const) ;
 int FUNC_6 (char*,int,char*,int) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (int) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (int ,char*,char*,...) ;

int
FUNC_15(struct zed_conf *VAR_16)
{
 const mode_t VAR_17 = VAR_11 | VAR_8 | VAR_13 | VAR_9 | VAR_14;
 const mode_t VAR_18 = VAR_10 | VAR_12 | VAR_8 | VAR_9;
 char VAR_19[VAR_7];
 int VAR_20;
 char *VAR_21;
 mode_t VAR_22;
 int VAR_23;

 if (!VAR_16 || !VAR_16->pid_file) {
  VAR_15 = VAR_1;
  FUNC_14(VAR_4, "Failed to create PID file: %s",
      FUNC_7(VAR_15));
  return (-1);
 }
 FUNC_0(VAR_16->pid_fd == -1);



 VAR_20 = FUNC_8(VAR_19, VAR_16->pid_file, sizeof (VAR_19));
 if (VAR_20 >= sizeof (VAR_19)) {
  VAR_15 = VAR_2;
  FUNC_14(VAR_4, "Failed to create PID file: %s",
      FUNC_7(VAR_15));
  goto err;
 }
 VAR_21 = FUNC_9(VAR_19, '/');
 if (VAR_21)
  *VAR_21 = '\0';

 if ((FUNC_4(VAR_19, VAR_17) < 0) && (VAR_15 != VAR_0)) {
  FUNC_14(VAR_4, "Failed to create directory \"%s\": %s",
      VAR_19, FUNC_7(VAR_15));
  goto err;
 }



 VAR_22 = FUNC_10(0);
 FUNC_10(VAR_22 | 022);
 VAR_16->pid_fd = FUNC_5(VAR_16->pid_file, (VAR_6 | VAR_5), VAR_18);
 FUNC_10(VAR_22);
 if (VAR_16->pid_fd < 0) {
  FUNC_14(VAR_4, "Failed to open PID file \"%s\": %s",
      VAR_16->pid_file, FUNC_7(VAR_15));
  goto err;
 }
 VAR_23 = FUNC_12(VAR_16->pid_fd);
 if (VAR_23 < 0) {
  FUNC_14(VAR_4, "Failed to lock PID file \"%s\": %s",
      VAR_16->pid_file, FUNC_7(VAR_15));
  goto err;
 } else if (VAR_23 > 0) {
  pid_t VAR_24 = FUNC_11(VAR_16->pid_fd);
  if (VAR_24 < 0) {
   FUNC_14(VAR_4,
       "Failed to test lock on PID file \"%s\"",
       VAR_16->pid_file);
  } else if (VAR_24 > 0) {
   FUNC_14(VAR_4,
       "Found PID %d bound to PID file \"%s\"",
       VAR_24, VAR_16->pid_file);
  } else {
   FUNC_14(VAR_4,
       "Inconsistent lock state on PID file \"%s\"",
       VAR_16->pid_file);
  }
  goto err;
 }



 VAR_20 = FUNC_6(VAR_19, sizeof (VAR_19), "%d\n", (int)FUNC_3());
 if ((VAR_20 < 0) || (VAR_20 >= sizeof (VAR_19))) {
  VAR_15 = VAR_3;
  FUNC_14(VAR_4, "Failed to write PID file \"%s\": %s",
      VAR_16->pid_file, FUNC_7(VAR_15));
 } else if (FUNC_13(VAR_16->pid_fd, VAR_19, VAR_20) != VAR_20) {
  FUNC_14(VAR_4, "Failed to write PID file \"%s\": %s",
      VAR_16->pid_file, FUNC_7(VAR_15));
 } else if (FUNC_2(VAR_16->pid_fd) < 0) {
  FUNC_14(VAR_4, "Failed to sync PID file \"%s\": %s",
      VAR_16->pid_file, FUNC_7(VAR_15));
 } else {
  return (0);
 }

err:
 if (VAR_16->pid_fd >= 0) {
  (void) FUNC_1(VAR_16->pid_fd);
  VAR_16->pid_fd = -1;
 }
 return (-1);
}
