
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zc_name; int zc_defer_destroy; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;
typedef int namebuf ;
typedef scalar_t__ dmu_objset_type_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 char* VAR_6 ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(zfs_cmd_t *VAR_7)
{
 objset_t *VAR_8;
 dmu_objset_type_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7->zc_name, VAR_4, &VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);
 VAR_9 = FUNC_3(VAR_8);
 FUNC_2(VAR_8, VAR_4);

 if (VAR_9 == VAR_0)
  FUNC_8(VAR_7->zc_name);

 if (FUNC_7(VAR_7->zc_name, '@')) {
  VAR_10 = FUNC_5(VAR_7->zc_name, VAR_7->zc_defer_destroy);
 } else {
  VAR_10 = FUNC_4(VAR_7->zc_name);
  if (VAR_10 == VAR_1) {
   char VAR_11[VAR_5 + 6];

   if (FUNC_6(VAR_11, sizeof (VAR_11), "%s/%s",
       VAR_7->zc_name, VAR_6) >=
       sizeof (VAR_11))
    return (FUNC_0(VAR_2));







   VAR_10 = FUNC_4(VAR_11);
   if (VAR_10 == 0)
    VAR_10 = FUNC_4(VAR_7->zc_name);
   else if (VAR_10 == VAR_3)
    VAR_10 = FUNC_0(VAR_1);
  }
 }

 return (VAR_10);
}
