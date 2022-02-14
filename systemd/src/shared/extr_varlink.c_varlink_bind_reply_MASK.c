
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ VarlinkReply ;
struct TYPE_4__ {scalar_t__ reply_callback; } ;
typedef TYPE_1__ Varlink ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(Varlink *VAR_2, VarlinkReply VAR_3) {
        FUNC_0(VAR_2, -VAR_1);

        if (VAR_3 && VAR_2->reply_callback && VAR_3 != VAR_2->reply_callback)
                return -VAR_0;

        VAR_2->reply_callback = VAR_3;

        return 0;
}
