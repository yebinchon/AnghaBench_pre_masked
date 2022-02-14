
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zfs_handle_t ;
typedef int origin ;
typedef int libzfs_handle_t ;
struct TYPE_6__ {char* ds; void* tosnap; void* fromsnap; int isclone; int errbuf; TYPE_1__* zhp; } ;
typedef TYPE_2__ differ_info_t ;
struct TYPE_5__ {int * zfs_hdl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int,char*,...) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 void* FUNC_8 (int *,int) ;
 void* FUNC_9 (int *,char*,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;
 int * FUNC_12 (int *,char*,int ) ;
 scalar_t__ FUNC_13 (int *,int ,char*,int,int *,int *,int ,int ) ;
 void* FUNC_14 (int *,char const*) ;
 int FUNC_15 (int *,char const*,int ,int ) ;

__attribute__((used)) static int
FUNC_16(differ_info_t *VAR_8, const char *VAR_9,
    const char *VAR_10)
{
 libzfs_handle_t *VAR_11 = VAR_8->zhp->zfs_hdl;
 char *VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);
 int VAR_14, VAR_15;
 int VAR_16, VAR_17;
 if (VAR_10 == ((void*)0)) {

  (void) FUNC_3(VAR_8->errbuf, sizeof (VAR_8->errbuf),
      FUNC_1(VAR_3,
      "Badly formed snapshot name %s"), VAR_9);

  if (!FUNC_15(VAR_11, VAR_9, VAR_7,
      VAR_0)) {
   return (FUNC_11(VAR_11, VAR_2,
       VAR_8->errbuf));
  }

  VAR_12 = FUNC_4(VAR_9, '@');
  FUNC_0(VAR_12 != ((void*)0));
  VAR_14 = VAR_12 - VAR_9;

  VAR_8->fromsnap = FUNC_14(VAR_11, VAR_9);
  VAR_8->ds = FUNC_14(VAR_11, VAR_9);
  VAR_8->ds[VAR_14] = '\0';


  return (FUNC_2(VAR_8));
 }

 (void) FUNC_3(VAR_8->errbuf, sizeof (VAR_8->errbuf),
     FUNC_1(VAR_3,
     "Unable to determine which snapshots to compare"));

 VAR_12 = FUNC_4(VAR_9, '@');
 VAR_13 = FUNC_4(VAR_10, '@');
 VAR_14 = VAR_12 ? VAR_12 - VAR_9 : FUNC_5(VAR_9);
 VAR_16 = VAR_13 ? VAR_13 - VAR_10 : FUNC_5(VAR_10);
 VAR_15 = FUNC_5(VAR_9) - VAR_14;
 VAR_17 = FUNC_5(VAR_10) - VAR_16;

 if (VAR_15 <= 1 || VAR_17 == 1 || (VAR_14 == 0 && VAR_16 == 0)) {
  return (FUNC_11(VAR_11, VAR_2, VAR_8->errbuf));
 } else if ((VAR_14 > 0 && VAR_16 > 0) &&
     ((VAR_16 != VAR_14 || FUNC_6(VAR_9, VAR_10, VAR_14) != 0))) {




  char VAR_18[VAR_4];
  zprop_source_t VAR_19;
  zfs_handle_t *VAR_20;

  VAR_8->ds = FUNC_8(VAR_8->zhp->zfs_hdl, VAR_16 + 1);
  (void) FUNC_7(VAR_8->ds, VAR_10, VAR_16);
  VAR_8->ds[VAR_16] = '\0';

  VAR_20 = FUNC_12(VAR_11, VAR_8->ds, VAR_6);
  while (VAR_20 != ((void*)0)) {
   if (FUNC_13(VAR_20, VAR_5, VAR_18,
       sizeof (VAR_18), &VAR_19, ((void*)0), 0, VAR_0) != 0) {
    (void) FUNC_10(VAR_20);
    VAR_20 = ((void*)0);
    break;
   }
   if (FUNC_6(VAR_18, VAR_9, VAR_15) == 0)
    break;

   (void) FUNC_10(VAR_20);
   VAR_20 = FUNC_12(VAR_11, VAR_18, VAR_6);
  }

  if (VAR_20 == ((void*)0)) {
   (void) FUNC_3(VAR_8->errbuf, sizeof (VAR_8->errbuf),
       FUNC_1(VAR_3,
       "Not an earlier snapshot from the same fs"));
   return (FUNC_11(VAR_11, VAR_2, VAR_8->errbuf));
  } else {
   (void) FUNC_10(VAR_20);
  }

  VAR_8->isclone = VAR_1;
  VAR_8->fromsnap = FUNC_14(VAR_11, VAR_9);
  if (VAR_17) {
   VAR_8->tosnap = FUNC_14(VAR_11, VAR_10);
  } else {
   return (FUNC_2(VAR_8));
  }
 } else {
  int VAR_21 = VAR_14 ? VAR_14 : VAR_16;

  VAR_8->ds = FUNC_8(VAR_11, VAR_21 + 1);
  (void) FUNC_7(VAR_8->ds, VAR_14 ? VAR_9 : VAR_10, VAR_21);
  VAR_8->ds[VAR_21] = '\0';

  VAR_8->fromsnap = FUNC_9(VAR_11, "%s%s", VAR_8->ds, VAR_12);
  if (VAR_17) {
   VAR_8->tosnap = FUNC_9(VAR_11, "%s%s", VAR_8->ds, VAR_13);
  } else {
   return (FUNC_2(VAR_8));
  }
 }
 return (0);
}
