
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zfs_hdl; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int pthread_t ;
typedef int errbuf ;
struct TYPE_7__ {int outputfd; int inputfd; int dedup_hdl; } ;
typedef TYPE_2__ dedup_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,int ,TYPE_2__*) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (int ,int ,int ,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(zfs_handle_t *VAR_7, dedup_arg_t *VAR_8, int VAR_9, pthread_t *VAR_10,
    int *VAR_11)
{
 int VAR_12[2];
 char VAR_13[1024];
 int VAR_14;
 (void) FUNC_3(VAR_13, sizeof (VAR_13), FUNC_1(VAR_4,
     "warning: cannot send '%s'"), VAR_7->zfs_name);
 if ((VAR_14 = FUNC_4(VAR_0, VAR_3, 0, VAR_12)) != 0) {
  FUNC_7(VAR_7->zfs_hdl, FUNC_5(VAR_6));
  return (FUNC_6(VAR_7->zfs_hdl, VAR_1,
      VAR_13));
 }
 VAR_8->outputfd = VAR_9;
 VAR_8->inputfd = VAR_12[1];
 VAR_8->dedup_hdl = VAR_7->zfs_hdl;
 if ((VAR_14 = FUNC_2(VAR_10, ((void*)0), VAR_5, VAR_8)) != 0) {
  (void) FUNC_0(VAR_12[0]);
  (void) FUNC_0(VAR_12[1]);
  FUNC_7(VAR_7->zfs_hdl, FUNC_5(VAR_14));
  return (FUNC_6(VAR_7->zfs_hdl, VAR_2,
      VAR_13));
 }
 *VAR_11 = VAR_12[0];
 return (0);
}
