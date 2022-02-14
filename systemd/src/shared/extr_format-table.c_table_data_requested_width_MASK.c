
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t maximum_width; size_t minimum_width; } ;
typedef TYPE_1__ TableData ;
typedef int Table ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,TYPE_1__*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(Table *VAR_2, TableData *VAR_3, size_t *VAR_4) {
        const char *VAR_5;
        size_t VAR_6;

        VAR_5 = FUNC_0(VAR_2, VAR_3);
        if (!VAR_5)
                return -VAR_1;

        VAR_6 = FUNC_1(VAR_5);
        if (VAR_6 == (size_t) -1)
                return -VAR_0;

        if (VAR_3->maximum_width != (size_t) -1 && VAR_6 > VAR_3->maximum_width)
                VAR_6 = VAR_3->maximum_width;

        if (VAR_6 < VAR_3->minimum_width)
                VAR_6 = VAR_3->minimum_width;

        *VAR_4 = VAR_6;
        return 0;
}
