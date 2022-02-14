
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int dnode_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int,void*,int **) ;

int
FUNC_4(dmu_buf_t *VAR_3, uint32_t VAR_4, void *VAR_5,
    dmu_buf_t **VAR_6)
{
 dmu_buf_impl_t *VAR_7 = (dmu_buf_impl_t *)VAR_3;
 dnode_t *VAR_8;
 int VAR_9;
 uint32_t VAR_10 = VAR_0;

 if (VAR_4 & VAR_2)
  VAR_10 |= VAR_1;

 FUNC_1(VAR_7);
 VAR_8 = FUNC_0(VAR_7);
 VAR_9 = FUNC_3(VAR_8, VAR_10, VAR_5, VAR_6);
 FUNC_2(VAR_7);

 return (VAR_9);
}
