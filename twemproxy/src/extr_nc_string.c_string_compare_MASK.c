
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {scalar_t__ len; int data; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(const struct string *VAR_0, const struct string *VAR_1)
{
    if (VAR_0->len != VAR_1->len) {
        return VAR_0->len > VAR_1->len ? 1 : -1;
    }

    return FUNC_0(VAR_0->data, VAR_1->data, VAR_0->len);
}
