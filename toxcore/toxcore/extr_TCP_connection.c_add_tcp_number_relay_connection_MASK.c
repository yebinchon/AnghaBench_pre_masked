
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status; int public_key; } ;
struct TYPE_6__ {scalar_t__ status; int unsleep; int connected_time; } ;
typedef TYPE_1__ TCP_con ;
typedef int TCP_Connections ;
typedef TYPE_2__ TCP_Connection_to ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,unsigned int) ;
 scalar_t__ FUNC_3 (int *,unsigned int,int ) ;
 int FUNC_4 () ;

int FUNC_5(TCP_Connections *VAR_2, int VAR_3, unsigned int VAR_4)
{
    TCP_Connection_to *VAR_5 = FUNC_1(VAR_2, VAR_3);

    if (!VAR_5)
        return -1;

    TCP_con *VAR_6 = FUNC_2(VAR_2, VAR_4);

    if (!VAR_6)
        return -1;

    if (VAR_5->status != VAR_1 && VAR_6->status == VAR_1) {
        VAR_6->unsleep = 1;
    }

    if (FUNC_0(VAR_5, VAR_4) == -1)
        return -1;

    if (VAR_6->status == VAR_0) {
        if (FUNC_3(VAR_2, VAR_4, VAR_5->public_key) == 0) {
            VAR_6->connected_time = FUNC_4();
        }
    }

    return 0;
}
