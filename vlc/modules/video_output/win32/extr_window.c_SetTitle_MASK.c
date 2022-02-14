
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_6__ {char* psz_title; int hwnd; int lock; } ;
typedef TYPE_2__ vout_window_sys_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(vout_window_t *VAR_1, const char *VAR_2)
{
    vout_window_sys_t *VAR_3 = VAR_1->sys;
    char *VAR_4 = FUNC_3( VAR_1, "video-title" );
    if( !VAR_4 )
        VAR_4 = FUNC_2( VAR_2 );
    if( !VAR_4 )
        return;

    FUNC_4( &VAR_3->lock );
    FUNC_1( VAR_3->psz_title );
    VAR_3->psz_title = VAR_4;
    FUNC_5( &VAR_3->lock );

    FUNC_0( VAR_3->hwnd, VAR_0, 0, 0 );
}
