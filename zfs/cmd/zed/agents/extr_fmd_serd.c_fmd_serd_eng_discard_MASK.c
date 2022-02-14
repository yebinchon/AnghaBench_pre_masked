
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sg_count; int sg_name; int sg_list; } ;
typedef TYPE_1__ fmd_serd_eng_t ;
typedef int fmd_serd_elem_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_3(fmd_serd_eng_t *VAR_0, fmd_serd_elem_t *VAR_1)
{
 FUNC_1(&VAR_0->sg_list, VAR_1);
 VAR_0->sg_count--;

 FUNC_2("  SERD Engine: discarding %s, %d remaining",
     VAR_0->sg_name, (int)VAR_0->sg_count);

 FUNC_0(VAR_1);
}
