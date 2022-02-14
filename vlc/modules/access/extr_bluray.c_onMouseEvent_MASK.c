
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int i_y; int i_x; } ;
typedef TYPE_1__ vlc_mouse_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_12__ {TYPE_1__ oldmouse; int bluray; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__ const*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(const vlc_mouse_t *VAR_2, void *VAR_3)
{
    demux_t *VAR_4 = VAR_3;
    demux_sys_t *VAR_5 = VAR_4->p_sys;

    if (!VAR_2) {
        FUNC_4(&VAR_5->oldmouse);
        return;
    }

    if (FUNC_2(&VAR_5->oldmouse, VAR_2))
        FUNC_0(VAR_5->bluray, -1, VAR_2->i_x, VAR_2->i_y);

    if (FUNC_3( &VAR_5->oldmouse, VAR_2, VAR_1))
        FUNC_1(VAR_5->bluray, -1, VAR_0);
    VAR_5->oldmouse = *VAR_2;
}
