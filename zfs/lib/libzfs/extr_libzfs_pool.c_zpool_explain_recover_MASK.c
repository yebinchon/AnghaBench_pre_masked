
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int time_t ;
struct tm {int dummy; } ;
typedef int nvlist_t ;
typedef int longlong_t ;
struct TYPE_3__ {int libzfs_printerr; } ;
typedef TYPE_1__ libzfs_handle_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (int *,int ,int*) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,int,char*,struct tm*) ;

void
FUNC_7(libzfs_handle_t *VAR_7, const char *VAR_8, int VAR_9,
    nvlist_t *VAR_10)
{
 nvlist_t *VAR_11 = ((void*)0);
 int64_t VAR_12 = -1;
 uint64_t VAR_13 = VAR_1;
 uint64_t VAR_14;
 struct tm VAR_15;
 char VAR_16[128];

 if (!VAR_7->libzfs_printerr)
  return;

 if (VAR_9 >= 0)
  (void) FUNC_5(FUNC_0(VAR_0, "action: "));
 else
  (void) FUNC_5(FUNC_0(VAR_0, "\t"));


 if (FUNC_3(VAR_10, VAR_3, &VAR_11) != 0 ||
     FUNC_3(VAR_11, VAR_5, &VAR_11) != 0 ||
     FUNC_4(VAR_11, VAR_4, &VAR_14) != 0)
  goto no_info;

 (void) FUNC_2(VAR_11, VAR_6, &VAR_12);
 (void) FUNC_4(VAR_11, VAR_2,
     &VAR_13);

 (void) FUNC_5(FUNC_0(VAR_0,
     "Recovery is possible, but will result in some data loss.\n"));

 if (FUNC_1((time_t *)&VAR_14, &VAR_15) != ((void*)0) &&
     FUNC_6(VAR_16, 128, "%c", &VAR_15) != 0) {
  (void) FUNC_5(FUNC_0(VAR_0,
      "\tReturning the pool to its state as of %s\n"
      "\tshould correct the problem.  "),
      VAR_16);
 } else {
  (void) FUNC_5(FUNC_0(VAR_0,
      "\tReverting the pool to an earlier state "
      "should correct the problem.\n\t"));
 }

 if (VAR_12 > 120) {
  (void) FUNC_5(FUNC_0(VAR_0,
      "Approximately %lld minutes of data\n"
      "\tmust be discarded, irreversibly.  "),
      ((longlong_t)VAR_12 + 30) / 60);
 } else if (VAR_12 > 0) {
  (void) FUNC_5(FUNC_0(VAR_0,
      "Approximately %lld seconds of data\n"
      "\tmust be discarded, irreversibly.  "),
      (longlong_t)VAR_12);
 }
 if (VAR_13 != 0 && VAR_13 != VAR_1) {
  if (VAR_13 == 1) {
   (void) FUNC_5(FUNC_0(VAR_0,
       "After rewind, at least\n"
       "\tone persistent user-data error will remain.  "));
  } else {
   (void) FUNC_5(FUNC_0(VAR_0,
       "After rewind, several\n"
       "\tpersistent user-data errors will remain.  "));
  }
 }
 (void) FUNC_5(FUNC_0(VAR_0,
     "Recovery can be attempted\n\tby executing 'zpool %s -F %s'.  "),
     VAR_9 >= 0 ? "clear" : "import", VAR_8);

 (void) FUNC_5(FUNC_0(VAR_0,
     "A scrub of the pool\n"
     "\tis strongly recommended after recovery.\n"));
 return;

no_info:
 (void) FUNC_5(FUNC_0(VAR_0,
     "Destroy and re-create the pool from\n\ta backup source.\n"));
}
