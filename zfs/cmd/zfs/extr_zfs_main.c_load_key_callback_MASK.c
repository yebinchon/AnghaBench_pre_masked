
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int cb_numfailed; int cb_keylocation; int cb_noop; scalar_t__ cb_loadkey; int cb_numattempted; scalar_t__ cb_recursive; } ;
typedef TYPE_1__ loadkey_cbdata_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_3, void *VAR_4)
{
 int VAR_5;
 boolean_t VAR_6;
 loadkey_cbdata_t *VAR_7 = VAR_4;
 uint64_t VAR_8 = FUNC_3(VAR_3, VAR_2);






 if (VAR_7->cb_recursive) {
  VAR_5 = FUNC_0(VAR_3, &VAR_6, ((void*)0));
  if (VAR_5 != 0)
   return (VAR_5);
  if (!VAR_6)
   return (0);

  if ((VAR_7->cb_loadkey && VAR_8 == VAR_0) ||
      (!VAR_7->cb_loadkey && VAR_8 == VAR_1))
   return (0);
 }

 VAR_7->cb_numattempted++;

 if (VAR_7->cb_loadkey)
  VAR_5 = FUNC_1(VAR_3, VAR_7->cb_noop, VAR_7->cb_keylocation);
 else
  VAR_5 = FUNC_2(VAR_3);

 if (VAR_5 != 0) {
  VAR_7->cb_numfailed++;
  return (VAR_5);
 }

 return (0);
}
