
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t zfs_share_proto_t ;
typedef int * sa_share_t ;
struct TYPE_7__ {int libzfs_sharehdl; } ;
typedef TYPE_1__ libzfs_handle_t ;
struct TYPE_8__ {int p_unshare_err; int p_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 TYPE_6__* VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,char const*,...) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 char* FUNC_7 (TYPE_1__*,char const*) ;

int
FUNC_8(libzfs_handle_t *VAR_4, const char *VAR_5, const char *VAR_6,
    zfs_share_proto_t VAR_7)
{
 sa_share_t VAR_8;
 int VAR_9;
 char *VAR_10;





 VAR_10 = FUNC_7(VAR_4, VAR_6);


 if ((VAR_9 = FUNC_6(VAR_4, VAR_0)) != VAR_1) {
  FUNC_1(VAR_10);
  return (FUNC_5(VAR_4, VAR_3[VAR_7].p_unshare_err,
      FUNC_0(VAR_2, "cannot unshare '%s': %s"),
      VAR_5, FUNC_3(VAR_9)));
 }

 VAR_8 = FUNC_4(VAR_4->libzfs_sharehdl, VAR_10);
 FUNC_1(VAR_10);

 if (VAR_8 != ((void*)0)) {
  VAR_9 = FUNC_2(VAR_8, VAR_3[VAR_7].p_name);
  if (VAR_9 != VAR_1) {
   return (FUNC_5(VAR_4,
       VAR_3[VAR_7].p_unshare_err,
       FUNC_0(VAR_2, "cannot unshare '%s': %s"),
       VAR_5, FUNC_3(VAR_9)));
  }
 } else {
  return (FUNC_5(VAR_4, VAR_3[VAR_7].p_unshare_err,
      FUNC_0(VAR_2, "cannot unshare '%s': not found"),
      VAR_5));
 }
 return (0);
}
