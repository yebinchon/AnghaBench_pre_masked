
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* rl_phys; } ;
typedef TYPE_2__ redaction_list_t ;
struct TYPE_4__ {int rlp_num_entries; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline unsigned int
FUNC_1(redaction_list_t *VAR_0, unsigned int VAR_1, uint64_t VAR_2)
{
 if (VAR_2 == (VAR_0->rl_phys->rlp_num_entries - 1) /
     FUNC_0(VAR_1)) {
  return ((VAR_0->rl_phys->rlp_num_entries - 1) %
      FUNC_0(VAR_1));
 }
 return (FUNC_0(VAR_1) - 1);
}
