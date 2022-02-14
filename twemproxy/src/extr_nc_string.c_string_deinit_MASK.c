
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {scalar_t__ len; int * data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct string*) ;

void
FUNC_3(struct string *VAR_0)
{
    FUNC_0((VAR_0->len == 0 && VAR_0->data == ((void*)0)) ||
           (VAR_0->len != 0 && VAR_0->data != ((void*)0)));

    if (VAR_0->data != ((void*)0)) {
        FUNC_1(VAR_0->data);
        FUNC_2(VAR_0);
    }
}
