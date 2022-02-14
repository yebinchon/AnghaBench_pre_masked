
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int seal; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(JournalFile *VAR_1, uint64_t VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);

        if (!VAR_1->seal)
                return 0;

        if (VAR_2 <= 0)
                VAR_2 = FUNC_4(VAR_0);

        VAR_3 = FUNC_3(VAR_1, VAR_2);
        if (VAR_3 <= 0)
                return 0;

        VAR_3 = FUNC_1(VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_2(VAR_1, VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
