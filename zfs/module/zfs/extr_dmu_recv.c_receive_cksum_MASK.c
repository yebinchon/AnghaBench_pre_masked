
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int drc_cksum; scalar_t__ drc_byteswap; } ;
typedef TYPE_1__ dmu_recv_cookie_t ;


 int FUNC_0 (void*,int,int *) ;
 int FUNC_1 (void*,int,int *) ;

__attribute__((used)) static void
FUNC_2(dmu_recv_cookie_t *VAR_0, int VAR_1, void *VAR_2)
{
 if (VAR_0->drc_byteswap) {
  (void) FUNC_0(VAR_2, VAR_1,
      &VAR_0->drc_cksum);
 } else {
  (void) FUNC_1(VAR_2, VAR_1, &VAR_0->drc_cksum);
 }
}
