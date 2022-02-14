
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int spa_l2cache; int spa_spares; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(spa_t *VAR_8, nvlist_t *VAR_9, uint64_t VAR_10, int VAR_11)
{
 int VAR_12;

 FUNC_0(FUNC_1(VAR_8, VAR_1, VAR_0) == VAR_1);

 if ((VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11,
     &VAR_8->spa_spares, VAR_7, VAR_3,
     VAR_5)) != 0) {
  return (VAR_12);
 }

 return (FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11,
     &VAR_8->spa_l2cache, VAR_6, VAR_2,
     VAR_4));
}
