
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int fsprg_state; int seal; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(JournalFile *VAR_1, uint64_t VAR_2) {
        uint64_t VAR_3, VAR_4;
        int VAR_5;
        FUNC_1(VAR_1);

        if (!VAR_1->seal)
                return 0;

        VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_4 = FUNC_0(VAR_1->fsprg_state);
        if (VAR_4 > VAR_3)
                return -VAR_0;

        return VAR_4 != VAR_3;
}
