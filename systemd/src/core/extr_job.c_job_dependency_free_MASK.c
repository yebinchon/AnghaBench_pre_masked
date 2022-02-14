
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* object; TYPE_1__* subject; } ;
struct TYPE_9__ {int object_list; } ;
struct TYPE_8__ {int subject_list; } ;
typedef TYPE_3__ JobDependency ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(JobDependency *VAR_2) {
        FUNC_1(VAR_2);

        if (VAR_2->subject)
                FUNC_0(VAR_1, VAR_2->subject->subject_list, VAR_2);

        FUNC_0(VAR_0, VAR_2->object->object_list, VAR_2);

        FUNC_2(VAR_2);
}
