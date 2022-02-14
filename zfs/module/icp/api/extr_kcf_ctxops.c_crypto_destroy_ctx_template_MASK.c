
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ct_size; struct TYPE_4__* ct_prov_tmpl; } ;
typedef TYPE_1__ kcf_ctx_template_t ;
typedef scalar_t__ crypto_ctx_template_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(crypto_ctx_template_t VAR_0)
{
 kcf_ctx_template_t *VAR_1 = (kcf_ctx_template_t *)VAR_0;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1->ct_prov_tmpl != ((void*)0));

 FUNC_1(VAR_1->ct_prov_tmpl, VAR_1->ct_size);
 FUNC_2(VAR_1->ct_prov_tmpl, VAR_1->ct_size);
 FUNC_2(VAR_1, sizeof (kcf_ctx_template_t));
}
