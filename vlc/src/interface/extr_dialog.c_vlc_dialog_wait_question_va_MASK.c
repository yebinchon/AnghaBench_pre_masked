
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_dialog_question_type ;
typedef int vlc_dialog_provider ;
typedef int vlc_dialog_id ;
typedef int va_list ;
struct TYPE_3__ {int i_action; } ;
struct TYPE_4__ {TYPE_1__ question; } ;
struct dialog_answer {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int **,int ,char const*,char const*,char const*,char const*,char const*,int ) ;
 int FUNC_2 (int *,int *,int ,struct dialog_answer*) ;
 int * FUNC_3 (int *,int) ;

int
FUNC_4(vlc_object_t *VAR_2,
                            vlc_dialog_question_type VAR_3,
                            const char *VAR_4, const char *VAR_5,
                            const char *VAR_6, const char *VAR_7,
                            const char *VAR_8, va_list VAR_9)
{
    FUNC_0(VAR_2 != ((void*)0) && VAR_8 != ((void*)0) && VAR_7 != ((void*)0)
        && VAR_4 != ((void*)0));

    vlc_dialog_provider *VAR_10 = FUNC_3(VAR_2, 1);
    if (VAR_10 == ((void*)0))
        return VAR_1;

    vlc_dialog_id *VAR_11;
    int VAR_12 = FUNC_1(VAR_10, &VAR_11, VAR_3,
                                           VAR_4, VAR_5,
                                           VAR_6, VAR_7, VAR_8, VAR_9);
    if (VAR_12 < 0 || VAR_11 == ((void*)0))
        return VAR_12;

    struct dialog_answer VAR_13;
    VAR_12 = FUNC_2(VAR_10, VAR_11, VAR_0, &VAR_13);
    if (VAR_12 <= 0)
        return VAR_12;

    if (VAR_13.u.question.i_action != 1 && VAR_13.u.question.i_action != 2)
        return VAR_1;

    return VAR_13.u.question.i_action;
}
