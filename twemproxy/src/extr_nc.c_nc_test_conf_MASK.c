
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instance {int conf_filename; } ;
struct conf {int dummy; } ;


 struct conf* FUNC_0 (int ) ;
 int FUNC_1 (struct conf*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static bool
FUNC_3(struct instance *VAR_0)
{
    struct conf *VAR_1;

    VAR_1 = FUNC_0(VAR_0->conf_filename);
    if (VAR_1 == ((void*)0)) {
        FUNC_2("nutcracker: configuration file '%s' syntax is invalid",
                   VAR_0->conf_filename);
        return 0;
    }

    FUNC_1(VAR_1);

    FUNC_2("nutcracker: configuration file '%s' syntax is ok",
               VAR_0->conf_filename);
    return 1;
}
