
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int * sav_config; } ;
typedef TYPE_1__ spa_aux_vdev_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int ** FUNC_1 (int,int ) ;
 int FUNC_2 (int **,int) ;
 scalar_t__ FUNC_3 (int *,char const*,int **,int) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int **,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char const*,int ***,int*) ;
 scalar_t__ FUNC_8 (int *,char const*,int ) ;

__attribute__((used)) static void
FUNC_9(spa_aux_vdev_t *VAR_3, nvlist_t **VAR_4, int VAR_5,
    const char *VAR_6)
{
 int VAR_7;

 if (VAR_3->sav_config != ((void*)0)) {
  nvlist_t **VAR_8;
  uint_t VAR_9;
  nvlist_t **VAR_10;





  FUNC_0(FUNC_7(VAR_3->sav_config, VAR_6,
      &VAR_8, &VAR_9) == 0);

  VAR_10 = FUNC_1(sizeof (void *) *
      (VAR_5 + VAR_9), VAR_1);
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
   FUNC_0(FUNC_5(VAR_8[VAR_7], &VAR_10[VAR_7],
       VAR_1) == 0);
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
   FUNC_0(FUNC_5(VAR_4[VAR_7], &VAR_10[VAR_7 + VAR_9],
       VAR_1) == 0);

  FUNC_0(FUNC_8(VAR_3->sav_config, VAR_6,
      VAR_0) == 0);

  FUNC_0(FUNC_3(VAR_3->sav_config,
      VAR_6, VAR_10, VAR_5 + VAR_9) == 0);
  for (VAR_7 = 0; VAR_7 < VAR_9 + VAR_5; VAR_7++)
   FUNC_6(VAR_10[VAR_7]);
  FUNC_2(VAR_10, (VAR_9 + VAR_5) * sizeof (void *));
 } else {



  FUNC_0(FUNC_4(&VAR_3->sav_config, VAR_2,
      VAR_1) == 0);
  FUNC_0(FUNC_3(VAR_3->sav_config, VAR_6,
      VAR_4, VAR_5) == 0);
 }
}
