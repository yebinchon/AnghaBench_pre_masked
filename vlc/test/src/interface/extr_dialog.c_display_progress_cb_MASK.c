
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_dialog_id ;
struct cb_answer {scalar_t__ b_dismiss; } ;


 int FUNC_0 (char*,char const*,char const*,int,float,char const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, vlc_dialog_id *VAR_1, const char *VAR_2,
                    const char *VAR_3, bool VAR_4,
                    float VAR_5, const char *VAR_6)
{
    struct cb_answer *VAR_7 = VAR_0;
    FUNC_0("progress dialog: title: '%s', text: '%s', "
           "indeterminate: %d, position: %f, cancel: '%s'\n",
           VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_7->b_dismiss)
        FUNC_1(VAR_1);
}
