
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_2__ {int cb_received; int cb_propname; } ;
typedef TYPE_1__ inherit_cbdata_t ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_1(zfs_handle_t *VAR_0, void *VAR_1)
{
 inherit_cbdata_t *VAR_2 = VAR_1;

 return (FUNC_0(VAR_0, VAR_2->cb_propname, VAR_2->cb_received) != 0);
}
