
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* i_last_pts; void* i_last_dts; void* i_first_dts; } ;
typedef TYPE_1__ mp4_stream_t ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static mp4_stream_t *FUNC_1(void)
{
    mp4_stream_t *VAR_1 = FUNC_0(1, sizeof(*VAR_1));
    if(VAR_1)
    {
        VAR_1->i_first_dts = VAR_0;
        VAR_1->i_last_dts = VAR_0;
        VAR_1->i_last_pts = VAR_0;
    }
    return VAR_1;
}
