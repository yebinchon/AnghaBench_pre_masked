
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t start; } ;
typedef TYPE_1__ match_t ;


 int FUNC_0 (int ,char*,unsigned long,char const) ;
 int VAR_0 ;

void FUNC_1(const match_t VAR_1[], size_t VAR_2,
                         size_t VAR_3, const char VAR_4) {
    size_t VAR_5 = 0;
    if (VAR_3 <= VAR_1[VAR_2].start) {
        VAR_5 = (VAR_1[VAR_2].start - VAR_3) + 1;
    }
    FUNC_0(VAR_0, "%lu%c", (unsigned long)VAR_5, VAR_4);
}
