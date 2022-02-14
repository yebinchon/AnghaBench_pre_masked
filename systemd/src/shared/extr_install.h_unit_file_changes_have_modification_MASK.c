
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
typedef TYPE_1__ UnitFileChange ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_1(const UnitFileChange* VAR_2, size_t VAR_3) {
        size_t VAR_4;
        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
                if (FUNC_0(VAR_2[VAR_4].type, VAR_0, VAR_1))
                        return 1;
        return 0;
}
