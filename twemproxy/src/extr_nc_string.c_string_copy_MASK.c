
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct string {size_t len; char* data; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int const*,scalar_t__) ;

rstatus_t
FUNC_2(struct string *VAR_2, const uint8_t *VAR_3, uint32_t VAR_4)
{
    FUNC_0(VAR_2->len == 0 && VAR_2->data == ((void*)0));
    FUNC_0(VAR_3 != ((void*)0) && VAR_4 != 0);

    VAR_2->data = FUNC_1(VAR_3, VAR_4 + 1);
    if (VAR_2->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_2->len = VAR_4;
    VAR_2->data[VAR_2->len] = '\0';

    return VAR_1;
}
