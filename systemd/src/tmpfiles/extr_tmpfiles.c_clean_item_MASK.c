
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; int path; } ;
typedef TYPE_1__ Item ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int (*) (TYPE_1__*,int )) ;
 int FUNC_3 (char*,char,int ) ;

__attribute__((used)) static int FUNC_4(Item *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_3("Running clean action for entry %c %s", (char) VAR_0->type, VAR_0->path);

        switch (VAR_0->type) {
        case 135:
        case 134:
        case 133:
        case 132:
        case 128:
        case 129:
        case 136:
                FUNC_1(VAR_0, VAR_0->path);
                return 0;
        case 131:
        case 130:
                return FUNC_2(VAR_0, FUNC_1);
        default:
                return 0;
        }
}
