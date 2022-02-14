
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_sar_num; int i_sar_den; } ;
typedef TYPE_1__ video_format_t ;


 int FUNC_0 (int*,int*,int,int,int) ;

void FUNC_1(video_format_t *VAR_0)
{
    FUNC_0( &VAR_0->i_sar_num, &VAR_0->i_sar_den,
                 VAR_0->i_sar_num, VAR_0->i_sar_den, 50000 );
    if (VAR_0->i_sar_num <= 0 || VAR_0->i_sar_den <= 0) {
        VAR_0->i_sar_num = 1;
        VAR_0->i_sar_den = 1;
    }
}
