
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int spl_kmem_slab_t ;
struct TYPE_5__ {int skc_flags; } ;
typedef TYPE_1__ spl_kmem_cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(spl_kmem_cache_t *VAR_7, uint32_t *VAR_8, uint32_t *VAR_9)
{
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_7->skc_flags & VAR_2) {
  VAR_14 = VAR_6;
  VAR_13 = FUNC_2(sizeof (spl_kmem_slab_t), VAR_3);

  if ((VAR_7->skc_flags & VAR_1) &&
      (FUNC_4(VAR_7) > (VAR_4 * VAR_3)))
   return (-VAR_0);
 } else {
  VAR_10 = FUNC_5(VAR_7);
  VAR_11 = FUNC_4(VAR_7);
  VAR_12 = (VAR_5 * 1024 * 1024);
  VAR_13 = (VAR_6 * VAR_11 + VAR_10);







  if (VAR_7->skc_flags & VAR_1) {
   VAR_12 = VAR_4 * VAR_3;
   VAR_13 = FUNC_1(VAR_12,
       VAR_3 * (1 << FUNC_0(FUNC_3(VAR_13) - 1, 1)));
  }

  if (VAR_13 <= VAR_12) {
   VAR_14 = (VAR_13 - VAR_10) / VAR_11;
  } else {
   VAR_14 = (VAR_12 - VAR_10) / VAR_11;
   VAR_13 = (VAR_14 * VAR_11) + VAR_10;
  }
 }

 if (VAR_14 == 0)
  return (-VAR_0);

 *VAR_8 = VAR_14;
 *VAR_9 = VAR_13;

 return (0);
}
