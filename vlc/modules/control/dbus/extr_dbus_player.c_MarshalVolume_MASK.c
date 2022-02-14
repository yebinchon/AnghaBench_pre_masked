
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_4__ {int playlist; } ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,double*) ;
 double FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3( intf_thread_t *VAR_3, DBusMessageIter *VAR_4 )
{
    vlc_player_t *VAR_5 = FUNC_2(VAR_3->p_sys->playlist);
    double VAR_6 = FUNC_1(VAR_5);
    if( VAR_6 < .0f )
        VAR_6 = .0f;

    if( !FUNC_0( VAR_4, VAR_0, &VAR_6 ) )
        return VAR_1;

    return VAR_2;
}
