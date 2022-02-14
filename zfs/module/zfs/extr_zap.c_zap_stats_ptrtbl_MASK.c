
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zap_t ;
typedef int zap_stats_t ;
typedef int zap_leaf_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int *,int ,int **) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(zap_t *VAR_1, uint64_t *VAR_2, int VAR_3, zap_stats_t *VAR_4)
{
 uint64_t VAR_5 = 0;






 for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  zap_leaf_t *VAR_7;

  if (VAR_2[VAR_6] == VAR_5)
   continue;
  VAR_5 = VAR_2[VAR_6];

  int VAR_8 = FUNC_0(VAR_1, VAR_2[VAR_6], ((void*)0), VAR_0, &VAR_7);
  if (VAR_8 == 0) {
   FUNC_1(VAR_1, VAR_7, VAR_4);
   FUNC_2(VAR_7);
  }
 }
}
