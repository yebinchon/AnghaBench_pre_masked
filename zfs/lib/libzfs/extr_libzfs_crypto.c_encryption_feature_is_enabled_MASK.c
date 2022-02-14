
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;
struct TYPE_2__ {int fi_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 TYPE_1__* VAR_5 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static boolean_t
FUNC_3(zpool_handle_t *VAR_6)
{
 nvlist_t *VAR_7;
 uint64_t VAR_8;


 if (FUNC_2(VAR_6, VAR_4, ((void*)0))
     < VAR_3)
  return (VAR_0);


 VAR_7 = FUNC_1(VAR_6);
 if (!VAR_7 || FUNC_0(VAR_7,
     VAR_5[VAR_2].fi_guid,
     &VAR_8) != 0)
  return (VAR_0);

 return (VAR_1);
}
