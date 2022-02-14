
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tb_change_cnt; scalar_t__ tb_no_abbr_cnt; scalar_t__ tb_silent; scalar_t__ tb_maplen; scalar_t__ tb_len; scalar_t__ tb_off; int tb_buflen; int * tb_noremap; int * tb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_3 ;

int
FUNC_2()
{
    VAR_3.tb_buf = FUNC_0(VAR_2);
    VAR_3.tb_noremap = FUNC_0(VAR_2);
    if (VAR_3.tb_buf == ((void*)0) || VAR_3.tb_noremap == ((void*)0))
    {
 FUNC_1();
 return VAR_0;
    }
    VAR_3.tb_buflen = VAR_2;
    VAR_3.tb_off = 0;
    VAR_3.tb_len = 0;
    VAR_3.tb_maplen = 0;
    VAR_3.tb_silent = 0;
    VAR_3.tb_no_abbr_cnt = 0;
    if (++VAR_3.tb_change_cnt == 0)
 VAR_3.tb_change_cnt = 1;
    return VAR_1;
}
