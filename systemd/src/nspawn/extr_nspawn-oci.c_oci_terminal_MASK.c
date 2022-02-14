
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int console_mode; } ;
typedef TYPE_1__ Settings ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, JsonVariant *VAR_3, JsonDispatchFlags VAR_4, void *VAR_5) {
        Settings *VAR_6 = VAR_5;



        VAR_6->console_mode = FUNC_0(VAR_3) ? VAR_1 : VAR_0;
        return 0;
}
