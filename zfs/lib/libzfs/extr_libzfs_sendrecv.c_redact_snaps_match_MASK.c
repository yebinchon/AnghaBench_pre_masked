
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zfs_type; int zfs_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int num_redact_snaps; scalar_t__* redact_snap_guids; } ;
typedef TYPE_2__ guid_to_name_data_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ) ;
 scalar_t__* FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int ) ;

boolean_t
FUNC_3(zfs_handle_t *VAR_4, guid_to_name_data_t *VAR_5)
{
 uint64_t *VAR_6;
 uint_t VAR_7;
 nvlist_t *VAR_8;
 if (VAR_4->zfs_type != VAR_2)
  return (VAR_0);

 VAR_8 = FUNC_0(VAR_4->zfs_props,
     FUNC_2(VAR_1));
 VAR_6 = FUNC_1(VAR_8, VAR_3,
     &VAR_7);
 if (VAR_7 != VAR_5->num_redact_snaps)
  return (VAR_0);
 int VAR_9 = 0;
 for (; VAR_9 < VAR_7; VAR_9++) {
  int VAR_10 = 0;
  for (; VAR_10 < VAR_7; VAR_10++) {
   if (VAR_6[VAR_9] == VAR_5->redact_snap_guids[VAR_10])
    break;
  }
  if (VAR_10 == VAR_7)
   break;
 }
 return (VAR_9 == VAR_7);
}
