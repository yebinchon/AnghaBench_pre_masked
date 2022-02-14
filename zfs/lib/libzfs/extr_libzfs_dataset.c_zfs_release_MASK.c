
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct holdarg {char const* snapname; char const* tag; int error; int * nvl; int recursive; } ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int boolean_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,...) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,struct holdarg*) ;
 int FUNC_13 (int *,int,char*) ;
 int FUNC_14 (int *,int,char*) ;

int
FUNC_15(zfs_handle_t *VAR_5, const char *VAR_6, const char *VAR_7,
    boolean_t VAR_8)
{
 int VAR_9;
 struct holdarg VAR_10;
 nvlist_t *VAR_11 = ((void*)0);
 nvpair_t *VAR_12;
 libzfs_handle_t *VAR_13 = VAR_5->zfs_hdl;
 char VAR_14[1024];

 VAR_10.nvl = FUNC_1();
 VAR_10.snapname = VAR_6;
 VAR_10.tag = VAR_7;
 VAR_10.recursive = VAR_8;
 VAR_10.error = 0;
 (void) FUNC_12(FUNC_11(VAR_5), &VAR_10);

 if (FUNC_5(VAR_10.nvl)) {
  FUNC_2(VAR_10.nvl);
  VAR_9 = VAR_10.error;
  (void) FUNC_8(VAR_14, sizeof (VAR_14),
      FUNC_0(VAR_3,
      "cannot release hold from snapshot '%s@%s'"),
      VAR_5->zfs_name, VAR_6);
  if (VAR_9 == 128) {
   (void) FUNC_9(VAR_13, VAR_2, VAR_14);
  } else {
   (void) FUNC_13(VAR_13, VAR_9, VAR_14);
  }
  return (VAR_9);
 }

 VAR_9 = FUNC_4(VAR_10.nvl, &VAR_11);
 FUNC_2(VAR_10.nvl);

 if (VAR_9 == 0) {

  FUNC_2(VAR_11);
  return (0);
 }

 if (FUNC_5(VAR_11)) {

  (void) FUNC_8(VAR_14, sizeof (VAR_14), FUNC_0(VAR_3,
      "cannot release"));
  switch (VAR_4) {
  case 129:
   FUNC_10(VAR_13, FUNC_0(VAR_3,
       "pool must be upgraded"));
   (void) FUNC_9(VAR_13, VAR_1, VAR_14);
   break;
  default:
   (void) FUNC_14(VAR_13, VAR_4, VAR_14);
  }
 }

 for (VAR_12 = FUNC_6(VAR_11, ((void*)0));
     VAR_12 != ((void*)0);
     VAR_12 = FUNC_6(VAR_11, VAR_12)) {
  (void) FUNC_8(VAR_14, sizeof (VAR_14),
      FUNC_0(VAR_3,
      "cannot release hold from snapshot '%s'"),
      FUNC_7(VAR_12));
  switch (FUNC_3(VAR_12)) {
  case 128:
   (void) FUNC_9(VAR_13, VAR_2, VAR_14);
   break;
  case 130:
   (void) FUNC_9(VAR_13, VAR_0, VAR_14);
   break;
  default:
   (void) FUNC_14(VAR_13,
       FUNC_3(VAR_12), VAR_14);
  }
 }

 FUNC_2(VAR_11);
 return (VAR_9);
}
