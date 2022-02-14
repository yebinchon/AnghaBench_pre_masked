
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int manager; int default_dependencies; } ;
typedef int Socket ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(Socket *VAR_8) {
        int VAR_9;
        FUNC_2(VAR_8);

        if (!FUNC_1(VAR_8)->default_dependencies)
                return 0;

        VAR_9 = FUNC_3(FUNC_1(VAR_8), VAR_4, VAR_1, 1, VAR_6);
        if (VAR_9 < 0)
                return VAR_9;

        if (FUNC_0(FUNC_1(VAR_8)->manager)) {
                VAR_9 = FUNC_4(FUNC_1(VAR_8), VAR_3, VAR_7, VAR_2, 1, VAR_6);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        return FUNC_4(FUNC_1(VAR_8), VAR_4, VAR_5, VAR_0, 1, VAR_6);
}
