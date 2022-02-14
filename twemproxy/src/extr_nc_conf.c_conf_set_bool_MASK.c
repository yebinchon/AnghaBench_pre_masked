
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct string {int dummy; } ;
struct conf {int arg; } ;
struct command {int offset; } ;


 char* VAR_0 ;
 int VAR_1 ;
 struct string* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct string*,struct string*) ;
 int FUNC_2 (struct string*,char*) ;

char *
FUNC_3(struct conf *VAR_2, struct command *VAR_3, void *VAR_4)
{
    uint8_t *VAR_5;
    int *VAR_6;
    struct string *VAR_7, VAR_8, VAR_9;

    VAR_5 = VAR_4;
    VAR_6 = (int *)(VAR_5 + VAR_3->offset);

    if (*VAR_6 != VAR_1) {
        return "is a duplicate";
    }

    VAR_7 = FUNC_0(&VAR_2->arg);
    FUNC_2(&VAR_8, "true");
    FUNC_2(&VAR_9, "false");

    if (FUNC_1(VAR_7, &VAR_8) == 0) {
        *VAR_6 = 1;
    } else if (FUNC_1(VAR_7, &VAR_9) == 0) {
        *VAR_6 = 0;
    } else {
        return "is not \"true\" or \"false\"";
    }

    return VAR_0;
}
