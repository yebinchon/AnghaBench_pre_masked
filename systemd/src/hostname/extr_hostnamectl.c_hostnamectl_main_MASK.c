
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus ;
struct TYPE_3__ {char* member_0; int member_1; int member_2; int member_4; int member_3; } ;
typedef TYPE_1__ Verb ;




 int FUNC_0 (int,char**,TYPE_1__ const*,int *) ;
__attribute__((used)) static int FUNC_1(sd_bus *VAR_0, int VAR_1, char *VAR_2[]) {

        static const Verb VAR_3[] = {
                { "status", 136, 1, 135, 129 },
                { "set-hostname", 2, 2, 0, 132 },
                { "set-icon-name", 2, 2, 0, 131 },
                { "set-chassis", 2, 2, 0, 134 },
                { "set-deployment", 2, 2, 0, 133 },
                { "set-location", 2, 2, 0, 130 },
                { "help", 136, 136, 0, 128 },
                {}
        };

        return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
}
