
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct report_signal {float quality; float strength; } ;
struct ctx {int dummy; } ;


 int FUNC_0 (int ,struct report_signal) ;
 struct ctx* FUNC_1 (int *,void*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_1,
                         float VAR_2, float VAR_3, void *VAR_4)
{
    struct ctx *VAR_5 = FUNC_1(VAR_1, VAR_4);
    struct report_signal VAR_6 = {
        .quality = VAR_2,
        .strength = VAR_3,
    };
    FUNC_0(VAR_0, VAR_6);
}
