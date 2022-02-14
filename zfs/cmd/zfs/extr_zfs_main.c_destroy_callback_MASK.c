
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {int cb_snap_count; int cb_error; scalar_t__ cb_recurse; scalar_t__ cb_defer_destroy; scalar_t__ cb_force; int cb_batchedsnaps; scalar_t__ cb_dryrun; scalar_t__ cb_parsable; scalar_t__ cb_verbose; } ;
typedef TYPE_1__ destroy_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 int * FUNC_4 (char*,char) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_10(zfs_handle_t *VAR_4, void *VAR_5)
{
 destroy_cbdata_t *VAR_6 = VAR_5;
 const char *VAR_7 = FUNC_7(VAR_4);
 int VAR_8;

 if (VAR_6->cb_verbose) {
  if (VAR_6->cb_parsable) {
   (void) FUNC_3("destroy\t%s\n", VAR_7);
  } else if (VAR_6->cb_dryrun) {
   (void) FUNC_3(FUNC_2("would destroy %s\n"),
       VAR_7);
  } else {
   (void) FUNC_3(FUNC_2("will destroy %s\n"),
       VAR_7);
  }
 }





 if (FUNC_4(FUNC_7(VAR_4), '/') == ((void*)0) &&
     FUNC_8(VAR_4) == VAR_2) {
  FUNC_5(VAR_4);
  return (0);
 }
 if (VAR_6->cb_dryrun) {
  FUNC_5(VAR_4);
  return (0);
 }







 if (FUNC_8(VAR_4) == VAR_3) {
  VAR_6->cb_snap_count++;
  FUNC_1(VAR_6->cb_batchedsnaps, VAR_7);
  if (VAR_6->cb_snap_count % 10 == 0 && VAR_6->cb_defer_destroy)
   VAR_8 = FUNC_0(VAR_6);
 } else {
  VAR_8 = FUNC_0(VAR_6);
  if (VAR_8 != 0 ||
      FUNC_9(VAR_4, ((void*)0), VAR_6->cb_force ? VAR_1 : 0) != 0 ||
      FUNC_6(VAR_4, VAR_6->cb_defer_destroy) != 0) {
   FUNC_5(VAR_4);





   if (VAR_6->cb_recurse) {
    VAR_6->cb_error = VAR_0;
    return (0);
   }
   return (-1);
  }
 }

 FUNC_5(VAR_4);
 return (0);
}
