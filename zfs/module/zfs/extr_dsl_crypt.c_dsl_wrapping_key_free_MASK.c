
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ck_length; TYPE_2__* ck_data; } ;
struct TYPE_7__ {int wk_refcnt; TYPE_1__ wk_key; } ;
typedef TYPE_2__ dsl_wrapping_key_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(dsl_wrapping_key_t *VAR_0)
{
 FUNC_0(FUNC_4(&VAR_0->wk_refcnt));

 if (VAR_0->wk_key.ck_data) {
  FUNC_2(VAR_0->wk_key.ck_data,
      FUNC_1(VAR_0->wk_key.ck_length));
  FUNC_3(VAR_0->wk_key.ck_data,
      FUNC_1(VAR_0->wk_key.ck_length));
 }

 FUNC_5(&VAR_0->wk_refcnt);
 FUNC_3(VAR_0, sizeof (dsl_wrapping_key_t));
}
