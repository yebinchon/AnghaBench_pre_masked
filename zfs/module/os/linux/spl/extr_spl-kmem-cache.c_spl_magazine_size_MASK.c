
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int spl_kmem_cache_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(spl_kmem_cache_t *VAR_2)
{
 uint32_t VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 if (VAR_1 > 0)
  return (FUNC_0(FUNC_1(VAR_1, 256), 2));


 if (VAR_3 > (VAR_0 * 256))
  VAR_4 = 4;
 else if (VAR_3 > (VAR_0 * 32))
  VAR_4 = 16;
 else if (VAR_3 > (VAR_0))
  VAR_4 = 64;
 else if (VAR_3 > (VAR_0 / 4))
  VAR_4 = 128;
 else
  VAR_4 = 256;

 return (VAR_4);
}
