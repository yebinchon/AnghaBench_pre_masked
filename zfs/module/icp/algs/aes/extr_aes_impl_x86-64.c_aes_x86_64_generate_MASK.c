
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int * ks32; } ;
struct TYPE_5__ {int * ks32; } ;
struct TYPE_7__ {TYPE_2__ decr_ks; int nr; TYPE_1__ encr_ks; } ;
typedef TYPE_3__ aes_key_t ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static void
FUNC_2(aes_key_t *VAR_0, const uint32_t *VAR_1, int VAR_2)
{
 VAR_0->nr = FUNC_1(&(VAR_0->encr_ks.ks32[0]),
     VAR_1, VAR_2);
 VAR_0->nr = FUNC_0(&(VAR_0->decr_ks.ks32[0]),
     VAR_1, VAR_2);
}
