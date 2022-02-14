
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_9__ {char* p_extra; scalar_t__ i_extra; } ;
struct TYPE_10__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_11__ {int i_fps; int cct; } ;
typedef TYPE_3__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (char*,int *,int) ;

__attribute__((used)) static int FUNC_4(decoder_t *VAR_5, decoder_sys_t *VAR_6)
{
    uint8_t *VAR_7 = VAR_5->fmt_in.p_extra;
    if (!VAR_7) {
        FUNC_1(VAR_5, "NULL EBU header (GSI block)\n");
        return VAR_3;
    }

    if (VAR_2 != VAR_5->fmt_in.i_extra) {
        FUNC_1(VAR_5, "EBU header is not in expected size (%d)\n", VAR_5->fmt_in.i_extra);
        return VAR_3;
    }

    char VAR_8[] = { VAR_7[6], VAR_7[7], '\0' };
    int VAR_9 = FUNC_3(VAR_8, ((void*)0), 10);
    if (1 > VAR_9 || 60 < VAR_9) {
        FUNC_2(VAR_5, "EBU header contains unsupported DFC fps ('%s'); falling back to 25\n", VAR_8);
        VAR_9 = 25;
    }

    int VAR_10 = (VAR_7[12] << 8) | VAR_7[13];
    if (VAR_0 > VAR_10 || VAR_1 < VAR_10) {
        FUNC_1(VAR_5, "EBU header contains illegal CCT (0x%x)\n", VAR_10);
        return VAR_3;
    }

    FUNC_0(VAR_5, "DFC fps=%d, CCT=0x%x", VAR_9, VAR_10);
    VAR_6->i_fps = VAR_9;
    VAR_6->cct = VAR_10;

    return VAR_4;
}
