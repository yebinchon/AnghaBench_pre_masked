
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_19__ {scalar_t__ verbosity; scalar_t__ backup; scalar_t__ holds; scalar_t__ props; scalar_t__ dedup; scalar_t__ progress; int parsable; scalar_t__ dryrun; int doall; int replicate; int raw; } ;
typedef TYPE_2__ sendflags_t ;
typedef int pthread_t ;
struct TYPE_20__ {int pa_fd; scalar_t__ pa_verbosity; int pa_estimate; int pa_parsable; TYPE_1__* pa_zhp; int member_0; } ;
typedef TYPE_3__ progress_arg_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
struct TYPE_21__ {int member_0; } ;
typedef TYPE_4__ dedup_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*,char const*,int,TYPE_2__*,int ,int ,int ,char const*,char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*,int,int *,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,char const*,int,int ,char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int ,TYPE_3__*) ;
 int FUNC_9 (int ,void**) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (TYPE_1__*,int *,int,int ,int ,int,scalar_t__,int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int *,int *) ;
 int VAR_12 ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_13 (char*,int,char*,...) ;
 scalar_t__ FUNC_14 (char const*,char) ;
 char* FUNC_15 (int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *,int ,char*) ;
 int FUNC_18 (int *,char*,...) ;
 TYPE_1__* FUNC_19 (int *,char const*,int ) ;
 int FUNC_20 (int *,int,char*) ;

int
FUNC_21(zfs_handle_t *VAR_13, const char *VAR_14, int VAR_15, sendflags_t *VAR_16,
    const char *VAR_17)
{
 int VAR_18;
 libzfs_handle_t *VAR_19 = VAR_13->zfs_hdl;
 int VAR_20 = VAR_15;
 pthread_t VAR_21, VAR_22;
 progress_arg_t VAR_23 = { 0 };
 dedup_arg_t VAR_24 = { 0 };

 char VAR_25[1024];
 (void) FUNC_13(VAR_25, sizeof (VAR_25), FUNC_1(VAR_9,
     "warning: cannot send '%s'"), VAR_13->zfs_name);

 if (VAR_14 != ((void*)0) && FUNC_14(VAR_14, '@')) {
  zfs_handle_t *VAR_26 = FUNC_19(VAR_19, VAR_14,
      VAR_10);
  if (VAR_26 == ((void*)0))
   return (-1);
  if (!FUNC_12(VAR_26, VAR_13)) {
   FUNC_16(VAR_26);
   FUNC_18(VAR_19, FUNC_1(VAR_9,
       "not an earlier snapshot from the same fs"));
   return (FUNC_17(VAR_19, VAR_4, VAR_25));
  }
  FUNC_16(VAR_26);
 }




 if (VAR_16->props || VAR_16->holds || VAR_16->backup) {
  VAR_18 = FUNC_11(VAR_13, ((void*)0), VAR_15, VAR_1, VAR_0,
      VAR_16->verbosity > 0, VAR_16->dryrun, VAR_16->raw,
      VAR_16->replicate, VAR_16->backup, VAR_16->holds,
      VAR_16->props, VAR_16->doall, ((void*)0), ((void*)0));
  if (VAR_18 != 0)
   return (VAR_18);
 }




 if (VAR_16->verbosity != 0) {
  VAR_18 = FUNC_2(VAR_13, VAR_14, VAR_15, VAR_16, 0, 0, 0, VAR_17,
      VAR_25);
  if (VAR_18 != 0)
   return (VAR_18);
 }

 if (VAR_16->dryrun)
  return (0);





 if (VAR_16->dedup) {
  VAR_18 = FUNC_3(VAR_13, &VAR_24, VAR_15, &VAR_21, &VAR_15);
  if (VAR_18 != 0)
   return (VAR_18);
 }





 if (VAR_16->progress) {
  VAR_23.pa_zhp = VAR_13;
  VAR_23.pa_fd = VAR_15;
  VAR_23.pa_parsable = VAR_16->parsable;
  VAR_23.pa_estimate = VAR_0;
  VAR_23.pa_verbosity = VAR_16->verbosity;

  VAR_18 = FUNC_8(&VAR_22, ((void*)0),
      VAR_12, &VAR_23);
  if (VAR_18 != 0) {
   FUNC_18(VAR_13->zfs_hdl, FUNC_15(VAR_11));
   if (VAR_16->dedup) {
    (void) FUNC_7(VAR_21);
    (void) FUNC_0(VAR_15);
    (void) FUNC_9(VAR_21, ((void*)0));
   }
   return (FUNC_17(VAR_13->zfs_hdl,
       VAR_7, VAR_25));
  }
 }

 VAR_18 = FUNC_6(VAR_13->zfs_name, VAR_14, VAR_15,
     FUNC_5(VAR_16), VAR_17);

 if (VAR_16->progress) {
  void *VAR_27 = ((void*)0);
  if (VAR_18 != 0)
   (void) FUNC_7(VAR_22);
  (void) FUNC_9(VAR_22, &VAR_27);
  int VAR_28 = (int)(uintptr_t)VAR_27;
  if (VAR_28 != 0 && VAR_27 != VAR_8) {
   char VAR_29[1024];
   (void) FUNC_13(VAR_29, sizeof (VAR_29),
       FUNC_1(VAR_9, "progress thread exited "
       "nonzero"));
   return (FUNC_20(VAR_19, VAR_28, VAR_29));
  }
 }
 if (VAR_16->dedup) {
  if (VAR_18 != 0)
   (void) FUNC_7(VAR_21);
  (void) FUNC_0(VAR_15);
  (void) FUNC_9(VAR_21, ((void*)0));
 }

 if (VAR_16->props || VAR_16->holds || VAR_16->backup) {

  VAR_18 = FUNC_10(VAR_20, ((void*)0));
  if (VAR_18 != 0)
   return (FUNC_20(VAR_19, VAR_18, VAR_25));
 }
 if (VAR_18 != 0) {
  switch (VAR_11) {
  case 128:
   FUNC_18(VAR_19, FUNC_1(VAR_9,
       "not an earlier snapshot from the same fs"));
   return (FUNC_17(VAR_19, VAR_4, VAR_25));

  case 137:
  case 129:
   if (FUNC_4(VAR_13->zfs_name)) {
    FUNC_18(VAR_19, FUNC_1(VAR_9,
        "incremental source (%s) does not exist"),
        VAR_14);
   }
   return (FUNC_17(VAR_19, VAR_6, VAR_25));

  case 143:
   FUNC_18(VAR_19, FUNC_1(VAR_9,
       "dataset key must be loaded"));
   return (FUNC_17(VAR_19, VAR_5, VAR_25));

  case 142:
   FUNC_18(VAR_19, FUNC_1(VAR_9,
       "target is busy; if a filesystem, "
       "it must not be mounted"));
   return (FUNC_17(VAR_19, VAR_3, VAR_25));

  case 141:
  case 139:
  case 138:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 140:
  case 130:
   FUNC_18(VAR_19, FUNC_15(VAR_11));
   return (FUNC_17(VAR_19, VAR_2, VAR_25));

  default:
   return (FUNC_20(VAR_19, VAR_11, VAR_25));
  }
 }
 return (VAR_18 != 0);
}
