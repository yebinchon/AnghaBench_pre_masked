
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zpool_prop_t ;
struct TYPE_3__ {int * zpool_props; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,char**) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static const char *
FUNC_6(zpool_handle_t *VAR_3, zpool_prop_t VAR_4,
    zprop_source_t *VAR_5)
{
 nvlist_t *VAR_6, *VAR_7;
 uint64_t VAR_8;
 char *VAR_9;
 zprop_source_t VAR_10;

 VAR_7 = VAR_3->zpool_props;
 if (FUNC_0(VAR_7, FUNC_5(VAR_4), &VAR_6) == 0) {
  FUNC_3(FUNC_2(VAR_6, VAR_0, &VAR_8) == 0);
  VAR_10 = VAR_8;
  FUNC_3(FUNC_1(VAR_6, VAR_2, &VAR_9) == 0);
 } else {
  VAR_10 = VAR_1;
  if ((VAR_9 = (char *)FUNC_4(VAR_4)) == ((void*)0))
   VAR_9 = "-";
 }

 if (VAR_5)
  *VAR_5 = VAR_10;

 return (VAR_9);
}
