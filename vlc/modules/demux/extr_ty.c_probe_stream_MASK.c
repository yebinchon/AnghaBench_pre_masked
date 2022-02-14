
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {scalar_t__ tivo_series; scalar_t__ audio_type; scalar_t__ tivo_type; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_3(demux_t *VAR_7)
{
    demux_sys_t *VAR_8 = VAR_7->p_sys;
    const uint8_t *VAR_9;
    int VAR_10;
    bool VAR_11 = 0;


    if (FUNC_2( VAR_7->s, &VAR_9, VAR_0 * VAR_1 ) <
            VAR_0 * VAR_1) {
        FUNC_1(VAR_7, "Can't peek %d chunks", VAR_0);

        return VAR_5;
    }


    for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        FUNC_0(VAR_7, VAR_9);
        if (VAR_8->tivo_series != VAR_3 &&
            VAR_8->audio_type != VAR_2 &&
            VAR_8->tivo_type != VAR_4)
            break;
        VAR_9 += VAR_1;
    }


    if (VAR_8->tivo_series == VAR_3) {
        FUNC_1(VAR_7, "Can't determine Tivo Series.");
        VAR_11 = 1;
    }
    if (VAR_8->audio_type == VAR_2) {
        FUNC_1(VAR_7, "Can't determine Tivo Audio Type.");
        VAR_11 = 1;
    }
    if (VAR_8->tivo_type == VAR_4) {
        FUNC_1(VAR_7, "Can't determine Tivo Type (SA/DTivo).");
        VAR_11 = 1;
    }
    return VAR_11?VAR_5:VAR_6;
}
