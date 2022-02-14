
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_dialog_question_type ;
typedef int vlc_dialog_id ;
struct TYPE_4__ {int (* pf_display_question ) (int ,int *,char const*,char const*,int const,char const*,char const*,char const*) ;} ;
struct TYPE_5__ {int data; TYPE_1__ cbs; } ;
struct TYPE_6__ {TYPE_2__ dialog; } ;
typedef TYPE_3__ libvlc_instance_t ;
typedef int libvlc_dialog_question_type ;
typedef int libvlc_dialog_id ;


 int FUNC_0 (int ,int *,char const*,char const*,int const,char const*,char const*,char const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, vlc_dialog_id *VAR_1, const char *VAR_2,
                    const char *VAR_3, vlc_dialog_question_type VAR_4,
                    const char *VAR_5, const char *VAR_6,
                    const char *VAR_7)
{
    libvlc_instance_t *VAR_8 = VAR_0;
    const libvlc_dialog_question_type VAR_9 =
        FUNC_1(VAR_4);

    VAR_8->dialog.cbs.pf_display_question(VAR_8->dialog.data,
                                               (libvlc_dialog_id *) VAR_1,
                                               VAR_2, VAR_3, VAR_9,
                                               VAR_5,
                                               VAR_6, VAR_7);
}
