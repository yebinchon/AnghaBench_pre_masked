
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UnitFileState ;
struct TYPE_6__ {scalar_t__ unit_file_state; int id; TYPE_1__* manager; scalar_t__ fragment_path; } ;
typedef TYPE_2__ Unit ;
struct TYPE_5__ {int unit_file_scope; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ,scalar_t__*) ;

UnitFileState FUNC_2(Unit *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        if (VAR_1->unit_file_state < 0 && VAR_1->fragment_path) {
                VAR_2 = FUNC_1(
                                VAR_1->manager->unit_file_scope,
                                ((void*)0),
                                VAR_1->id,
                                &VAR_1->unit_file_state);
                if (VAR_2 < 0)
                        VAR_1->unit_file_state = VAR_0;
        }

        return VAR_1->unit_file_state;
}
