
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pf_update_progress; int pf_cancel; int pf_display_progress; int pf_display_question; int pf_display_login; int pf_display_error; } ;
typedef TYPE_1__ vlc_dialog_cbs ;
struct cb_answer {int member_0; } ;
struct TYPE_7__ {int p_libvlc_int; } ;
typedef TYPE_2__ libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__* FUNC_4 (int,char const**) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,struct cb_answer*,int) ;
 int VAR_6 ;
 int FUNC_10 (int ,TYPE_1__ const*,struct cb_answer*) ;

int
FUNC_11(int VAR_7, char *VAR_8[])
{
    bool VAR_9 = VAR_7 > 1 && FUNC_8(VAR_8[1], "-a") == 0;

    if (!VAR_9)
        FUNC_1(10);

    FUNC_7("VLC_PLUGIN_PATH", "../modules", 1);
    FUNC_7("VLC_LIB_PATH", "../modules", 1);

    libvlc_instance_t *VAR_10 = FUNC_4(0, ((void*)0));
    FUNC_2(VAR_10 != ((void*)0));

    FUNC_6("testing dialog callbacks\n");
    const vlc_dialog_cbs VAR_11 = {
        .pf_display_error = VAR_2,
        .pf_display_login = VAR_3,
        .pf_display_question = VAR_5,
        .pf_display_progress = VAR_4,
        .pf_cancel = VAR_1,
        .pf_update_progress = VAR_6,
    };
    struct cb_answer VAR_12 = { 0 };
    FUNC_10(VAR_10->p_libvlc_int, &VAR_11, &VAR_12);
    FUNC_9(FUNC_0(VAR_10->p_libvlc_int), &VAR_12, 100000);
    FUNC_10(VAR_10->p_libvlc_int, ((void*)0), ((void*)0));

    FUNC_5(VAR_10);

    if (VAR_9)
    {
        FUNC_6("testing Qt dialog callbacks\n");
        static const char *VAR_13[] = {
            "--no-qt-privacy-ask",
        };
        VAR_10 = FUNC_4(1, VAR_13);
        FUNC_2(VAR_10 != ((void*)0));

        int VAR_14 = FUNC_3(VAR_10->p_libvlc_int, "qt");
        FUNC_2(VAR_14 == VAR_0);
        FUNC_9(FUNC_0(VAR_10->p_libvlc_int), ((void*)0), 3000000);

        FUNC_5(VAR_10);
    }

    return 0;
}
