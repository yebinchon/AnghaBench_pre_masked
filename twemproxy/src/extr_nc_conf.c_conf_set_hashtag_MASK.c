
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct string {scalar_t__ data; int len; } ;
struct conf {int arg; } ;
struct command {int offset; } ;
typedef scalar_t__ rstatus_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct string* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct string*,struct string*) ;

char *
FUNC_2(struct conf *VAR_4, struct command *VAR_5, void *VAR_6)
{
    rstatus_t VAR_7;
    uint8_t *VAR_8;
    struct string *VAR_9, *VAR_10;

    VAR_8 = VAR_6;
    VAR_9 = (struct string *)(VAR_8 + VAR_5->offset);

    if (VAR_9->data != VAR_2) {
        return "is a duplicate";
    }

    VAR_10 = FUNC_0(&VAR_4->arg);

    if (VAR_10->len != 2) {
        return "is not a valid hash tag string with two characters";
    }

    VAR_7 = FUNC_1(VAR_9, VAR_10);
    if (VAR_7 != VAR_3) {
        return VAR_0;
    }

    return VAR_1;
}
