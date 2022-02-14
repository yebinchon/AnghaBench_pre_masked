
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct array {int dummy; } ;
typedef scalar_t__ rstatus_t ;
typedef scalar_t__ (* array_each_t ) (void*,void*) ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (struct array*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct array*) ;

rstatus_t
FUNC_3(struct array *VAR_1, array_each_t VAR_2, void *VAR_3)
{
    uint32_t VAR_4, VAR_5;

    FUNC_0(FUNC_2(VAR_1) != 0);
    FUNC_0(VAR_2 != ((void*)0));

    for (VAR_4 = 0, VAR_5 = FUNC_2(VAR_1); VAR_4 < VAR_5; VAR_4++) {
        void *VAR_6 = FUNC_1(VAR_1, VAR_4);
        rstatus_t VAR_7;

        VAR_7 = VAR_2(VAR_6, VAR_3);
        if (VAR_7 != VAR_0) {
            return VAR_7;
        }
    }

    return VAR_0;
}
