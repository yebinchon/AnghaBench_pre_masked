
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_cookie; char* zc_name; char* zc_value; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;
typedef scalar_t__ dmu_objset_type_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int *,int *) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 int FUNC_3 (char*,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int VAR_5 ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_10(zfs_cmd_t *VAR_6)
{
 objset_t *VAR_7;
 dmu_objset_type_t VAR_8;
 boolean_t VAR_9 = VAR_6->zc_cookie & 1;
 char *VAR_10;
 int VAR_11;


 VAR_6->zc_name[sizeof (VAR_6->zc_name) - 1] = '\0';
 VAR_6->zc_value[sizeof (VAR_6->zc_value) - 1] = '\0';
 if (FUNC_1(VAR_6->zc_name, ((void*)0), ((void*)0)) != 0 ||
     FUNC_1(VAR_6->zc_value, ((void*)0), ((void*)0)) != 0 ||
     FUNC_8(VAR_6->zc_name, '%') || FUNC_8(VAR_6->zc_value, '%'))
  return (FUNC_0(VAR_2));

 VAR_11 = FUNC_3(VAR_6->zc_name, VAR_4, &VAR_7);
 if (VAR_11 != 0)
  return (VAR_11);
 VAR_8 = FUNC_5(VAR_7);
 FUNC_4(VAR_7, VAR_4);

 VAR_10 = FUNC_8(VAR_6->zc_name, '@');
 if (VAR_10 != ((void*)0)) {

  int VAR_12;

  if (FUNC_9(VAR_6->zc_name, VAR_6->zc_value, VAR_10 - VAR_6->zc_name + 1))
   return (FUNC_0(VAR_3));
  *VAR_10 = '\0';
  if (VAR_8 == VAR_0) {
   VAR_12 = FUNC_2(VAR_6->zc_name,
       VAR_5, VAR_10 + 1,
       VAR_9 ? VAR_1 : 0);
   if (VAR_12 != 0) {
    *VAR_10 = '@';
    return (VAR_12);
   }
  }
  VAR_12 = FUNC_6(VAR_6->zc_name,
      VAR_10 + 1, FUNC_8(VAR_6->zc_value, '@') + 1, VAR_9);
  *VAR_10 = '@';

  return (VAR_12);
 } else {
  return (FUNC_7(VAR_6->zc_name, VAR_6->zc_value));
 }
}
