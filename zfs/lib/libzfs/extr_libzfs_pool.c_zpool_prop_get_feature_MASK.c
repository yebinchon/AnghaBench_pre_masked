
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef size_t spa_feature_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {char* fi_guid; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,char const*,scalar_t__*) ;
 TYPE_1__* VAR_8 ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char const*,size_t*) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

int
FUNC_9(zpool_handle_t *VAR_9, const char *VAR_10, char *VAR_11,
    size_t VAR_12)
{
 uint64_t VAR_13;
 boolean_t VAR_14 = VAR_0;
 nvlist_t *VAR_15 = FUNC_6(VAR_9);
 boolean_t VAR_16;
 const char *VAR_17 = FUNC_2(VAR_10, '@') + 1;

 VAR_16 = FUNC_7(VAR_10);
 FUNC_0(VAR_16 || FUNC_8(VAR_10));






 if (VAR_16) {
  int VAR_18;
  spa_feature_t VAR_19;

  VAR_18 = FUNC_5(VAR_17, &VAR_19);
  if (VAR_18 != 0) {
   (void) FUNC_4(VAR_11, "-", VAR_12);
   return (VAR_2);
  }
  VAR_17 = VAR_8[VAR_19].fi_guid;
 }

 if (FUNC_1(VAR_15, VAR_17, &VAR_13) == 0)
  VAR_14 = VAR_1;

 if (VAR_16) {
  if (!VAR_14) {
   (void) FUNC_4(VAR_11, VAR_4, VAR_12);
  } else {
   if (VAR_13 == 0)
    (void) FUNC_4(VAR_11, VAR_5, VAR_12);
   else
    (void) FUNC_4(VAR_11, VAR_3, VAR_12);
  }
 } else {
  if (VAR_14) {
   if (VAR_13 == 0) {
    (void) FUNC_3(VAR_11, VAR_6);
   } else {
    (void) FUNC_3(VAR_11, VAR_7);
   }
  } else {
   (void) FUNC_4(VAR_11, "-", VAR_12);
   return (VAR_2);
  }
 }

 return (0);
}
