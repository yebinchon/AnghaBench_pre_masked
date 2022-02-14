
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_logger {int * ops; } ;
struct vlc_logger_module {struct vlc_logger frontend; } ;


 int FUNC_0 (struct vlc_logger_module*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct vlc_logger_module* FUNC_2 (int *,int,char*) ;
 int VAR_1 ;
 int * FUNC_3 (int ,char*,int *,int,int ,struct vlc_logger_module*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct vlc_logger *FUNC_5(vlc_object_t *VAR_2)
{
    struct vlc_logger_module *VAR_3;

    VAR_3 = FUNC_2(VAR_2, sizeof (*VAR_3), "logger");
    if (FUNC_1(VAR_3 == ((void*)0)))
        return ((void*)0);


    if (FUNC_3(FUNC_0(VAR_3), "logger", ((void*)0), 0,
                        VAR_1, VAR_3) == ((void*)0)) {
        FUNC_4(FUNC_0(VAR_3));
        return ((void*)0);
    }

    VAR_3->frontend.ops = &VAR_0;
    return &VAR_3->frontend;
}
