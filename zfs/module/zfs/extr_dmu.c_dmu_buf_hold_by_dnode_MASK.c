
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dnode_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int ,void*,int **) ;

int
FUNC_3(dnode_t *VAR_5, uint64_t VAR_6,
    void *VAR_7, dmu_buf_t **VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11 = VAR_0;

 if (VAR_9 & VAR_4)
  VAR_11 |= VAR_1;
 if (VAR_9 & VAR_3)
  VAR_11 |= VAR_2;

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_10 == 0) {
  dmu_buf_impl_t *VAR_12 = (dmu_buf_impl_t *)(*VAR_8);
  VAR_10 = FUNC_0(VAR_12, ((void*)0), VAR_11);
  if (VAR_10 != 0) {
   FUNC_1(VAR_12, VAR_7);
   *VAR_8 = ((void*)0);
  }
 }

 return (VAR_10);
}
