
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {int data; int len; } ;
struct conf {int arg; } ;


 int VAR_0 ;
 struct string* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct string*) ;

__attribute__((used)) static void
FUNC_3(struct conf *VAR_1)
{
    struct string *VAR_2;

    VAR_2 = FUNC_0(&VAR_1->arg);
    FUNC_1(VAR_0, "pop '%.*s'", VAR_2->len, VAR_2->data);
    FUNC_2(VAR_2);
}
