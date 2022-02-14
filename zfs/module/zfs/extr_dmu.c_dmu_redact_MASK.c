
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
typedef int dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ,int*,int ***) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int,int ) ;

void
FUNC_4(objset_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    dmu_tx_t *VAR_6)
{
 int VAR_7, VAR_8;
 dmu_buf_t **VAR_9;

 FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_0, VAR_1,
     &VAR_7, &VAR_9));
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_2(VAR_9[VAR_8], VAR_6);
 FUNC_3(VAR_9, VAR_7, VAR_1);
}
