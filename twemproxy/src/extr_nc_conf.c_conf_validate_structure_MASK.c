
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int type; } ;
struct conf {int fname; TYPE_1__ event; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct conf*) ;
 scalar_t__ FUNC_3 (struct conf*) ;
 int FUNC_4 (struct conf*) ;
 scalar_t__ FUNC_5 (struct conf*) ;
 int FUNC_6 (int ,char*,int,int,int) ;
 int FUNC_7 (char*,int ,...) ;

__attribute__((used)) static rstatus_t
FUNC_8(struct conf *VAR_5)
{
    rstatus_t VAR_6;
    int VAR_7, VAR_8;
    uint32_t VAR_9, VAR_10[VAR_0 + 1];
    bool VAR_11, VAR_12, VAR_13;

    VAR_6 = FUNC_5(VAR_5);
    if (VAR_6 != VAR_4) {
        return VAR_6;
    }

    VAR_11 = 0;
    VAR_12 = 0;
    VAR_13 = 0;
    VAR_8 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_0 + 1; VAR_9++) {
        VAR_10[VAR_9] = 0;
    }
    do {
        VAR_6 = FUNC_3(VAR_5);
        if (VAR_6 != VAR_4) {
            return VAR_6;
        }

        VAR_7 = VAR_5->event.type;

        FUNC_6(VAR_2, "next event %d depth %d seq %d", VAR_7, VAR_8, VAR_13);

        switch (VAR_7) {
        case 128:
        case 135:
            break;

        case 136:
            break;

        case 129:
            VAR_11 = 1;
            break;

        case 133:
            if (VAR_8 == VAR_1 && VAR_10[VAR_8] != 1) {
                VAR_12 = 1;
                FUNC_7("conf: '%s' has more than one \"key:value\" at depth"
                          " %d", VAR_5->fname, VAR_8);
            } else if (VAR_8 >= VAR_0) {
                VAR_12 = 1;
                FUNC_7("conf: '%s' has a depth greater than %d", VAR_5->fname,
                          VAR_0);
            }
            VAR_8++;
            break;

        case 134:
            if (VAR_8 == VAR_0) {
                if (VAR_13) {
                    VAR_13 = 0;
                } else {
                    VAR_12 = 1;
                    FUNC_7("conf: '%s' missing sequence directive at depth "
                              "%d", VAR_5->fname, VAR_8);
                }
            }
            VAR_8--;
            VAR_10[VAR_8] = 0;
            break;

        case 130:
            if (VAR_13) {
                VAR_12 = 1;
                FUNC_7("conf: '%s' has more than one sequence directive",
                          VAR_5->fname);
            } else if (VAR_8 != VAR_0) {
                VAR_12 = 1;
                FUNC_7("conf: '%s' has sequence at depth %d instead of %d",
                          VAR_5->fname, VAR_8, VAR_0);
            } else if (VAR_10[VAR_8] != 1) {
                VAR_12 = 1;
                FUNC_7("conf: '%s' has invalid \"key:value\" at depth %d",
                          VAR_5->fname, VAR_8);
            }
            VAR_13 = 1;
            break;

        case 131:
            FUNC_0(VAR_8 == VAR_0);
            VAR_10[VAR_8] = 0;
            break;

        case 132:
            if (VAR_8 == 0) {
                VAR_12 = 1;
                FUNC_7("conf: '%s' has invalid empty \"key:\" at depth %d",
                          VAR_5->fname, VAR_8);
            } else if (VAR_8 == VAR_1 && VAR_10[VAR_8] != 0) {
                VAR_12 = 1;
                FUNC_7("conf: '%s' has invalid mapping \"key:\" at depth %d",
                          VAR_5->fname, VAR_8);
            } else if (VAR_8 == VAR_0 && VAR_10[VAR_8] == 2) {

                VAR_10[VAR_8] = 0;
            }
            VAR_10[VAR_8]++;
            break;

        default:
            FUNC_1();
        }

        FUNC_2(VAR_5);
    } while (!VAR_11 && !VAR_12);

    FUNC_4(VAR_5);

    return !VAR_12 ? VAR_4 : VAR_3;
}
