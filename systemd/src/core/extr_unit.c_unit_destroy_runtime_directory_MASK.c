
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_10__ {scalar_t__ runtime_directory_preserve_mode; } ;
struct TYPE_8__ {int * prefix; } ;
typedef TYPE_3__ ExecContext ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__ const*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(Unit *VAR_3, const ExecContext *VAR_4) {
        if (VAR_4->runtime_directory_preserve_mode == VAR_1 ||
            (VAR_4->runtime_directory_preserve_mode == VAR_2 && !FUNC_1(VAR_3)))
                FUNC_0(VAR_4, VAR_3->manager->prefix[VAR_0]);
}
