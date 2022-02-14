
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int p_timeout ;
typedef int p_io ;
typedef TYPE_1__* p_buffer ;
struct TYPE_3__ {int birthday; scalar_t__ sent; scalar_t__ received; int tm; int io; scalar_t__ last; scalar_t__ first; } ;


 int FUNC_0 () ;

void FUNC_1(p_buffer VAR_0, p_io VAR_1, p_timeout VAR_2) {
    VAR_0->first = VAR_0->last = 0;
    VAR_0->io = VAR_1;
    VAR_0->tm = VAR_2;
    VAR_0->received = VAR_0->sent = 0;
    VAR_0->birthday = FUNC_0();
}
