
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sh_count; int sh_hashlen; int sh_hash; } ;
typedef TYPE_1__ fmd_serd_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

void
FUNC_1(fmd_serd_hash_t *VAR_1)
{
 VAR_1->sh_hashlen = VAR_0;
 VAR_1->sh_hash = FUNC_0(VAR_1->sh_hashlen, sizeof (void *));
 VAR_1->sh_count = 0;
}
