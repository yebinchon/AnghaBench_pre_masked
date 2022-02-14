
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ToxAV ;
struct TYPE_2__ {int incoming; } ;
typedef TYPE_1__ CallControl ;


 int FUNC_0 (char*) ;

void FUNC_1(ToxAV *VAR_0, uint32_t VAR_1, bool VAR_2, bool VAR_3, void *VAR_4)
{
    (void) VAR_0;
    (void) VAR_2;
    (void) VAR_3;

    FUNC_0("Handling CALL callback\n");
    ((CallControl *)VAR_4)[VAR_1].incoming = 1;
}
