
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; int timestamp; } ;
typedef TYPE_1__ ClientContext ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1) {
        const ClientContext *VAR_2 = VAR_0, *VAR_3 = VAR_1;
        int VAR_4;

        VAR_4 = FUNC_0(VAR_2->timestamp, VAR_3->timestamp);
        if (VAR_4 != 0)
                return VAR_4;

        return FUNC_0(VAR_2->pid, VAR_3->pid);
}
