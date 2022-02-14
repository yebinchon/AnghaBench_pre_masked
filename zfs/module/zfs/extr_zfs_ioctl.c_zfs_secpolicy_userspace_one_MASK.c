
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t zc_objset_type; scalar_t__* zc_value; scalar_t__ zc_guid; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 int * VAR_10 ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_11, nvlist_t *VAR_12, cred_t *VAR_13)
{
 int VAR_14 = FUNC_3(VAR_11, VAR_12, VAR_13);
 if (VAR_14)
  return (VAR_14);

 if (VAR_11->zc_objset_type >= VAR_1)
  return (FUNC_0(VAR_0));

 if (VAR_11->zc_value[0] == 0) {




  if (VAR_11->zc_objset_type == VAR_9 ||
      VAR_11->zc_objset_type == VAR_8 ||
      VAR_11->zc_objset_type == VAR_7 ||
      VAR_11->zc_objset_type == VAR_6) {
   if (VAR_11->zc_guid == FUNC_1(VAR_13))
    return (0);
  } else if (VAR_11->zc_objset_type == VAR_5 ||
      VAR_11->zc_objset_type == VAR_4 ||
      VAR_11->zc_objset_type == VAR_3 ||
      VAR_11->zc_objset_type == VAR_2) {
   if (FUNC_2(VAR_11->zc_guid, VAR_13))
    return (0);
  }

 }

 return (FUNC_4(VAR_11->zc_name,
     VAR_10[VAR_11->zc_objset_type], VAR_13));
}
