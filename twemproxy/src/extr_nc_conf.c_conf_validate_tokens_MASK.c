
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct conf {int fname; TYPE_1__ token; } ;
typedef scalar_t__ rstatus_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct conf*) ;
 scalar_t__ FUNC_1 (struct conf*) ;
 int FUNC_2 (struct conf*) ;
 scalar_t__ FUNC_3 (struct conf*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static rstatus_t
FUNC_6(struct conf *VAR_3)
{
    rstatus_t VAR_4;
    bool VAR_5, VAR_6;
    int VAR_7;

    VAR_4 = FUNC_3(VAR_3);
    if (VAR_4 != VAR_2) {
        return VAR_4;
    }

    VAR_5 = 0;
    VAR_6 = 0;
    do {
        VAR_4 = FUNC_1(VAR_3);
        if (VAR_4 != VAR_2) {
            return VAR_4;
        }
        VAR_7 = VAR_3->token.type;

        switch (VAR_7) {
        case 135:
            VAR_6 = 1;
            FUNC_5("conf: no token (%d) is disallowed", VAR_7);
            break;

        case 128:
            VAR_6 = 1;
            FUNC_5("conf: version directive token (%d) is disallowed", VAR_7);
            break;

        case 131:
            VAR_6 = 1;
            FUNC_5("conf: tag directive token (%d) is disallowed", VAR_7);
            break;

        case 142:
            VAR_6 = 1;
            FUNC_5("conf: document start token (%d) is disallowed", VAR_7);
            break;

        case 143:
            VAR_6 = 1;
            FUNC_5("conf: document end token (%d) is disallowed", VAR_7);
            break;

        case 137:
            VAR_6 = 1;
            FUNC_5("conf: flow sequence start token (%d) is disallowed", VAR_7);
            break;

        case 138:
            VAR_6 = 1;
            FUNC_5("conf: flow sequence end token (%d) is disallowed", VAR_7);
            break;

        case 139:
            VAR_6 = 1;
            FUNC_5("conf: flow mapping start token (%d) is disallowed", VAR_7);
            break;

        case 140:
            VAR_6 = 1;
            FUNC_5("conf: flow mapping end token (%d) is disallowed", VAR_7);
            break;

        case 141:
            VAR_6 = 1;
            FUNC_5("conf: flow entry token (%d) is disallowed", VAR_7);
            break;

        case 149:
            VAR_6 = 1;
            FUNC_5("conf: alias token (%d) is disallowed", VAR_7);
            break;

        case 148:
            VAR_6 = 1;
            FUNC_5("conf: anchor token (%d) is disallowed", VAR_7);
            break;

        case 130:
            VAR_6 = 1;
            FUNC_5("conf: tag token (%d) is disallowed", VAR_7);
            break;

        case 144:
        case 145:
        case 147:
        case 146:
            break;

        case 136:
        case 129:
        case 134:
            break;

        case 132:
            break;

        case 133:
            VAR_5 = 1;
            FUNC_4(VAR_0, "conf '%s' has valid tokens", VAR_3->fname);
            break;

        default:
            VAR_6 = 1;
            FUNC_5("conf: unknown token (%d) is disallowed", VAR_7);
            break;
        }

        FUNC_0(VAR_3);
    } while (!VAR_5 && !VAR_6);

    FUNC_2(VAR_3);

    return !VAR_6 ? VAR_2 : VAR_1;
}
