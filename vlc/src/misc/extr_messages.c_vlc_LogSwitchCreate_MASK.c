
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_logger {int * ops; } ;
struct vlc_logger_switch {struct vlc_logger frontend; int lock; int * backend; } ;


 int VAR_0 ;
 struct vlc_logger_switch* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct vlc_logger *FUNC_3(void)
{
    struct vlc_logger_switch *VAR_2 = FUNC_0(sizeof (*VAR_2));
    if (FUNC_1(VAR_2 == ((void*)0)))
        return ((void*)0);

    VAR_2->frontend.ops = &VAR_1;
    VAR_2->backend = &VAR_0;
    FUNC_2(&VAR_2->lock);
    return &VAR_2->frontend;
}
