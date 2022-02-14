
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {int force; scalar_t__ hardforce; } ;
typedef TYPE_1__ export_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int
FUNC_3(zpool_handle_t *VAR_3, void *VAR_4)
{
 export_cbdata_t *VAR_5 = VAR_4;

 if (FUNC_0(VAR_3, VAR_5->force) != 0)
  return (1);


 VAR_2 = VAR_0;

 if (VAR_5->hardforce) {
  if (FUNC_2(VAR_3, VAR_1) != 0)
   return (1);
 } else if (FUNC_1(VAR_3, VAR_5->force, VAR_1) != 0) {
  return (1);
 }

 return (0);
}
