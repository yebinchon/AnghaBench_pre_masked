
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {unsigned int i_title; int i_longest_title; int bluray; scalar_t__ b_menu; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_5(demux_t *VAR_3, int VAR_4)
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;

    if (VAR_5->b_menu) {
        int VAR_6;
        if (VAR_4 <= 0) {
            FUNC_3(VAR_3, "Playing TopMenu Title");
            VAR_6 = FUNC_0(VAR_5->bluray, -1);
        } else if (VAR_4 >= (int)VAR_5->i_title - 1) {
            FUNC_3(VAR_3, "Playing FirstPlay Title");
            VAR_6 = FUNC_1(VAR_5->bluray, VAR_0);
        } else {
            FUNC_3(VAR_3, "Playing Title %i", VAR_4);
            VAR_6 = FUNC_1(VAR_5->bluray, VAR_4);
        }

        if (VAR_6 == 0) {
            FUNC_4(VAR_3, "cannot play bd title '%d'", VAR_4);
            return VAR_1;
        }

        return VAR_2;
    }


    if (VAR_4 < 0)
        VAR_4 = VAR_5->i_longest_title;
    else if ((unsigned)VAR_4 > VAR_5->i_title)
        return VAR_1;

    FUNC_3(VAR_3, "Selecting Title %i", VAR_4);

    if (FUNC_2(VAR_5->bluray, VAR_4) == 0) {
        FUNC_4(VAR_3, "cannot select bd title '%d'", VAR_4);
        return VAR_1;
    }

    return VAR_2;
}
