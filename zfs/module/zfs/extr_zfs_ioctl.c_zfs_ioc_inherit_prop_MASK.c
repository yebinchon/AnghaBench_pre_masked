
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zprop_type_t ;
typedef int zprop_source_t ;
typedef scalar_t__ zfs_prop_t ;
struct TYPE_3__ {char* zc_value; int zc_name; scalar_t__ zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char const*,char*) ;
 int FUNC_5 (int *,char const*,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static int
FUNC_13(zfs_cmd_t *VAR_6)
{
 const char *VAR_7 = VAR_6->zc_value;
 zfs_prop_t VAR_8 = FUNC_8(VAR_7);
 boolean_t VAR_9 = VAR_6->zc_cookie;
 zprop_source_t VAR_10 = (VAR_9
     ? VAR_5
     : VAR_4);
 nvlist_t *VAR_11;
 nvpair_t *VAR_12;
 zprop_type_t VAR_13;
 int VAR_14;

 if (!VAR_9) {






  if (VAR_8 != VAR_3 && !FUNC_10(VAR_8))
   return (FUNC_0(VAR_0));
 }

 if (VAR_8 == VAR_3) {
  if (!FUNC_12(VAR_7))
   return (FUNC_0(VAR_0));

  VAR_13 = 128;
 } else if (VAR_8 == VAR_2 || VAR_8 == VAR_1) {
  return (FUNC_0(VAR_0));
 } else {
  VAR_13 = FUNC_9(VAR_8);
 }





 VAR_11 = FUNC_3();

 switch (VAR_13) {
 case 128:
  FUNC_1(0 == FUNC_4(VAR_11, VAR_7, ""));
  break;
 case 129:
 case 130:
  FUNC_1(0 == FUNC_5(VAR_11, VAR_7, 0));
  break;
 default:
  VAR_14 = FUNC_0(VAR_0);
  goto errout;
 }

 VAR_12 = FUNC_7(VAR_11, ((void*)0));
 if (VAR_12 == ((void*)0)) {
  VAR_14 = FUNC_0(VAR_0);
 } else {
  VAR_14 = FUNC_11(VAR_6->zc_name, VAR_10, VAR_12);
  if (VAR_14 == -1)
   VAR_14 = FUNC_2(VAR_6->zc_name, VAR_6->zc_value,
       VAR_10);
 }

errout:
 FUNC_6(VAR_11);
 return (VAR_14);
}
