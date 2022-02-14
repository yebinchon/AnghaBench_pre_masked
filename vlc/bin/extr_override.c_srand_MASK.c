
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int seed; int lock; } ;


 int FUNC_0 (char*,char*,unsigned int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3 (unsigned int VAR_1)
{
    FUNC_1 (&VAR_0.lock);
    FUNC_0("Warning", "%u", VAR_1);
    VAR_0.seed = VAR_1;
    FUNC_2 (&VAR_0.lock);
}
