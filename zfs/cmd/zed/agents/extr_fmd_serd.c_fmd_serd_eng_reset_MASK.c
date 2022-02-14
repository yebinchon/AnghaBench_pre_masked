
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sg_count; int sg_flags; int sg_list; int sg_name; } ;
typedef TYPE_1__ fmd_serd_eng_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(fmd_serd_eng_t *VAR_2)
{
 FUNC_2("  SERD Engine: resetting %s", VAR_2->sg_name);

 while (VAR_2->sg_count != 0)
  FUNC_0(VAR_2, FUNC_1(&VAR_2->sg_list));

 VAR_2->sg_flags &= ~VAR_1;
 VAR_2->sg_flags |= VAR_0;
}
