
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pd_flags; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
struct TYPE_10__ {int pi_logical_provider_count; scalar_t__* pi_logical_providers; } ;
typedef TYPE_2__ crypto_provider_info_t ;
typedef scalar_t__ crypto_provider_id_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(crypto_provider_info_t *VAR_1, kcf_provider_desc_t *VAR_2)
{
 kcf_provider_desc_t *VAR_3;
 crypto_provider_id_t VAR_4;
 int VAR_5 = VAR_1->pi_logical_provider_count;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4 = VAR_1->pi_logical_providers[VAR_6];
  VAR_3 = FUNC_2((crypto_provider_id_t)VAR_4);
  if (VAR_3 == ((void*)0)) {
   continue;
  }
  FUNC_1(VAR_2, VAR_3);
  VAR_2->pd_flags |= VAR_0;







  FUNC_1(VAR_3, VAR_2);
  FUNC_0(VAR_3);
 }
}
