
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
struct zfs_open_bookmarks_cb_data {char const* member_0; TYPE_1__* zhp; int * member_1; } ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int dsname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ,char*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,struct zfs_open_bookmarks_cb_data*) ;
 int VAR_7 ;
 int FUNC_9 (int *,scalar_t__,char*) ;
 int FUNC_10 (int *,char const*,int,int ) ;

zfs_handle_t *
FUNC_11(libzfs_handle_t *VAR_8, const char *VAR_9, int VAR_10)
{
 zfs_handle_t *VAR_11;
 char VAR_12[1024];
 char *VAR_13;

 (void) FUNC_3(VAR_12, sizeof (VAR_12),
     FUNC_1(VAR_4, "cannot open '%s'"), VAR_9);




 if (!FUNC_10(VAR_8, VAR_9, VAR_10, VAR_0)) {
  (void) FUNC_7(VAR_8, VAR_2, VAR_12);
  return (((void*)0));
 }




 VAR_13 = FUNC_4(VAR_9, '#');
 if (VAR_13 == ((void*)0)) {




  VAR_6 = 0;
  if ((VAR_11 = FUNC_2(VAR_8, VAR_9)) == ((void*)0)) {
   (void) FUNC_9(VAR_8, VAR_6, VAR_12);
   return (((void*)0));
  }
 } else {
  char VAR_14[VAR_5];
  zfs_handle_t *VAR_15;
  struct zfs_open_bookmarks_cb_data VAR_16 = {VAR_9, ((void*)0)};





  FUNC_0(VAR_13 - VAR_9 < sizeof (VAR_14));
  (void) FUNC_5(VAR_14, VAR_9, VAR_13 - VAR_9);
  VAR_14[VAR_13 - VAR_9] = '\0';




  VAR_6 = 0;
  if ((VAR_15 = FUNC_2(VAR_8, VAR_14)) == ((void*)0)) {
   (void) FUNC_9(VAR_8, VAR_6, VAR_12);
   return (((void*)0));
  }




  VAR_6 = 0;
  if ((FUNC_8(VAR_15, VAR_7,
      &VAR_16) == 0) && (VAR_16.zhp == ((void*)0))) {
   (void) FUNC_7(VAR_8, VAR_3, VAR_12);
   FUNC_6(VAR_15);
   return (((void*)0));
  }
  if (VAR_16.zhp == ((void*)0)) {
   (void) FUNC_9(VAR_8, VAR_6, VAR_12);
   FUNC_6(VAR_15);
   return (((void*)0));
  }
  VAR_11 = VAR_16.zhp;




  FUNC_6(VAR_15);
 }

 if (!(VAR_10 & VAR_11->zfs_type)) {
  (void) FUNC_7(VAR_8, VAR_1, VAR_12);
  FUNC_6(VAR_11);
  return (((void*)0));
 }

 return (VAR_11);
}
