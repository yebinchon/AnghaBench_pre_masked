
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zpool_prop_t ;
struct TYPE_9__ {int * zpool_props; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,size_t,char*,...) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (int,char*,size_t) ;
 int FUNC_4 (int,char*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 char const* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int *) ;
 char const* FUNC_8 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 char const* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int,char const**) ;

int
FUNC_13(zpool_handle_t *VAR_4, zpool_prop_t VAR_5, char *VAR_6,
    size_t VAR_7, zprop_source_t *VAR_8, boolean_t VAR_9)
{
 uint64_t VAR_10;
 const char *VAR_11;
 zprop_source_t VAR_12 = VAR_3;

 if (FUNC_9(VAR_4) == VAR_0) {
  switch (VAR_5) {
  case 130:
   (void) FUNC_2(VAR_6, FUNC_6(VAR_4), VAR_7);
   break;

  case 132:
   (void) FUNC_2(VAR_6, FUNC_10(VAR_4), VAR_7);
   break;

  case 133:
   VAR_10 = FUNC_7(VAR_4, VAR_5, &VAR_12);
   (void) FUNC_1(VAR_6, VAR_7, "%llu", (u_longlong_t)VAR_10);
   break;

  case 144:
  case 142:
  case 139:
   if (VAR_4->zpool_props != ((void*)0) ||
       FUNC_5(VAR_4) == 0) {
    (void) FUNC_2(VAR_6,
        FUNC_8(VAR_4, VAR_5, &VAR_12),
        VAR_7);
    break;
   }

  default:
   (void) FUNC_2(VAR_6, "-", VAR_7);
   break;
  }

  if (VAR_8 != ((void*)0))
   *VAR_8 = VAR_12;
  return (0);
 }

 if (VAR_4->zpool_props == ((void*)0) && FUNC_5(VAR_4) &&
     VAR_5 != 130)
  return (-1);

 switch (FUNC_11(VAR_5)) {
 case 146:
  (void) FUNC_2(VAR_6, FUNC_8(VAR_4, VAR_5, &VAR_12),
      VAR_7);
  break;

 case 147:
  VAR_10 = FUNC_7(VAR_4, VAR_5, &VAR_12);

  switch (VAR_5) {
  case 129:
  case 145:
  case 135:
  case 134:
  case 131:
  case 143:
   if (VAR_9)
    (void) FUNC_1(VAR_6, VAR_7, "%llu",
        (u_longlong_t)VAR_10);
   else
    (void) FUNC_4(VAR_10, VAR_6, VAR_7);
   break;

  case 137:
  case 140:
   if (VAR_10 == 0) {
    (void) FUNC_2(VAR_6, "-", VAR_7);
   } else if (VAR_9) {
    (void) FUNC_1(VAR_6, VAR_7, "%llu",
        (u_longlong_t)VAR_10);
   } else {
    (void) FUNC_3(VAR_10, VAR_6, VAR_7);
   }
   break;

  case 141:
   if (VAR_9) {
    (void) FUNC_1(VAR_6, VAR_7, "%llu",
        (u_longlong_t)VAR_10);
   } else {
    (void) FUNC_1(VAR_6, VAR_7, "%llu%%",
        (u_longlong_t)VAR_10);
   }
   break;

  case 136:
   if (VAR_10 == VAR_2) {
    (void) FUNC_2(VAR_6, "-", VAR_7);
   } else if (VAR_9) {
    (void) FUNC_1(VAR_6, VAR_7, "%llu",
        (u_longlong_t)VAR_10);
   } else {
    (void) FUNC_1(VAR_6, VAR_7, "%llu%%",
        (u_longlong_t)VAR_10);
   }
   break;

  case 138:
   if (VAR_9)
    (void) FUNC_1(VAR_6, VAR_7, "%llu.%02llu",
        (u_longlong_t)(VAR_10 / 100),
        (u_longlong_t)(VAR_10 % 100));
   else
    (void) FUNC_1(VAR_6, VAR_7, "%llu.%02llux",
        (u_longlong_t)(VAR_10 / 100),
        (u_longlong_t)(VAR_10 % 100));
   break;

  case 132:
   (void) FUNC_2(VAR_6, FUNC_10(VAR_4), VAR_7);
   break;
  case 128:
   if (VAR_10 >= VAR_1) {
    (void) FUNC_1(VAR_6, VAR_7, "-");
    break;
   }

  default:
   (void) FUNC_1(VAR_6, VAR_7, "%llu", (u_longlong_t)VAR_10);
  }
  break;

 case 148:
  VAR_10 = FUNC_7(VAR_4, VAR_5, &VAR_12);
  if (FUNC_12(VAR_5, VAR_10, &VAR_11)
      != 0)
   return (-1);
  (void) FUNC_2(VAR_6, VAR_11, VAR_7);
  break;

 default:
  FUNC_0();
 }

 if (VAR_8)
  *VAR_8 = VAR_12;

 return (0);
}
