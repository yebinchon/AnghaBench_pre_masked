
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dmu_tx_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;
typedef int arc_buf_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int *) ;

int
FUNC_4(dmu_buf_t *VAR_0, uint64_t VAR_1, arc_buf_t *VAR_2,
    dmu_tx_t *VAR_3)
{
 int VAR_4;
 dmu_buf_impl_t *VAR_5 = (dmu_buf_impl_t *)VAR_0;

 FUNC_1(VAR_5);
 VAR_4 = FUNC_3(FUNC_0(VAR_5), VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_5);

 return (VAR_4);
}
