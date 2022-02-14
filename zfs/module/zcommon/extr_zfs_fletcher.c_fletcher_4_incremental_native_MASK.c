
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef int fletcher_4_ctx_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,void*,size_t,int *) ;
 int FUNC_1 (int *,void*,size_t) ;

int
FUNC_2(void *VAR_2, size_t VAR_3, void *VAR_4)
{
 zio_cksum_t *VAR_5 = VAR_4;

 if (VAR_3 < VAR_1)
  FUNC_1((fletcher_4_ctx_t *)VAR_5, VAR_2, VAR_3);
 else
  FUNC_0(VAR_0, VAR_2, VAR_3, VAR_5);
 return (0);
}
