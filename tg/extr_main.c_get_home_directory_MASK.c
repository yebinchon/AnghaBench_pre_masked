
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {scalar_t__ pw_uid; char* pw_dir; } ;


 int FUNC_0 () ;
 char* FUNC_1 (char*) ;
 struct passwd* FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 char* VAR_0 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;

char *FUNC_7 (void) {
  if (VAR_0) { return VAR_0; }
  VAR_0 = FUNC_1("TELEGRAM_HOME");
  if (!FUNC_5 (VAR_0)) { return VAR_0 = FUNC_6 (VAR_0); }
  VAR_0 = FUNC_1("HOME");
  if (!FUNC_5 (VAR_0)) { return VAR_0 = FUNC_6 (VAR_0); }
  struct passwd *VAR_1;
  uid_t VAR_2;
  FUNC_4 ();
  VAR_2 = FUNC_3 ();
  while ((VAR_1 = FUNC_2 ())) {
    if (VAR_1->pw_uid == VAR_2) {
      VAR_0 = FUNC_6 (VAR_1->pw_dir);
      break;
    }
  }
  FUNC_0 ();
  if (FUNC_5 (VAR_0)) { VAR_0 = FUNC_6 ("."); }
  return VAR_0;
}
