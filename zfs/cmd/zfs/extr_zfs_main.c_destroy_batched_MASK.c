
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cb_batchedsnaps; } ;
typedef TYPE_1__ destroy_cbdata_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(destroy_cbdata_t *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1,
     VAR_2->cb_batchedsnaps, VAR_0);
 FUNC_1(VAR_2->cb_batchedsnaps);
 VAR_2->cb_batchedsnaps = FUNC_0();
 return (VAR_3);
}
