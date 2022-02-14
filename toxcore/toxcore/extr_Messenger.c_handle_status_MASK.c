
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {scalar_t__ status; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int VAR_3, uint8_t VAR_4)
{
    Messenger *VAR_5 = VAR_2;

    if (VAR_4) {
        FUNC_0(VAR_5, VAR_3);
    } else {
        if (VAR_5->friendlist[VAR_3].status == VAR_1) {
            FUNC_1(VAR_5, VAR_3, VAR_0);
        }
    }

    return 0;
}
