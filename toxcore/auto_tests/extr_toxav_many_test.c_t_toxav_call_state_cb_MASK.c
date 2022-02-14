
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ToxAV ;
struct TYPE_2__ {int state; } ;
typedef TYPE_1__ CallControl ;


 int FUNC_0 (char*,int,int *) ;

void FUNC_1(ToxAV *VAR_0, uint32_t VAR_1, uint32_t VAR_2, void *VAR_3)
{
    FUNC_0("Handling CALL STATE callback: %d %p\n", VAR_2, VAR_0);
    ((CallControl *)VAR_3)[VAR_1].state = VAR_2;
}
