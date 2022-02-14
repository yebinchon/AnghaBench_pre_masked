
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ out_buffer_full; int master; scalar_t__ master_readable; } ;
typedef TYPE_1__ PTYForward ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static bool FUNC_3(PTYForward *VAR_3) {
        int VAR_4 = 0;

        FUNC_0(VAR_3);

        if (VAR_3->out_buffer_full > 0)
                return 0;

        if (VAR_3->master_readable)
                return 0;

        if (FUNC_1(VAR_3->master, VAR_0, &VAR_4) < 0)
                FUNC_2(VAR_2, "TIOCINQ failed on master: %m");
        else if (VAR_4 > 0)
                return 0;

        if (FUNC_1(VAR_3->master, VAR_1, &VAR_4) < 0)
                FUNC_2(VAR_2, "TIOCOUTQ failed on master: %m");
        else if (VAR_4 > 0)
                return 0;

        return 1;
}
