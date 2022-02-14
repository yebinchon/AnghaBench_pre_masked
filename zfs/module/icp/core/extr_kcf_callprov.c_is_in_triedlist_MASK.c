
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kcf_provider_desc_t ;
struct TYPE_3__ {struct TYPE_3__* pt_next; int * pt_pd; } ;
typedef TYPE_1__ kcf_prov_tried_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_0(kcf_provider_desc_t *VAR_2, kcf_prov_tried_t *VAR_3)
{
 while (VAR_3 != ((void*)0)) {
  if (VAR_3->pt_pd == VAR_2)
   return (VAR_1);
  VAR_3 = VAR_3->pt_next;
 };

 return (VAR_0);
}
