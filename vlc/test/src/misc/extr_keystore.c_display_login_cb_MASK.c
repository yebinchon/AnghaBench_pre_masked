
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_dialog_id ;
struct TYPE_2__ {char const* psz_user; int * psz_pwd; } ;
struct testcase {int b_dialog_store; TYPE_1__ dialog; } ;
struct dialog_ctx {int b_abort; struct testcase* p_test; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, vlc_dialog_id *VAR_1, const char *VAR_2,
                 const char *VAR_3, const char *VAR_4,
                 bool VAR_5)
{
    (void) VAR_2;
    (void) VAR_3;
    (void) VAR_4;
    (void) VAR_5;
    struct dialog_ctx *VAR_6 = VAR_0;
    const struct testcase *VAR_7 = VAR_6->p_test;

    const char *VAR_8 = VAR_7->dialog.psz_user != ((void*)0) ?
                           VAR_7->dialog.psz_user : VAR_4;
    if (!VAR_6->b_abort && VAR_8 != ((void*)0)
     && VAR_7->dialog.psz_pwd != ((void*)0))
    {
        FUNC_1(VAR_1, VAR_8, VAR_7->dialog.psz_pwd,
                                 VAR_7->b_dialog_store);
        VAR_6->b_abort = 1;
    }
    else
        FUNC_0(VAR_1);
}
