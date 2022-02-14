
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* machine; char const* id; } ;
typedef TYPE_1__ UnitInfo ;


 int FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int FUNC_2(const UnitInfo *VAR_0, const UnitInfo *VAR_1) {
        const char *VAR_2, *VAR_3;
        int VAR_4;


        if (!VAR_0->machine && VAR_1->machine)
                return -1;
        if (VAR_0->machine && !VAR_1->machine)
                return 1;
        if (VAR_0->machine && VAR_1->machine) {
                VAR_4 = FUNC_0(VAR_0->machine, VAR_1->machine);
                if (VAR_4 != 0)
                        return VAR_4;
        }


        VAR_2 = FUNC_1(VAR_0->id, '.');
        VAR_3 = FUNC_1(VAR_1->id, '.');
        if (VAR_2 && VAR_3) {
                VAR_4 = FUNC_0(VAR_2, VAR_3);
                if (VAR_4 != 0)
                        return VAR_4;
        }


        return FUNC_0(VAR_0->id, VAR_1->id);
}
