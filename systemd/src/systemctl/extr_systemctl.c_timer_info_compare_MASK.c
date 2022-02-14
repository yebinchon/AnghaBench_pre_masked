
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_info {int id; int next_elapse; scalar_t__ machine; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct timer_info const*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(const struct timer_info *VAR_0, const struct timer_info *VAR_1) {
        int VAR_2;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);

        if (!VAR_0->machine && VAR_1->machine)
                return -1;
        if (VAR_0->machine && !VAR_1->machine)
                return 1;
        if (VAR_0->machine && VAR_1->machine) {
                VAR_2 = FUNC_2(VAR_0->machine, VAR_1->machine);
                if (VAR_2 != 0)
                        return VAR_2;
        }

        VAR_2 = FUNC_0(VAR_0->next_elapse, VAR_1->next_elapse);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_3(VAR_0->id, VAR_1->id);
}
