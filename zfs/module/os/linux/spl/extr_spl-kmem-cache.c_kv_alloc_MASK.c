
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int skc_flags; } ;
typedef TYPE_1__ spl_kmem_cache_t ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int,int ) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int,int) ;

__attribute__((used)) static void *
FUNC_8(spl_kmem_cache_t *VAR_6, int VAR_7, int VAR_8)
{
 gfp_t VAR_9 = FUNC_6(VAR_8);
 void *VAR_10;

 if (VAR_6->skc_flags & VAR_1) {
  FUNC_0(FUNC_1(VAR_7));
  VAR_10 = (void *)FUNC_3(VAR_9, FUNC_5(VAR_7));
 } else if (VAR_6->skc_flags & VAR_2) {
  VAR_10 = FUNC_7(VAR_7, VAR_9);
 } else {
  if ((VAR_9 & VAR_0) == VAR_0) {
   VAR_10 = FUNC_7(VAR_7, VAR_9);
  } else {
   VAR_10 = FUNC_4(VAR_7, VAR_9 | VAR_5,
       VAR_3);
  }
 }


 FUNC_0(FUNC_2(VAR_10, VAR_4));

 return (VAR_10);
}
