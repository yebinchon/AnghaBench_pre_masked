
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {TYPE_1__* net; } ;
typedef TYPE_2__ Tox ;
struct TYPE_5__ {int port; } ;
typedef int TOX_ERR_GET_PORT ;
typedef TYPE_2__ Messenger ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

uint16_t FUNC_2(const Tox *VAR_2, TOX_ERR_GET_PORT *VAR_3)
{
    const Messenger *VAR_4 = VAR_2;
    uint16_t VAR_5 = FUNC_1(VAR_4->net->port);

    if (VAR_5) {
        FUNC_0(VAR_3, VAR_1);
    } else {
        FUNC_0(VAR_3, VAR_0);
    }

    return VAR_5;
}
