
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_8__ {int result; int state; } ;
typedef TYPE_1__ Path ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(Unit *VAR_4) {
        Path *VAR_5 = FUNC_1(VAR_4);
        int VAR_6;

        FUNC_2(VAR_5);
        FUNC_2(FUNC_0(VAR_5->state, VAR_0, VAR_1));

        VAR_6 = FUNC_8(VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_7(VAR_4);
        if (VAR_6 < 0) {
                FUNC_3(VAR_5, VAR_2);
                return VAR_6;
        }

        VAR_6 = FUNC_6(VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        FUNC_5(VAR_5);

        VAR_5->result = VAR_3;
        FUNC_4(VAR_5, 1, 1);

        return 1;
}
