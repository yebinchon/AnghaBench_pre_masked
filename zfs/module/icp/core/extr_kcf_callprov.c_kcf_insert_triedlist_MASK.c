
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int kcf_provider_desc_t ;
struct TYPE_5__ {struct TYPE_5__* pt_next; int * pt_pd; } ;
typedef TYPE_1__ kcf_prov_tried_t ;


 TYPE_1__* FUNC_0 (int,int) ;

kcf_prov_tried_t *
FUNC_1(kcf_prov_tried_t **VAR_0, kcf_provider_desc_t *VAR_1,
    int VAR_2)
{
 kcf_prov_tried_t *VAR_3;

 VAR_3 = FUNC_0(sizeof (kcf_prov_tried_t), VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3->pt_pd = VAR_1;
 VAR_3->pt_next = *VAR_0;
 *VAR_0 = VAR_3;

 return (VAR_3);
}
