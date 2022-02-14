
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (void const*,scalar_t__,int *,int *) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (void const*,scalar_t__,int *,int *) ;

__attribute__((used)) static inline void
FUNC_4(boolean_t VAR_1, const void *VAR_2, uint64_t VAR_3,
    zio_cksum_t *VAR_4)
{
 while (VAR_3 > 0) {
  zio_cksum_t VAR_5;
  uint64_t VAR_6 = FUNC_0(VAR_3, VAR_0);

  if (VAR_1)
   FUNC_3(VAR_2, VAR_6, ((void*)0), &VAR_5);
  else
   FUNC_1(VAR_2, VAR_6, ((void*)0), &VAR_5);

  FUNC_2(VAR_4, VAR_6, &VAR_5);

  VAR_3 -= VAR_6;
  VAR_2 += VAR_6;
 }
}
