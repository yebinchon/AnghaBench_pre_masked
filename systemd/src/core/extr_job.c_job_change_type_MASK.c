
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int type; TYPE_2__* unit; } ;
typedef int JobType ;
typedef TYPE_1__ Job ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(Job *VAR_0, JobType VAR_1) {
        FUNC_0(VAR_0);

        FUNC_2(VAR_0->unit,
                       "Converting job %s/%s -> %s/%s",
                       VAR_0->unit->id, FUNC_1(VAR_0->type),
                       VAR_0->unit->id, FUNC_1(VAR_1));

        VAR_0->type = VAR_1;
}
