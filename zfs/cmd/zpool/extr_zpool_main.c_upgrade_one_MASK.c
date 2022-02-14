
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {scalar_t__ cb_version; } ;
typedef TYPE_1__ upgrade_cbdata_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,scalar_t__) ;
 char* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_8(zpool_handle_t *VAR_6, void *VAR_7)
{
 boolean_t VAR_8 = VAR_0;
 upgrade_cbdata_t *VAR_9 = VAR_7;
 uint64_t VAR_10;
 int VAR_11;

 if (FUNC_3("log", FUNC_6(VAR_6)) == 0) {
  (void) FUNC_0(VAR_5, "%s", FUNC_1("'log' is now a reserved word\n"
      "Pool 'log' must be renamed using export and import"
      " to upgrade.\n"));
  return (1);
 }

 VAR_10 = FUNC_7(VAR_6, VAR_4, ((void*)0));
 if (VAR_10 > VAR_9->cb_version) {
  (void) FUNC_2(FUNC_1("Pool '%s' is already formatted "
      "using more current version '%llu'.\n\n"),
      FUNC_6(VAR_6), (u_longlong_t)VAR_10);
  return (0);
 }

 if (VAR_9->cb_version != VAR_2 && VAR_10 == VAR_9->cb_version) {
  (void) FUNC_2(FUNC_1("Pool '%s' is already formatted "
      "using version %llu.\n\n"), FUNC_6(VAR_6),
      (u_longlong_t)VAR_9->cb_version);
  return (0);
 }

 if (VAR_10 != VAR_9->cb_version) {
  VAR_8 = VAR_1;
  VAR_11 = FUNC_5(VAR_6, VAR_9->cb_version);
  if (VAR_11 != 0)
   return (VAR_11);
 }

 if (VAR_9->cb_version >= VAR_3) {
  int VAR_12 = 0;
  VAR_11 = FUNC_4(VAR_6, &VAR_12);
  if (VAR_11 != 0)
   return (VAR_11);

  if (VAR_12 != 0) {
   VAR_8 = VAR_1;
  } else if (VAR_10 == VAR_2) {
   (void) FUNC_2(FUNC_1("Pool '%s' already has all "
       "supported features enabled.\n"),
       FUNC_6(VAR_6));
  }
 }

 if (VAR_8) {
  (void) FUNC_2(FUNC_1("\n"));
 }

 return (0);
}
