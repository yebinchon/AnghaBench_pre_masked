
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ zfs_type; int zfs_name; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,char*,int,int *,int *,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static boolean_t
FUNC_6(zfs_handle_t *VAR_9, zfs_handle_t *VAR_10)
{
 boolean_t VAR_11;
 uint64_t VAR_12 =
     (VAR_10->zfs_type == VAR_7 ||
     VAR_10->zfs_type == VAR_8 ?
     VAR_2 : FUNC_5(VAR_10, VAR_4));
 uint64_t VAR_13 = FUNC_5(VAR_9, VAR_4);

 if (VAR_13 >= VAR_12)
  return (VAR_0);

 zfs_handle_t *VAR_14 = FUNC_0(VAR_9->zfs_hdl,
     VAR_9->zfs_name);
 zfs_handle_t *VAR_15 = FUNC_0(VAR_10->zfs_hdl,
     VAR_10->zfs_name);

 if (FUNC_1(VAR_14->zfs_name, VAR_15->zfs_name) == 0) {
  FUNC_2(VAR_14);
  FUNC_2(VAR_15);
  return (VAR_1);
 }

 char VAR_16[VAR_3];
 if (FUNC_4(VAR_15, VAR_5, VAR_16,
     VAR_3, ((void*)0), ((void*)0), 0, VAR_1) != 0) {
  FUNC_2(VAR_14);
  FUNC_2(VAR_15);
  return (VAR_0);
 }

 zfs_handle_t *VAR_17 = FUNC_3(VAR_9->zfs_hdl, VAR_16,
     VAR_6);
 uint64_t VAR_18 = FUNC_5(VAR_17, VAR_4);






 if (VAR_18 == VAR_13 &&
     FUNC_1(VAR_17->zfs_name, VAR_9->zfs_name) == 0) {
  FUNC_2(VAR_14);
  FUNC_2(VAR_15);
  FUNC_2(VAR_17);
  return (VAR_1);
 }
 FUNC_2(VAR_14);
 FUNC_2(VAR_15);

 VAR_11 = FUNC_6(VAR_9, VAR_17);
 FUNC_2(VAR_17);
 return (VAR_11);
}
