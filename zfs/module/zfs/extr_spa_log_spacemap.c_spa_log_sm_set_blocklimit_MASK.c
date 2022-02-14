
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int sus_blocklimit; } ;
struct TYPE_8__ {TYPE_1__ spa_unflushed_stats; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(spa_t *VAR_4)
{
 if (!FUNC_3(VAR_4, VAR_0)) {
  FUNC_0(FUNC_4(VAR_4));
  return;
 }

 uint64_t VAR_5 =
     (FUNC_5(VAR_4) * VAR_3) / 100;
 VAR_4->spa_unflushed_stats.sus_blocklimit = FUNC_2(FUNC_1(VAR_5,
     VAR_2), VAR_1);
}
