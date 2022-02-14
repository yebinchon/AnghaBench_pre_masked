
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct string {int len; int data; } ;
struct conf {int arg; } ;
struct command {int offset; } ;


 char* VAR_0 ;
 int VAR_1 ;
 struct string* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

char *
FUNC_2(struct conf *VAR_2, struct command *VAR_3, void *VAR_4)
{
    uint8_t *VAR_5;
    int VAR_6, *VAR_7;
    struct string *VAR_8;

    VAR_5 = VAR_4;
    VAR_7 = (int *)(VAR_5 + VAR_3->offset);

    if (*VAR_7 != VAR_1) {
        return "is a duplicate";
    }

    VAR_8 = FUNC_0(&VAR_2->arg);

    VAR_6 = FUNC_1(VAR_8->data, VAR_8->len);
    if (VAR_6 < 0) {
        return "is not a number";
    }

    *VAR_7 = VAR_6;

    return VAR_0;
}
