
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int name; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char const*,int*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;

int FUNC_3(const char *VAR_1) {
        uint8_t VAR_2;
        int VAR_3;

        for (size_t VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
                if (FUNC_2(VAR_1, VAR_0[VAR_4].name))
                        return VAR_4;

        VAR_3 = FUNC_1(VAR_1, &VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return VAR_2;
}
