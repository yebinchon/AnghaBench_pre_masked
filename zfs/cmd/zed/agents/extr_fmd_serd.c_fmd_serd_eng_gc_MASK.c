
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ hrtime_t ;
struct TYPE_9__ {scalar_t__ sg_count; int sg_flags; scalar_t__ sg_t; int sg_list; } ;
typedef TYPE_1__ fmd_serd_eng_t ;
struct TYPE_10__ {scalar_t__ se_hrt; } ;
typedef TYPE_2__ fmd_serd_elem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*) ;

void
FUNC_3(fmd_serd_eng_t *VAR_2)
{
 fmd_serd_elem_t *VAR_3, *VAR_4;
 hrtime_t VAR_5;

 if (VAR_2->sg_count == 0 || (VAR_2->sg_flags & VAR_1))
  return;

 VAR_3 = FUNC_1(&VAR_2->sg_list);
 if (VAR_3 == ((void*)0))
  return;

 VAR_5 = VAR_3->se_hrt - VAR_2->sg_t;

 for (VAR_3 = FUNC_1(&VAR_2->sg_list); VAR_3 != ((void*)0); VAR_3 = VAR_4) {
  if (VAR_3->se_hrt >= VAR_5)
   break;

  VAR_4 = FUNC_2(&VAR_2->sg_list, VAR_3);
  FUNC_0(VAR_2, VAR_3);
  VAR_2->sg_flags |= VAR_0;
 }
}
