
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_shell; int pw_dir; int pw_name; int pw_uid; scalar_t__ pw_gid; } ;
struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 () ;
 struct group* FUNC_2 (char*) ;
 struct passwd* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_2 ;

int FUNC_10 () {
  char *VAR_3 = VAR_1;
  char *VAR_4 = VAR_0;
  struct passwd *VAR_5;

  if (FUNC_5() == 0 || FUNC_1() == 0) {
    if (VAR_3 == 0 || *VAR_3 == '\0') {
      VAR_3 = "telegramd";
    }
    if ((VAR_5 = FUNC_3 (VAR_3)) == 0) {
      FUNC_0 (VAR_2, "change_user_group: can't find the user %s to switch to\n", VAR_3);
      return -1;
    }
    gid_t VAR_6 = VAR_5->pw_gid;
    if (FUNC_8 (1, &VAR_6) < 0) {
      FUNC_0 (VAR_2, "change_user_group: failed to clear supplementary groups list: %m\n");
      return -1;
    }

    if (VAR_4) {
      struct group *VAR_7 = FUNC_2 (VAR_4);
      if (VAR_7 == ((void*)0)) {
        FUNC_0 (VAR_2, "change_user_group: can't find the group %s to switch to\n", VAR_4);
        return -1;
      }
      VAR_6 = VAR_7->gr_gid;
    }

    if (FUNC_7 (VAR_6) < 0) {
      FUNC_0 (VAR_2, "change_user_group: setgid (%d) failed. %m\n", (int) VAR_6);
      return -1;
    }

    if (FUNC_9 (VAR_5->pw_uid) < 0) {
      FUNC_0 (VAR_2, "change_user_group: failed to assume identity of user %s\n", VAR_3);
      return -1;
    } else {
      VAR_5 = FUNC_4(FUNC_5());
      FUNC_6("USER", VAR_5->pw_name, 1);
      FUNC_6("HOME", VAR_5->pw_dir, 1);
      FUNC_6("SHELL", VAR_5->pw_shell, 1);
    }
  }
  return 0;
}
