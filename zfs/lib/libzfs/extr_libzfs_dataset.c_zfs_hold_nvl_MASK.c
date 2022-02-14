
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int **) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,...) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int,char*) ;

int
FUNC_11(zfs_handle_t *VAR_5, int VAR_6, nvlist_t *VAR_7)
{
 int VAR_8;
 nvlist_t *VAR_9;
 libzfs_handle_t *VAR_10 = VAR_5->zfs_hdl;
 char VAR_11[1024];
 nvpair_t *VAR_12;

 VAR_9 = ((void*)0);
 VAR_8 = FUNC_3(VAR_7, VAR_6, &VAR_9);

 if (VAR_8 == 0) {

  FUNC_1(VAR_9);
  return (0);
 }

 if (FUNC_4(VAR_9)) {

  (void) FUNC_7(VAR_11, sizeof (VAR_11),
      FUNC_0(VAR_4, "cannot hold"));
  switch (VAR_8) {
  case 128:
   FUNC_9(VAR_10, FUNC_0(VAR_4,
       "pool must be upgraded"));
   (void) FUNC_8(VAR_10, VAR_1, VAR_11);
   break;
  case 129:
   (void) FUNC_8(VAR_10, VAR_0, VAR_11);
   break;
  default:
   (void) FUNC_10(VAR_10, VAR_8, VAR_11);
  }
 }

 for (VAR_12 = FUNC_5(VAR_9, ((void*)0));
     VAR_12 != ((void*)0);
     VAR_12 = FUNC_5(VAR_9, VAR_12)) {
  (void) FUNC_7(VAR_11, sizeof (VAR_11),
      FUNC_0(VAR_4,
      "cannot hold snapshot '%s'"), FUNC_6(VAR_12));
  switch (FUNC_2(VAR_12)) {
  case 131:






   (void) FUNC_8(VAR_10, VAR_3, VAR_11);
   break;
  case 129:
   (void) FUNC_8(VAR_10, VAR_0, VAR_11);
   break;
  case 130:
   (void) FUNC_8(VAR_10, VAR_2, VAR_11);
   break;
  default:
   (void) FUNC_10(VAR_10,
       FUNC_2(VAR_12), VAR_11);
  }
 }

 FUNC_1(VAR_9);
 return (VAR_8);
}
