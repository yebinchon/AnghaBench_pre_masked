
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_3__ {int path; int type; } ;
typedef TYPE_1__ PathSpec ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(PathSpec *VAR_2, mode_t VAR_3) {
        int VAR_4;

        if (FUNC_0(VAR_2->type, VAR_0, VAR_1))
                return;

        VAR_4 = FUNC_2(VAR_2->path, VAR_3);
        if (VAR_4 < 0)
                FUNC_1(VAR_4, "mkdir(%s) failed: %m", VAR_2->path);
}
