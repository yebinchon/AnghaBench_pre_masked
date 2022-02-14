
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int default_dependencies; } ;
typedef int Slice ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(Slice *VAR_4) {
        int VAR_5;

        FUNC_1(VAR_4);

        if (!FUNC_0(VAR_4)->default_dependencies)
                return 0;


        VAR_5 = FUNC_2(
                        FUNC_0(VAR_4),
                        VAR_1, VAR_2,
                        VAR_0, 1, VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        return 0;
}
