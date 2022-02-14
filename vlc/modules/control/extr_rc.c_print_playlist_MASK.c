
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int intf_thread_t ;
struct TYPE_3__ {scalar_t__ i_duration; int psz_name; } ;
typedef TYPE_1__ input_item_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*,int ) ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (int *,size_t) ;
 TYPE_1__* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(intf_thread_t *VAR_3, vlc_playlist_t *VAR_4)
{
    size_t VAR_5 = FUNC_3(VAR_4);
    for (size_t VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
    {
        vlc_playlist_item_t *VAR_7 = FUNC_4(VAR_4, VAR_6);
        input_item_t *VAR_8 = FUNC_5(VAR_7);
        vlc_tick_t VAR_9 = VAR_8->i_duration;
        if (VAR_9 != VAR_0 && VAR_9 != VAR_2)
        {
            char VAR_10[VAR_1];
            FUNC_2(VAR_10, FUNC_0(VAR_9));
            FUNC_1("|-- %s (%s)", VAR_8->psz_name, VAR_10);
        }
        else
            FUNC_1("|-- %s", VAR_8->psz_name);
    }
}
