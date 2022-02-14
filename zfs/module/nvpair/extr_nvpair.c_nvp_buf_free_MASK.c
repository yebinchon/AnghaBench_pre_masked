
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nvpriv_t ;
struct TYPE_6__ {size_t nvp_size; } ;
typedef TYPE_1__ nvpair_t ;
struct TYPE_7__ {scalar_t__ nvl_priv; } ;
typedef TYPE_2__ nvlist_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,size_t) ;
 int VAR_1 ;
 size_t FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(nvlist_t *VAR_2, nvpair_t *VAR_3)
{
 nvpriv_t *VAR_4 = (nvpriv_t *)(uintptr_t)VAR_2->nvl_priv;
 size_t VAR_5 = VAR_3->nvp_size + FUNC_2(VAR_0, VAR_1);

 FUNC_1(VAR_4, FUNC_0(VAR_3), VAR_5);
}
