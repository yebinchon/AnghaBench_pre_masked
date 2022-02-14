
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msg_tqh {int dummy; } ;
struct msg {int type; int keys; } ;
typedef int rstatus_t ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct msg*,int ,struct msg_tqh*,int) ;

rstatus_t
FUNC_2(struct msg *VAR_1, uint32_t VAR_2, struct msg_tqh *VAR_3)
{
    if (1 == FUNC_0(VAR_1->keys)){
        return VAR_0;
    }

    switch (VAR_1->type) {
    case 129:
    case 130:
        return FUNC_1(VAR_1, VAR_2, VAR_3, 1);

    case 128:
        return FUNC_1(VAR_1, VAR_2, VAR_3, 2);

    default:
        return VAR_0;
    }
}
