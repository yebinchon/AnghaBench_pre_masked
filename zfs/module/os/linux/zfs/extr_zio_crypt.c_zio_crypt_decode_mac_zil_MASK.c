
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * zc_word; } ;
struct TYPE_5__ {TYPE_1__ zec_cksum; } ;
struct TYPE_6__ {TYPE_2__ zc_eck; } ;
typedef TYPE_3__ zil_chain_t ;
typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int *,int *,int) ;

void
FUNC_1(const void *VAR_0, uint8_t *VAR_1)
{





 const zil_chain_t *VAR_2 = VAR_0;

 FUNC_0(&VAR_2->zc_eck.zec_cksum.zc_word[2], VAR_1, sizeof (uint64_t));
 FUNC_0(&VAR_2->zc_eck.zec_cksum.zc_word[3], VAR_1 + sizeof (uint64_t),
     sizeof (uint64_t));
}
