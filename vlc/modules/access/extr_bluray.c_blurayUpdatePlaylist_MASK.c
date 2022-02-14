
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {size_t cur_title; int updates; scalar_t__ b_menu; int * pp_title; int bluray; scalar_t__ cur_seekpoint; } ;
typedef TYPE_2__ demux_sys_t ;
typedef int BLURAY_TITLE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_6(demux_t *VAR_3, unsigned VAR_4)
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;

    FUNC_3(VAR_3, 1, 0);


    if (!VAR_5->b_menu)
        VAR_5->cur_title = FUNC_0(VAR_5->bluray);
    VAR_5->cur_seekpoint = 0;
    VAR_5->updates |= VAR_1 | VAR_0;

    BLURAY_TITLE_INFO *VAR_6 = FUNC_1(VAR_5->bluray, VAR_4, 0);
    if (VAR_6) {
        FUNC_4(VAR_5->pp_title[VAR_5->cur_title], VAR_6);
        if (VAR_5->b_menu)
            VAR_5->updates |= VAR_2;
    }
    FUNC_5(VAR_5, VAR_6);

    FUNC_2(VAR_3);
}
