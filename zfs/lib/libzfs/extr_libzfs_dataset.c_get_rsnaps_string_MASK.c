
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zfs_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int nvlist_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__**,scalar_t__*) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(zfs_handle_t *VAR_2, char *VAR_3, size_t VAR_4)
{
 nvlist_t *VAR_5;
 uint64_t *VAR_6;
 uint_t VAR_7;

 if (FUNC_0(VAR_2->zfs_props,
     FUNC_4(VAR_0), &VAR_5) != 0)
  return (-1);
 if (FUNC_1(VAR_5, VAR_1, &VAR_6,
     &VAR_7) != 0)
  return (-1);
 if (VAR_7 == 0) {

  (void) FUNC_2(VAR_3, VAR_4, "none");
  return (0);
 }
 VAR_3[0] = '\0';
 for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  char VAR_9[128];
  if (VAR_3[0] != '\0')
   (void) FUNC_3(VAR_3, ",", VAR_4);
  (void) FUNC_2(VAR_9, sizeof (VAR_9), "%llu",
      (u_longlong_t)VAR_6[VAR_8]);
  (void) FUNC_3(VAR_3, VAR_9, VAR_4);
 }

 return (0);
}
