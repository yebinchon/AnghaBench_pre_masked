
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct string {scalar_t__ len; } ;
struct conf {int arg; } ;
struct command {int offset; } ;
typedef int dist_type_t ;


 char* VAR_0 ;
 int VAR_1 ;
 struct string* FUNC_0 (int *) ;
 struct string* VAR_2 ;
 scalar_t__ FUNC_1 (struct string*,struct string*) ;

char *
FUNC_2(struct conf *VAR_3, struct command *VAR_4, void *VAR_5)
{
    uint8_t *VAR_6;
    dist_type_t *VAR_7;
    struct string *VAR_8, *VAR_9;

    VAR_6 = VAR_5;
    VAR_7 = (dist_type_t *)(VAR_6 + VAR_4->offset);

    if (*VAR_7 != VAR_1) {
        return "is a duplicate";
    }

    VAR_8 = FUNC_0(&VAR_3->arg);

    for (VAR_9 = VAR_2; VAR_9->len != 0; VAR_9++) {
        if (FUNC_1(VAR_8, VAR_9) != 0) {
            continue;
        }

        *VAR_7 = VAR_9 - VAR_2;

        return VAR_0;
    }

    return "is not a valid distribution";
}
