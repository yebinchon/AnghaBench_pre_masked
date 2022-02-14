
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msg {int error; int err; struct msg* peer; } ;
typedef scalar_t__ rstatus_t ;
struct TYPE_2__ {int len; int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct msg*,int ,int ) ;
 TYPE_1__ VAR_2 ;

void
FUNC_1(struct msg *VAR_3)
{
    rstatus_t VAR_4;
    struct msg *VAR_5 = VAR_3->peer;

    VAR_4 = FUNC_0(VAR_5, VAR_2.data, VAR_2.len);
    if (VAR_4 != VAR_0) {
        VAR_5->error = 1;
        VAR_5->err = VAR_1;
    }
}
