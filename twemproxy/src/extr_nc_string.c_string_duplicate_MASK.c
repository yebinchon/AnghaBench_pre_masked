
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {scalar_t__ len; char* data; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,scalar_t__) ;

rstatus_t
FUNC_2(struct string *VAR_2, const struct string *VAR_3)
{
    FUNC_0(VAR_2->len == 0 && VAR_2->data == ((void*)0));
    FUNC_0(VAR_3->len != 0 && VAR_3->data != ((void*)0));

    VAR_2->data = FUNC_1(VAR_3->data, VAR_3->len + 1);
    if (VAR_2->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_2->len = VAR_3->len;
    VAR_2->data[VAR_2->len] = '\0';

    return VAR_1;
}
