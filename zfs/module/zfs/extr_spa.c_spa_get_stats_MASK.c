
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {int tv_nsec; int tv_sec; } ;
struct TYPE_15__ {int spa_suspended; int spa_failmode; TYPE_1__ spa_loaded_ts; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,char*,size_t) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (char const*) ;
 int VAR_7 ;
 int FUNC_14 (char const*,TYPE_2__**,int ,int *,int **) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;

int
FUNC_16(const char *VAR_8, nvlist_t **VAR_9,
    char *VAR_10, size_t VAR_11)
{
 int VAR_12;
 spa_t *VAR_13;

 *VAR_9 = ((void*)0);
 VAR_12 = FUNC_14(VAR_8, &VAR_13, VAR_0, ((void*)0), VAR_9);

 if (VAR_13 != ((void*)0)) {





  FUNC_10(VAR_13, VAR_2, VAR_0, VAR_1);

  if (*VAR_9 != ((void*)0)) {
   uint64_t VAR_14[2];

   VAR_14[0] = VAR_13->spa_loaded_ts.tv_sec;
   VAR_14[1] = VAR_13->spa_loaded_ts.tv_nsec;
   FUNC_0(FUNC_4(*VAR_9,
       VAR_4, VAR_14, 2) == 0);

   FUNC_0(FUNC_3(*VAR_9,
       VAR_3,
       FUNC_12(VAR_13)) == 0);

   if (FUNC_15(VAR_13)) {
    FUNC_0(FUNC_3(*VAR_9,
        VAR_5,
        VAR_13->spa_failmode) == 0);
    FUNC_0(FUNC_3(*VAR_9,
        VAR_6,
        VAR_13->spa_suspended) == 0);
   }

   FUNC_7(VAR_13, *VAR_9);
   FUNC_6(VAR_13, *VAR_9);
   FUNC_5(VAR_13, *VAR_9);
  }
 }





 if (VAR_10) {
  if (VAR_13 == ((void*)0)) {
   FUNC_1(&VAR_7);
   VAR_13 = FUNC_13(VAR_8);
   if (VAR_13)
    FUNC_8(VAR_13, VAR_10, VAR_11);
   else
    VAR_10[0] = '\0';
   VAR_13 = ((void*)0);
   FUNC_2(&VAR_7);
  } else {
   FUNC_8(VAR_13, VAR_10, VAR_11);
  }
 }

 if (VAR_13 != ((void*)0)) {
  FUNC_11(VAR_13, VAR_2, VAR_0);
  FUNC_9(VAR_13, VAR_0);
 }

 return (VAR_12);
}
