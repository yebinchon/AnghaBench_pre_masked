
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
typedef enum vlc_player_state { ____Placeholder_vlc_player_state } vlc_player_state ;
struct TYPE_4__ {int playlist; } ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int *,int ,char const**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5( intf_thread_t *VAR_6, DBusMessageIter *VAR_7 )
{
    vlc_player_t *VAR_8 = FUNC_4(VAR_6->p_sys->playlist);
    FUNC_2(VAR_8);
    enum vlc_player_state VAR_9 = FUNC_1(VAR_8);
    FUNC_3(VAR_8);

    const char *VAR_10;
    switch (VAR_9)
    {
        case 128:
        case 129:
            VAR_10 = VAR_2;
            break;
        case 130:
            VAR_10 = VAR_1;
            break;
        default:
            VAR_10 = VAR_3;
    }

    if( !FUNC_0( VAR_7, VAR_0,
                                         &VAR_10 ) )
        return VAR_4;

    return VAR_5;
}
