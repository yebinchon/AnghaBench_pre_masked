
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_6__ {size_t pd_prov_id; scalar_t__ pd_kcf_prov_handle; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef scalar_t__ crypto_kcf_provider_handle_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_6(kcf_provider_desc_t *VAR_7)
{
 uint_t VAR_8;

 FUNC_0(VAR_4 != ((void*)0));

 FUNC_4(&VAR_5);


 for (VAR_8 = 1; VAR_8 < VAR_3 && VAR_4[VAR_8] != ((void*)0); VAR_8++)
  ;
 if (VAR_8 == VAR_3) {

  FUNC_5(&VAR_5);
  FUNC_3(VAR_0, "out of providers entries");
  return (VAR_1);
 }


 VAR_4[VAR_8] = VAR_7;
 FUNC_2(VAR_7);
 FUNC_1(VAR_7);
 VAR_6++;

 FUNC_5(&VAR_5);


 VAR_7->pd_prov_id = VAR_8;





 VAR_7->pd_kcf_prov_handle =
     (crypto_kcf_provider_handle_t)VAR_7->pd_prov_id;

 return (VAR_2);
}
