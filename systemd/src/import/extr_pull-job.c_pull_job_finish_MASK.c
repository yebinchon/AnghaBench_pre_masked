
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int progress_percent; int error; int (* on_finished ) (TYPE_1__*) ;int state; int url; } ;
typedef TYPE_1__ PullJob ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(PullJob *VAR_2, int VAR_3) {
        FUNC_1(VAR_2);

        if (FUNC_0(VAR_2->state, VAR_0, VAR_1))
                return;

        if (VAR_3 == 0) {
                VAR_2->state = VAR_0;
                VAR_2->progress_percent = 100;
                FUNC_2("Download of %s complete.", VAR_2->url);
        } else {
                VAR_2->state = VAR_1;
                VAR_2->error = VAR_3;
        }

        if (VAR_2->on_finished)
                VAR_2->on_finished(VAR_2);
}
