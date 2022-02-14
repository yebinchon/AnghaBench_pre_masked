
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ unit_file_preset; scalar_t__ fragment_path; TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_5__ {int unit_file_scope; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;

int FUNC_3(Unit *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->unit_file_preset < 0 && VAR_0->fragment_path)
                VAR_0->unit_file_preset = FUNC_2(
                                VAR_0->manager->unit_file_scope,
                                ((void*)0),
                                FUNC_1(VAR_0->fragment_path));

        return VAR_0->unit_file_preset;
}
