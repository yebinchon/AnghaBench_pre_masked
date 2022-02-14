
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {int _need_free; int message; int name; } ;
typedef TYPE_1__ sd_bus_error ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char**,char const*,int ) ;

int FUNC_5(sd_bus_error *VAR_3, const char *VAR_4, const char *VAR_5, va_list VAR_6) {

        if (!VAR_4)
                return 0;

        if (VAR_3) {
                FUNC_0(!FUNC_1(VAR_3), -VAR_1);

                VAR_3->name = FUNC_3(VAR_4);
                if (!VAR_3->name) {
                        *VAR_3 = VAR_0;
                        return -VAR_2;
                }



                if (VAR_5)
                        (void) FUNC_4((char**) &VAR_3->message, VAR_5, VAR_6);

                VAR_3->_need_free = 1;
        }

        return -FUNC_2(VAR_4);
}
