
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {int dummy; } ;
struct conf_pool {int dummy; } ;
struct conf {char* fname; scalar_t__ valid; scalar_t__ parsed; scalar_t__ sound; scalar_t__ valid_token; scalar_t__ valid_event; scalar_t__ valid_parser; scalar_t__ seq; scalar_t__ depth; int * fh; int arg; int pool; } ;
typedef scalar_t__ rstatus_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,char*,int ) ;
 struct conf* FUNC_6 (int) ;
 int FUNC_7 (struct conf*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static struct conf *
FUNC_9(char *VAR_5)
{
    rstatus_t VAR_6;
    struct conf *VAR_7;
    FILE *VAR_8;

    VAR_8 = FUNC_3(VAR_5, "r");
    if (VAR_8 == ((void*)0)) {
        FUNC_5("conf: failed to open configuration '%s': %s", VAR_5,
                  FUNC_8(VAR_4));
        return ((void*)0);
    }

    VAR_7 = FUNC_6(sizeof(*VAR_7));
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_8);
        return ((void*)0);
    }

    VAR_6 = FUNC_1(&VAR_7->arg, VAR_0, sizeof(struct string));
    if (VAR_6 != VAR_3) {
        FUNC_7(VAR_7);
        FUNC_2(VAR_8);
        return ((void*)0);
    }

    VAR_6 = FUNC_1(&VAR_7->pool, VAR_1, sizeof(struct conf_pool));
    if (VAR_6 != VAR_3) {
        FUNC_0(&VAR_7->arg);
        FUNC_7(VAR_7);
        FUNC_2(VAR_8);
        return ((void*)0);
    }

    VAR_7->fname = VAR_5;
    VAR_7->fh = VAR_8;
    VAR_7->depth = 0;

    VAR_7->seq = 0;
    VAR_7->valid_parser = 0;
    VAR_7->valid_event = 0;
    VAR_7->valid_token = 0;
    VAR_7->sound = 0;
    VAR_7->parsed = 0;
    VAR_7->valid = 0;

    FUNC_4(VAR_2, "opened conf '%s'", VAR_5);

    return VAR_7;
}
