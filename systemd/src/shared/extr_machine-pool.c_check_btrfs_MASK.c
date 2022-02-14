
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,struct statfs*) ;

__attribute__((used)) static int FUNC_2(void) {
        struct statfs VAR_3;

        if (FUNC_1("/var/lib/machines", &VAR_3) < 0) {
                if (VAR_2 != VAR_1)
                        return -VAR_2;

                if (FUNC_1("/var/lib", &VAR_3) < 0)
                        return -VAR_2;
        }

        return FUNC_0(VAR_3.f_type, VAR_0);
}
