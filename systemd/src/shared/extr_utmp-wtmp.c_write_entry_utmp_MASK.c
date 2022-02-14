
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct utmpx const*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct utmpx const*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct utmpx *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);





        if (FUNC_4(VAR_0) < 0)
                return -VAR_1;

        FUNC_3();

        if (!FUNC_2(VAR_2))
                VAR_3 = -VAR_1;
        else
                VAR_3 = 0;

        FUNC_1();

        return VAR_3;
}
