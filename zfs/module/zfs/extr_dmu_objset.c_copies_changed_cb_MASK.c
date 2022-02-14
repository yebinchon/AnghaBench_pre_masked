
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ os_copies; int os_spa; } ;
typedef TYPE_1__ objset_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, uint64_t VAR_1)
{
 objset_t *VAR_2 = VAR_0;




 FUNC_0(VAR_1 > 0);
 FUNC_0(VAR_1 <= FUNC_1(VAR_2->os_spa));

 VAR_2->os_copies = VAR_1;
}
