
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int dds_guid; } ;
struct TYPE_15__ {char* zfs_name; int zfs_hdl; TYPE_1__ zfs_dmustats; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_16__ {char* prevsnap; scalar_t__ (* filter_cb ) (TYPE_2__*,int ) ;scalar_t__ verbosity; void* prevsnap_obj; scalar_t__ progress; int debugnv; int outfd; int parsable; int dryrun; int size; scalar_t__ replicate; scalar_t__ fromorigin; int filter_cb_arg; int fsavl; int doall; scalar_t__ raw; scalar_t__ compress; scalar_t__ embed_data; scalar_t__ large_block; void* seento; int * tosnap; void* seenfrom; int * fromsnap; scalar_t__ std_out; } ;
typedef TYPE_3__ send_dump_data_t ;
typedef int pthread_t ;
struct TYPE_17__ {scalar_t__ pa_verbosity; scalar_t__ pa_estimate; int pa_parsable; int pa_fd; TYPE_2__* pa_zhp; int member_0; } ;
typedef TYPE_4__ progress_arg_t ;
typedef int nvlist_t ;
typedef int fromds ;
typedef int errbuf ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;
typedef int boolean_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,char*,void*,int,int ,int,int ) ;
 int * FUNC_3 (int ,int ,char**) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*,int **) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int ,TYPE_4__*) ;
 int FUNC_9 (int ,void**) ;
 int FUNC_10 (int *,char*,char*,scalar_t__,int ) ;
 int VAR_10 ;
 int FUNC_11 (char*,int,char*) ;
 int * VAR_11 ;
 int * VAR_12 ;
 char* FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (int *,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,char*,int) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*) ;
 void* FUNC_19 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_20 (TYPE_2__*,char*,char*,int,scalar_t__*) ;
 int FUNC_21 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_22(zfs_handle_t *VAR_13, void *VAR_14)
{
 send_dump_data_t *VAR_15 = VAR_14;
 progress_arg_t VAR_16 = { 0 };
 pthread_t VAR_17;
 char *VAR_18;
 enum lzc_send_flags VAR_19 = 0;
 int VAR_20;
 boolean_t VAR_21, VAR_22, VAR_23;
 boolean_t VAR_24 = VAR_0;
 FILE *VAR_25 = VAR_15->std_out ? VAR_12 : VAR_11;

 VAR_20 = 0;
 VAR_18 = FUNC_12(VAR_13->zfs_name, '@') + 1;
 VAR_21 = (VAR_15->fromsnap != ((void*)0) &&
     FUNC_13(VAR_15->fromsnap, VAR_18) == 0);

 if (!VAR_15->seenfrom && VAR_21) {
  FUNC_4(VAR_13, VAR_15);
  VAR_15->seenfrom = VAR_1;
  (void) FUNC_16(VAR_15->prevsnap, VAR_18,
      sizeof (VAR_15->prevsnap));
  VAR_15->prevsnap_obj = FUNC_19(VAR_13, VAR_9);
  FUNC_18(VAR_13);
  return (0);
 }

 if (VAR_15->seento || !VAR_15->seenfrom) {
  FUNC_18(VAR_13);
  return (0);
 }

 VAR_22 = (FUNC_13(VAR_15->tosnap, VAR_18) == 0);
 if (VAR_22)
  VAR_15->seento = VAR_1;

 if (VAR_15->large_block)
  VAR_19 |= VAR_4;
 if (VAR_15->embed_data)
  VAR_19 |= VAR_3;
 if (VAR_15->compress)
  VAR_19 |= VAR_2;
 if (VAR_15->raw)
  VAR_19 |= VAR_5;

 if (!VAR_15->doall && !VAR_21 && !VAR_22) {
  if (VAR_15->replicate) {
   char *VAR_26;
   nvlist_t *VAR_27;




   nvlist_t *VAR_28 = FUNC_3(VAR_15->fsavl,
       VAR_13->zfs_dmustats.dds_guid, &VAR_26);

   FUNC_0(0 == FUNC_6(VAR_28,
       "snapprops", &VAR_27));
   FUNC_0(0 == FUNC_6(VAR_27,
       VAR_18, &VAR_27));
   VAR_24 = !FUNC_5(VAR_27, "is_clone_origin");
  } else {
   VAR_24 = VAR_1;
  }
 }





 if (VAR_24 || (VAR_15->filter_cb != ((void*)0) &&
     VAR_15->filter_cb(VAR_13, VAR_15->filter_cb_arg) == VAR_0)) {
  FUNC_18(VAR_13);
  return (0);
 }

 FUNC_4(VAR_13, VAR_15);
 VAR_23 = VAR_15->prevsnap[0] == '\0' &&
     (VAR_15->fromorigin || VAR_15->replicate);

 if (VAR_15->verbosity != 0) {
  uint64_t VAR_29 = 0;
  char VAR_30[VAR_8];

  if (VAR_15->prevsnap[0] != '\0') {
   (void) FUNC_16(VAR_30, VAR_13->zfs_name, sizeof (VAR_30));
   *(FUNC_12(VAR_30, '@') + 1) = '\0';
   (void) FUNC_15(VAR_30, VAR_15->prevsnap, sizeof (VAR_30));
  }
  if (FUNC_20(VAR_13, VAR_13->zfs_name,
      VAR_15->prevsnap[0] ? VAR_30 : ((void*)0), VAR_19, &VAR_29) != 0) {
   VAR_29 = 0;
  } else {
   FUNC_10(VAR_25, VAR_13->zfs_name,
       VAR_15->prevsnap[0] ? VAR_15->prevsnap : ((void*)0),
       VAR_29, VAR_15->parsable);
  }
  VAR_15->size += VAR_29;
 }

 if (!VAR_15->dryrun) {




  if (VAR_15->progress) {
   VAR_16.pa_zhp = VAR_13;
   VAR_16.pa_fd = VAR_15->outfd;
   VAR_16.pa_parsable = VAR_15->parsable;
   VAR_16.pa_estimate = VAR_0;
   VAR_16.pa_verbosity = VAR_15->verbosity;

   if ((VAR_20 = FUNC_8(&VAR_17, ((void*)0),
       VAR_10, &VAR_16)) != 0) {
    FUNC_18(VAR_13);
    return (VAR_20);
   }
  }

  VAR_20 = FUNC_2(VAR_13, VAR_15->prevsnap, VAR_15->prevsnap_obj,
      VAR_23, VAR_15->outfd, VAR_19, VAR_15->debugnv);

  if (VAR_15->progress) {
   void *VAR_31 = ((void*)0);
   (void) FUNC_7(VAR_17);
   (void) FUNC_9(VAR_17, &VAR_31);
   int VAR_32 = (int)(uintptr_t)VAR_31;
   if (VAR_32 != 0 && VAR_31 != VAR_6) {
    char VAR_33[1024];
    (void) FUNC_11(VAR_33, sizeof (VAR_33),
        FUNC_1(VAR_7,
        "progress thread exited nonzero"));
    return (FUNC_21(VAR_13->zfs_hdl, VAR_32,
        VAR_33));
   }
  }
 }

 (void) FUNC_14(VAR_15->prevsnap, VAR_18);
 VAR_15->prevsnap_obj = FUNC_19(VAR_13, VAR_9);
 FUNC_18(VAR_13);
 return (VAR_20);
}
