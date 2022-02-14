
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ incompatible_features; } ;
typedef TYPE_1__ Header ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (int,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_10(const Header *VAR_3) {
        FUNC_9(VAR_3);

        if (FUNC_5(VAR_3) != VAR_2)
                return -VAR_0;

        if (!FUNC_8(FUNC_7(VAR_3), 2, 3))
                return -VAR_1;

        if (FUNC_2(VAR_3) != 0)
                return -VAR_1;

        if (FUNC_0(VAR_3) < 9)
                return -VAR_0;

        if (FUNC_0(VAR_3) > 21)
                return -VAR_0;

        if (FUNC_6(VAR_3) % FUNC_1(VAR_3) != 0)
                return -VAR_0;

        if (FUNC_4(VAR_3) > 32*1024*1024)
                return -VAR_0;

        if (FUNC_7(VAR_3) == 3) {

                if (VAR_3->incompatible_features != 0)
                        return -VAR_1;

                if (FUNC_3(VAR_3) < sizeof(Header))
                        return -VAR_0;
        }

        return 0;
}
