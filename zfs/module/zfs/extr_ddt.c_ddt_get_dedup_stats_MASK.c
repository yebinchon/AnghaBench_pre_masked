
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;
typedef int ddt_stat_t ;
typedef int ddt_histogram_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int,int ) ;

void
FUNC_4(spa_t *VAR_1, ddt_stat_t *VAR_2)
{
 ddt_histogram_t *VAR_3;

 VAR_3 = FUNC_3(sizeof (ddt_histogram_t), VAR_0);
 FUNC_0(VAR_1, VAR_3);
 FUNC_1(VAR_2, VAR_3);
 FUNC_2(VAR_3, sizeof (ddt_histogram_t));
}
