
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ zpool_prop_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int spa_name; } ;
typedef TYPE_1__ spa_t ;
typedef int nvpair_t ;
typedef scalar_t__ nvlist_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,int *,int ,scalar_t__*,int,int ) ;
 int * FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(spa_t *VAR_11, nvlist_t *VAR_12)
{
 int VAR_13;
 nvpair_t *VAR_14 = ((void*)0);
 boolean_t VAR_15 = VAR_0;

 if ((VAR_13 = FUNC_6(VAR_11, VAR_12)) != 0)
  return (VAR_13);

 while ((VAR_14 = FUNC_3(VAR_12, VAR_14)) != ((void*)0)) {
  zpool_prop_t VAR_16 = FUNC_8(FUNC_4(VAR_14));

  if (VAR_16 == VAR_5 ||
      VAR_16 == VAR_4 ||
      VAR_16 == VAR_7)
   continue;

  if (VAR_16 == VAR_8 || VAR_16 == VAR_6) {
   uint64_t VAR_17;

   if (VAR_16 == VAR_8) {
    FUNC_1(FUNC_5(VAR_14, &VAR_17) == 0);
   } else {
    FUNC_0(FUNC_9(FUNC_4(VAR_14)));
    VAR_17 = VAR_2;
    VAR_15 = VAR_1;
   }


   if (VAR_17 == FUNC_7(VAR_11))
    continue;







   VAR_13 = FUNC_2(VAR_11->spa_name, ((void*)0),
       VAR_10, &VAR_17,
       6, VAR_3);
   if (VAR_13)
    return (VAR_13);
   continue;
  }

  VAR_15 = VAR_1;
  break;
 }

 if (VAR_15) {
  return (FUNC_2(VAR_11->spa_name, ((void*)0), VAR_9,
      VAR_12, 6, VAR_3));
 }

 return (0);
}
