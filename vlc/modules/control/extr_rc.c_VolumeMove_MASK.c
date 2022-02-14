
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int psz_string; } ;
typedef TYPE_2__ vlc_value_t ;
typedef int vlc_player_t ;
struct TYPE_8__ {TYPE_1__* p_sys; } ;
typedef TYPE_3__ intf_thread_t ;
struct TYPE_6__ {int playlist; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,float*) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(intf_thread_t *VAR_0, char const *VAR_1,
                       vlc_value_t VAR_2)
{
    vlc_player_t *VAR_3 = FUNC_5(VAR_0->p_sys->playlist);

    float VAR_4;
    int VAR_5 = FUNC_0(VAR_2.psz_string);

    if( !FUNC_1(VAR_1, "voldown") )
        VAR_5 *= -1;

    FUNC_2(VAR_3);
    FUNC_4(VAR_3, VAR_5, &VAR_4);
    FUNC_3(VAR_3);
}
