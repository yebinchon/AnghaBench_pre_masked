
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_dialog_question_type ;
typedef int vlc_dialog_id ;
struct cb_answer {int i_action; scalar_t__ b_dismiss; } ;


 int FUNC_0 (char*,char const*,char const*,int,char const*,char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, vlc_dialog_id *VAR_1, const char *VAR_2,
                    const char *VAR_3, vlc_dialog_question_type VAR_4,
                    const char *VAR_5, const char *VAR_6,
                    const char *VAR_7)
{
    struct cb_answer *VAR_8 = VAR_0;
    FUNC_0("question dialog: title: '%s', text: '%s', "
           "type: %d, cancel: '%s', action1: '%s', action2: '%s'\n",
           VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    if (VAR_8->b_dismiss)
        FUNC_1(VAR_1);
    else if (VAR_8->i_action > 0)
        FUNC_2(VAR_1, VAR_8->i_action);
}
