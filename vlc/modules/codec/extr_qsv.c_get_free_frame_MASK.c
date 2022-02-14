
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* work_frames; } ;
typedef TYPE_1__ encoder_sys_t ;
struct TYPE_8__ {int used; struct TYPE_8__* next; } ;
typedef TYPE_2__ QSVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(encoder_sys_t *VAR_2, QSVFrame **VAR_3)
{
    QSVFrame *VAR_4, **VAR_5;

    FUNC_1(VAR_2);

    VAR_4 = VAR_2->work_frames;
    VAR_5 = &VAR_2->work_frames;
    while (VAR_4) {
        if (!VAR_4->used) {
            *VAR_3 = VAR_4;
            VAR_4->used = 1;
            return VAR_1;
        }

        VAR_5 = &VAR_4->next;
        VAR_4 = VAR_4->next;
    }

    VAR_4 = FUNC_0(1,sizeof(QSVFrame));
    if (FUNC_2(VAR_4==((void*)0)))
        return VAR_0;
    *VAR_5 = VAR_4;

    *VAR_3 = VAR_4;
    VAR_4->used = 1;

    return VAR_1;
}
