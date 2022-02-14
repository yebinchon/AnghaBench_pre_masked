
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int const member_1; int const member_2; int const member_4; int member_3; } ;
typedef TYPE_1__ Verb ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;



 int FUNC_1 (int ,TYPE_1__ const*,int ) ;

__attribute__((used)) static void FUNC_2(void) {
        static const Verb VAR_2[] = {
                { "help", 130, 130, 0, 128 },
                { "list-images", 130, 1, 0, 128 },
                { "list", 130, 2, 129, 128 },
                { "status", 2, 130, 0, 128 },
                { "show", 130, 130, 0, 128 },
                { "terminate", 2, 130, 0, 128 },
                { "login", 2, 2, 0, 128 },
                { "copy-to", 3, 4, 0, 128 },
                {}
        };


        FUNC_1(FUNC_0("command-not-found"), VAR_2, -VAR_0);


        FUNC_1(FUNC_0("show"), VAR_2, 0);


        FUNC_1(FUNC_0("copy-to", "foo"), VAR_2, -VAR_0);


        FUNC_1(FUNC_0("status", "foo", "bar"), VAR_2, 0);


        FUNC_1(FUNC_0("copy-to", "foo", "bar", "baz", "quux", "qaax"), VAR_2, -VAR_0);


        FUNC_1(VAR_1, VAR_2, 0);
}
