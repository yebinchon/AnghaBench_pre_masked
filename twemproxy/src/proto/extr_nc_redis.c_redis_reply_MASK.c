
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msg {int type; struct conn* owner; struct msg* peer; } ;
struct conn {int dummy; } ;
typedef int rstatus_t ;
struct TYPE_4__ {int len; int data; } ;
struct TYPE_3__ {int len; int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct conn*) ;
 int FUNC_3 (struct msg*,int ,int ) ;
 int FUNC_4 (struct msg*,struct msg*) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

rstatus_t
FUNC_5(struct msg *VAR_4)
{
    struct conn *VAR_5;
    struct msg *VAR_6 = VAR_4->peer;

    FUNC_0(VAR_6 != ((void*)0) && VAR_6->owner != ((void*)0));

    VAR_5 = VAR_6->owner;
    if (VAR_4->type == VAR_0) {
        return FUNC_4(VAR_4, VAR_6);
    }

    if (!FUNC_2(VAR_5)) {
        return FUNC_3(VAR_6, VAR_2.data, VAR_2.len);
    }

    switch (VAR_4->type) {
    case 128:
        return FUNC_3(VAR_6, VAR_3.data, VAR_3.len);

    default:
        FUNC_1();
        return VAR_1;
    }
}
