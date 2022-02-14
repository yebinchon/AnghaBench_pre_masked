
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int job_path; int job_type; int job_id; int unit_path; int following; int sub_state; int active_state; int load_state; int description; int id; int * machine; } ;
typedef TYPE_1__ sd_bus_message ;
typedef TYPE_1__ UnitInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;

int FUNC_2(sd_bus_message *VAR_0, UnitInfo *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_1->machine = ((void*)0);

        return FUNC_1(
                        VAR_0,
                        "(ssssssouso)",
                        &VAR_1->id,
                        &VAR_1->description,
                        &VAR_1->load_state,
                        &VAR_1->active_state,
                        &VAR_1->sub_state,
                        &VAR_1->following,
                        &VAR_1->unit_path,
                        &VAR_1->job_id,
                        &VAR_1->job_type,
                        &VAR_1->job_path);
}
