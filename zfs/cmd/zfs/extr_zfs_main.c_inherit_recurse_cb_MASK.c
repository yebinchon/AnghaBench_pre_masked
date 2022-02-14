
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
typedef int zfs_handle_t ;
struct TYPE_2__ {int cb_received; int cb_propname; } ;
typedef TYPE_1__ inherit_cbdata_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_2, void *VAR_3)
{
 inherit_cbdata_t *VAR_4 = VAR_3;
 zfs_prop_t VAR_5 = FUNC_1(VAR_4->cb_propname);





 if (VAR_5 != VAR_1 &&
     !FUNC_3(VAR_5, FUNC_0(VAR_2), VAR_0))
  return (0);

 return (FUNC_2(VAR_2, VAR_4->cb_propname, VAR_4->cb_received) != 0);
}
