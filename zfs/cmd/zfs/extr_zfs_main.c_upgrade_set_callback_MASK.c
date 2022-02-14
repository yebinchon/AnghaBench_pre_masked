
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int verstr ;
struct TYPE_2__ {int cb_version; int cb_numsamegraded; int cb_numfailed; scalar_t__* cb_lastfs; int cb_numupgraded; } ;
typedef TYPE_1__ upgrade_cbdata_t ;
typedef int u_longlong_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (scalar_t__*,char*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,char*,char*) ;
 scalar_t__ FUNC_8 (int *,int*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(zfs_handle_t *VAR_5, void *VAR_6)
{
 upgrade_cbdata_t *VAR_7 = VAR_6;
 int VAR_8 = FUNC_6(VAR_5, VAR_1);
 int VAR_9;
 int VAR_10;

 if (FUNC_8(VAR_5, &VAR_10) < 0)
  return (-1);

 VAR_9 = FUNC_9(VAR_7->cb_version);

 if (VAR_9 < 0)
  return (-1);

 if (VAR_10 < VAR_9) {

  (void) FUNC_1(FUNC_0("%s: can not be "
      "upgraded; the pool version needs to first "
      "be upgraded\nto version %d\n\n"),
      FUNC_5(VAR_5), VAR_9);
  VAR_7->cb_numfailed++;
  return (0);
 }


 if (VAR_8 < VAR_7->cb_version) {
  char VAR_11[16];
  (void) FUNC_3(VAR_11, sizeof (VAR_11),
      "%llu", (u_longlong_t)VAR_7->cb_version);
  if (VAR_7->cb_lastfs[0] && !FUNC_2(VAR_5, VAR_7->cb_lastfs)) {






   (void) FUNC_10(VAR_2, VAR_3);
   VAR_4 = VAR_0;
  }
  if (FUNC_7(VAR_5, "version", VAR_11) == 0)
   VAR_7->cb_numupgraded++;
  else
   VAR_7->cb_numfailed++;
  (void) FUNC_4(VAR_7->cb_lastfs, FUNC_5(VAR_5));
 } else if (VAR_8 > VAR_7->cb_version) {

  (void) FUNC_1(FUNC_0("%s: can not be downgraded; "
      "it is already at version %u\n"),
      FUNC_5(VAR_5), VAR_8);
  VAR_7->cb_numfailed++;
 } else {
  VAR_7->cb_numsamegraded++;
 }
 return (0);
}
