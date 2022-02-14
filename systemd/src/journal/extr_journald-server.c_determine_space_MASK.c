
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int limit; int available; } ;
struct TYPE_10__ {TYPE_1__ space; } ;
struct TYPE_9__ {TYPE_3__ runtime_storage; TYPE_3__ system_storage; scalar_t__ system_journal; } ;
typedef TYPE_2__ Server ;
typedef TYPE_3__ JournalStorage ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(Server *VAR_0, uint64_t *VAR_1, uint64_t *VAR_2) {
        JournalStorage *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);

        VAR_3 = VAR_0->system_journal ? &VAR_0->system_storage : &VAR_0->runtime_storage;

        VAR_4 = FUNC_1(VAR_0, VAR_3);
        if (VAR_4 >= 0) {
                if (VAR_1)
                        *VAR_1 = VAR_3->space.available;
                if (VAR_2)
                        *VAR_2 = VAR_3->space.limit;
        }
        return VAR_4;
}
