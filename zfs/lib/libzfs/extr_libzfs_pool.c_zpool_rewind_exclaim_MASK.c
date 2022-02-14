
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
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (int *,int ,int*) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,int,char*,struct tm*) ;

__attribute__((used)) static void
FUNC_7(libzfs_handle_t *VAR_5, const char *VAR_6, boolean_t VAR_7,
    nvlist_t *VAR_8)
{
 nvlist_t *VAR_9 = ((void*)0);
 uint64_t VAR_10;
 int64_t VAR_11 = -1;
 struct tm VAR_12;
 char VAR_13[128];

 if (!VAR_5->libzfs_printerr || VAR_8 == ((void*)0))
  return;

 if (FUNC_3(VAR_8, VAR_1, &VAR_9) != 0 ||
     FUNC_3(VAR_9, VAR_3, &VAR_9) != 0) {
  return;
 }

 if (FUNC_4(VAR_9, VAR_2, &VAR_10) != 0)
  return;
 (void) FUNC_2(VAR_9, VAR_4, &VAR_11);

 if (FUNC_1((time_t *)&VAR_10, &VAR_12) != ((void*)0) &&
     FUNC_6(VAR_13, 128, "%c", &VAR_12) != 0) {
  if (VAR_7) {
   (void) FUNC_5(FUNC_0(VAR_0,
       "Would be able to return %s "
       "to its state as of %s.\n"),
       VAR_6, VAR_13);
  } else {
   (void) FUNC_5(FUNC_0(VAR_0,
       "Pool %s returned to its state as of %s.\n"),
       VAR_6, VAR_13);
  }
  if (VAR_11 > 120) {
   (void) FUNC_5(FUNC_0(VAR_0,
       "%s approximately %lld "),
       VAR_7 ? "Would discard" : "Discarded",
       ((longlong_t)VAR_11 + 30) / 60);
   (void) FUNC_5(FUNC_0(VAR_0,
       "minutes of transactions.\n"));
  } else if (VAR_11 > 0) {
   (void) FUNC_5(FUNC_0(VAR_0,
       "%s approximately %lld "),
       VAR_7 ? "Would discard" : "Discarded",
       (longlong_t)VAR_11);
   (void) FUNC_5(FUNC_0(VAR_0,
       "seconds of transactions.\n"));
  }
 }
}
