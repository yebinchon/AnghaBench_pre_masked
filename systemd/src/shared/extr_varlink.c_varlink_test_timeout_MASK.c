
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ timeout; int timestamp; int state; } ;
typedef TYPE_1__ Varlink ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(Varlink *VAR_5) {
        FUNC_1(VAR_5);

        if (!FUNC_0(VAR_5->state, VAR_2, VAR_3))
                return 0;
        if (VAR_5->timeout == VAR_1)
                return 0;

        if (FUNC_2(VAR_0) < FUNC_3(VAR_5->timestamp, VAR_5->timeout))
                return 0;

        FUNC_4(VAR_5, VAR_4);

        return 1;
}
