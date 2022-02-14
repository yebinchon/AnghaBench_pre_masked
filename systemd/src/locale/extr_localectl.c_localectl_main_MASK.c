
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus ;
struct TYPE_3__ {char* member_0; int member_1; int member_2; int const member_4; int member_3; } ;
typedef TYPE_1__ Verb ;




 int FUNC_0 (int,char**,TYPE_1__ const*,int *) ;
__attribute__((used)) static int FUNC_1(sd_bus *VAR_0, int VAR_1, char *VAR_2[]) {

        static const Verb VAR_3[] = {
                { "status", 137, 1, 136, 129 },
                { "set-locale", 2, 137, 0, 132 },
                { "list-locales", 137, 1, 0, 135 },
                { "set-keymap", 2, 3, 0, 131 },
                { "list-keymaps", 137, 1, 0, 134 },
                { "set-x11-keymap", 2, 5, 0, 130 },
                { "list-x11-keymap-models", 137, 1, 0, 133 },
                { "list-x11-keymap-layouts", 137, 1, 0, 133 },
                { "list-x11-keymap-variants", 137, 2, 0, 133 },
                { "list-x11-keymap-options", 137, 1, 0, 133 },
                { "help", 137, 137, 0, 128 },
                {}
        };

        return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
}
