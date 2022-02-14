
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int p_send ;
typedef int p_recv ;
typedef TYPE_1__* p_io ;
typedef int p_error ;
struct TYPE_3__ {void* ctx; int error; int recv; int send; } ;



void FUNC_0(p_io VAR_0, p_send VAR_1, p_recv VAR_2, p_error VAR_3, void *VAR_4) {
    VAR_0->send = VAR_1;
    VAR_0->recv = VAR_2;
    VAR_0->error = VAR_3;
    VAR_0->ctx = VAR_4;
}
