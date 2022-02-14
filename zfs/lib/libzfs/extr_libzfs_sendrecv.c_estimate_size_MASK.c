
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zfs_name; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int parsable; scalar_t__ progress; int verbosity; scalar_t__ dryrun; } ;
typedef TYPE_2__ sendflags_t ;
typedef int pthread_t ;
struct TYPE_10__ {int pa_fd; int pa_verbosity; int pa_estimate; int pa_parsable; TYPE_1__* pa_zhp; int member_0; } ;
typedef TYPE_3__ progress_arg_t ;
typedef char* longlong_t ;
typedef int errbuf ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char const*,int ,scalar_t__,scalar_t__,scalar_t__,char const*,int,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int ,TYPE_3__*) ;
 int FUNC_6 (int ,void**) ;
 int FUNC_7 (int *,int ,char const*,scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_8 (char*,int,char*) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (scalar_t__,char*,int) ;
 int FUNC_13 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_14(zfs_handle_t *VAR_9, const char *VAR_10, int VAR_11, sendflags_t *VAR_12,
    uint64_t VAR_13, uint64_t VAR_14, uint64_t VAR_15,
    const char *VAR_16, char *VAR_17)
{
 uint64_t VAR_18;
 FILE *VAR_19 = VAR_12->dryrun ? VAR_8 : VAR_7;
 progress_arg_t VAR_20 = { 0 };
 int VAR_21 = 0;
 pthread_t VAR_22;

 if (VAR_12->progress) {
  VAR_20.pa_zhp = VAR_9;
  VAR_20.pa_fd = VAR_11;
  VAR_20.pa_parsable = VAR_12->parsable;
  VAR_20.pa_estimate = VAR_0;
  VAR_20.pa_verbosity = VAR_12->verbosity;

  VAR_21 = FUNC_5(&VAR_22, ((void*)0),
      VAR_6, &VAR_20);
  if (VAR_21 != 0) {
   FUNC_11(VAR_9->zfs_hdl, FUNC_9(VAR_5));
   return (FUNC_10(VAR_9->zfs_hdl,
       VAR_2, VAR_17));
  }
 }

 VAR_21 = FUNC_3(VAR_9->zfs_name, VAR_10,
     FUNC_2(VAR_12), VAR_13, VAR_14, VAR_15,
     VAR_16, VAR_11, &VAR_18);

 if (VAR_12->progress) {
  void *VAR_23 = ((void*)0);
  (void) FUNC_4(VAR_22);
  (void) FUNC_6(VAR_22, &VAR_23);
  int VAR_24 = (int)(uintptr_t)VAR_23;
  if (VAR_24 != 0 && VAR_23 != VAR_3) {
   char VAR_25[1024];
   (void) FUNC_8(VAR_25, sizeof (VAR_25),
       FUNC_0(VAR_4, "progress thread exited "
       "nonzero"));
   return (FUNC_13(VAR_9->zfs_hdl, VAR_24,
       VAR_25));
  }
 }

 if (VAR_21 != 0) {
  FUNC_11(VAR_9->zfs_hdl, FUNC_9(VAR_21));
  return (FUNC_10(VAR_9->zfs_hdl, VAR_1,
      VAR_17));
 }
 FUNC_7(VAR_19, VAR_9->zfs_name, VAR_10, VAR_18,
     VAR_12->parsable);

 if (VAR_12->parsable) {
  (void) FUNC_1(VAR_19, "size\t%llu\n", (longlong_t)VAR_18);
 } else {
  char VAR_26[16];
  FUNC_12(VAR_18, VAR_26, sizeof (VAR_26));
  (void) FUNC_1(VAR_19, FUNC_0(VAR_4,
      "total estimated size is %s\n"), VAR_26);
 }
 return (0);
}
