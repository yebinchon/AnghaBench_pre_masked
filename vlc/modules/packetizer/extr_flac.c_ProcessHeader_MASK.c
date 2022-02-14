
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int i_extra; int p_extra; } ;
struct TYPE_6__ {int i_extra; char* p_extra; } ;
struct TYPE_8__ {TYPE_2__ fmt_out; TYPE_1__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {int b_stream_info; int stream_info; } ;
typedef TYPE_4__ decoder_sys_t ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(decoder_t *VAR_1)
{
    decoder_sys_t *VAR_2 = VAR_1->p_sys;

    int VAR_3 = VAR_1->fmt_in.i_extra;
    char *VAR_4 = VAR_1->fmt_in.p_extra;

    if (VAR_3 > 8 && !FUNC_3(VAR_4, "fLaC", 4)) {
        VAR_3 -= 8;
        VAR_4 += 8;
    }

    if (VAR_1->fmt_in.i_extra < VAR_0)
        return;

    FUNC_0( (uint8_t *) VAR_4, &VAR_2->stream_info );

    VAR_2->b_stream_info = 1;

    VAR_1->fmt_out.i_extra = VAR_3;
    FUNC_1(VAR_1->fmt_out.p_extra);
    VAR_1->fmt_out.p_extra = FUNC_2(VAR_3);
    if (VAR_1->fmt_out.p_extra)
        FUNC_4(VAR_1->fmt_out.p_extra, VAR_4, VAR_3);
    else
        VAR_1->fmt_out.i_extra = 0;
}
