
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int runtime_control; int persistent_control; int transient; int generator_late; int generator_early; int generator; } ;
typedef TYPE_1__ LookupPaths ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static bool FUNC_1(const LookupPaths *VAR_0, const char *VAR_1) {


        return FUNC_0(VAR_1, VAR_0->generator) ||
               FUNC_0(VAR_1, VAR_0->generator_early) ||
               FUNC_0(VAR_1, VAR_0->generator_late) ||
               FUNC_0(VAR_1, VAR_0->transient) ||
               FUNC_0(VAR_1, VAR_0->persistent_control) ||
               FUNC_0(VAR_1, VAR_0->runtime_control);
}
