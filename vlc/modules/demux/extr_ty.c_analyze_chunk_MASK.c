
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_8__ {int subrec_type; int rec_type; int l_rec_size; } ;
typedef TYPE_1__ ty_rec_hdr_t ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {scalar_t__ tivo_series; scalar_t__ tivo_type; int i_Pts_Offset; int audio_type; int i_Pes_Length; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 TYPE_1__* FUNC_4 (int const*,int,int*) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_5(demux_t *VAR_15, const uint8_t *VAR_16)
{
    demux_sys_t *VAR_17 = VAR_15->p_sys;
    int VAR_18, VAR_19;
    ty_rec_hdr_t *VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24;
    int VAR_25;


    if( FUNC_0( &VAR_16[ 0 ] ) == VAR_8 )
        return;



    VAR_18 = VAR_16[0];
    if (VAR_18 < 5) {

        return;
    }

    VAR_16 += 4;

    VAR_20 = FUNC_4(VAR_16, VAR_18, &VAR_25);







    VAR_21 = VAR_22 = VAR_23 = VAR_24 = 0;
    for (VAR_19=0; VAR_19<VAR_18; VAR_19++) {



        switch (VAR_20[VAR_19].subrec_type << 8 | VAR_20[VAR_19].rec_type) {
            case 0x6e0:
                VAR_21++;
                break;
            case 0xbe0:
                VAR_22++;
                break;
            case 0x3c0:
                VAR_24++;
                break;
            case 0x9c0:
                VAR_23++;
                break;
        }
    }
    FUNC_3(VAR_15, "probe: chunk has %d 0x6e0 recs, %d 0xbe0 recs.",
        VAR_21, VAR_22);


    if (VAR_21 > 0) {
        FUNC_3(VAR_15, "detected Series 1 Tivo");
        VAR_17->tivo_series = VAR_9;
        VAR_17->i_Pes_Length = VAR_4;
    } else if (VAR_22 > 0) {
        FUNC_3(VAR_15, "detected Series 2 Tivo");
        VAR_17->tivo_series = VAR_10;
        VAR_17->i_Pes_Length = VAR_5;
    }
    if (VAR_23 > 0) {
        FUNC_3(VAR_15, "detected AC-3 Audio (DTivo)" );
        VAR_17->audio_type = VAR_6;
        VAR_17->tivo_type = VAR_11;
        VAR_17->i_Pts_Offset = VAR_1;
        VAR_17->i_Pes_Length = VAR_0;
    } else if (VAR_24 > 0) {
        VAR_17->audio_type = VAR_7;
        FUNC_3(VAR_15, "detected MPEG Audio" );
    }



    if (VAR_17->tivo_type == VAR_13) {
        uint32_t VAR_26 = (16 * VAR_18);
        for (VAR_19=0; VAR_19<VAR_18; VAR_19++) {
            if ((VAR_20[VAR_19].subrec_type << 0x08 | VAR_20[VAR_19].rec_type) == 0x3c0 &&
                    VAR_20[VAR_19].l_rec_size > 15) {

                int VAR_27 = FUNC_1(VAR_14,
                        &VAR_16[VAR_26], 5);
                if (VAR_27 >= 0) {



                    if ((VAR_16[VAR_26 + 6 + VAR_27] & 0x80) == 0x80) {

                        if (VAR_17->tivo_series == VAR_9)
                            FUNC_3(VAR_15, "detected Stand-Alone Tivo" );
                        VAR_17->tivo_type = VAR_12;
                        VAR_17->i_Pts_Offset = VAR_3;
                    } else {
                        if (VAR_17->tivo_series == VAR_9)
                            FUNC_3(VAR_15, "detected DirecTV Tivo" );
                        VAR_17->tivo_type = VAR_11;
                        VAR_17->i_Pts_Offset = VAR_2;
                    }
                    break;
                }
            }
            VAR_26 += VAR_20[VAR_19].l_rec_size;
        }
    }
    FUNC_2(VAR_20);
}
