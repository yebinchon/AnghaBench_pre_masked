
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int fletcher_4_ctx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (void const*,scalar_t__ const,int *) ;
 int FUNC_5 (int *,char*,scalar_t__) ;

void
FUNC_6(const void *VAR_1, uint64_t VAR_2,
    const void *VAR_3, zio_cksum_t *VAR_4)
{
 const uint64_t VAR_5 = FUNC_2(VAR_2, VAR_0);

 FUNC_0(FUNC_1(VAR_2, sizeof (uint32_t)));

 if (VAR_2 == 0 || VAR_5 == 0) {
  FUNC_3(VAR_4, 0, 0, 0, 0);

  if (VAR_2 > 0)
   FUNC_5((fletcher_4_ctx_t *)VAR_4,
       VAR_1, VAR_2);
 } else {
  FUNC_4(VAR_1, VAR_5, VAR_4);

  if (VAR_5 < VAR_2)
   FUNC_5((fletcher_4_ctx_t *)VAR_4,
       (char *)VAR_1 + VAR_5, VAR_2 - VAR_5);
 }
}
