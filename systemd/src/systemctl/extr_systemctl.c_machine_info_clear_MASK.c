
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine_info {int control_group; int state; int name; } ;


 int FUNC_0 (struct machine_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct machine_info) ;

__attribute__((used)) static void FUNC_3(struct machine_info *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0->name);
        FUNC_1(VAR_0->state);
        FUNC_1(VAR_0->control_group);
        FUNC_2(*VAR_0);
}
