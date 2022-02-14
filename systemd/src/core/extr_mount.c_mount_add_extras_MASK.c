
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int description; int id; scalar_t__ fragment_path; } ;
typedef TYPE_1__ Unit ;
struct TYPE_16__ {int from_fragment; int exec_context; int where; } ;
typedef TYPE_2__ Mount ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_12(Mount *VAR_0) {
        Unit *VAR_1 = FUNC_0(VAR_0);
        int VAR_2;

        FUNC_1(VAR_0);





        if (VAR_1->fragment_path)
                VAR_0->from_fragment = 1;

        if (!VAR_0->where) {
                VAR_2 = FUNC_8(VAR_1->id, &VAR_0->where);
                if (VAR_2 < 0)
                        return VAR_2;
        }

        FUNC_6(VAR_0->where, 0);

        if (!VAR_1->description) {
                VAR_2 = FUNC_11(VAR_1, VAR_0->where);
                if (VAR_2 < 0)
                        return VAR_2;
        }

        VAR_2 = FUNC_3(VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_4(VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_5(VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_9(VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_7(VAR_1, &VAR_0->exec_context);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_10(VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_2(VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        return 0;
}
