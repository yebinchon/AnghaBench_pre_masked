
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int error; int err; int integer; struct msg* peer; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct msg*,char*,int ) ;

void
FUNC_1(struct msg *VAR_2)
{
    struct msg *VAR_3 = VAR_2->peer;
    rstatus_t VAR_4;

    VAR_4 = FUNC_0(VAR_3, ":%d\r\n", VAR_2->integer);
    if (VAR_4 != VAR_0) {
        VAR_3->error = 1;
        VAR_3->err = VAR_1;
    }
}
