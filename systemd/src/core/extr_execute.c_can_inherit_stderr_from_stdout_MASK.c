
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * stdio_file; int * stdio_fdname; } ;
typedef scalar_t__ ExecOutput ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(
                const ExecContext *VAR_6,
                ExecOutput VAR_7,
                ExecOutput VAR_8) {

        FUNC_1(VAR_6);




        if (VAR_8 == VAR_2)
                return 1;
        if (VAR_8 != VAR_7)
                return 0;

        if (VAR_8 == VAR_3)
                return FUNC_2(VAR_6->stdio_fdname[VAR_5], VAR_6->stdio_fdname[VAR_4]);

        if (FUNC_0(VAR_8, VAR_0, VAR_1))
                return FUNC_2(VAR_6->stdio_file[VAR_5], VAR_6->stdio_file[VAR_4]);

        return 1;
}
