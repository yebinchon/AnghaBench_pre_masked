
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int subpicture_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_11__ {int segment_id; scalar_t__ segment_size; scalar_t__ segment_date; int* segment_buffer; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {int i_flags; int i_buffer; int* p_buffer; scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int*,int const,scalar_t__) ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int* FUNC_6 (int*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(decoder_t *VAR_3, block_t *VAR_4)
{
    decoder_sys_t *VAR_5 = VAR_3->p_sys;

    if (VAR_4 == ((void*)0) )
        return VAR_1;

    if (VAR_4->i_flags & (VAR_0))
        goto exit;

    while (VAR_4->i_buffer > 3) {
        const int VAR_6 = VAR_4->p_buffer[0];
        if (VAR_6 != 0xc6) {


            break;
        }
        const int VAR_7 = ((VAR_4->p_buffer[1] & 0xf) << 8) | VAR_4->p_buffer[2];
        if (VAR_7 <= 1 + 4 || VAR_4->i_buffer < 3 + (unsigned)VAR_7) {
            FUNC_5(VAR_3, "Invalid SCTE-27 section length");
            break;
        }
        const int VAR_8 = VAR_4->p_buffer[3] & 0x3f;
        if (VAR_8 != 0) {
            FUNC_5(VAR_3, "Unsupported SCTE-27 protocol version (%d)", VAR_8);
            break;
        }
        const bool VAR_9 = VAR_4->p_buffer[3] & 0x40;

        subpicture_t *VAR_10 = ((void*)0);
        if (VAR_9) {
            if (VAR_7 < 1 + 5 + 4)
                break;
            int VAR_11 = FUNC_1(&VAR_4->p_buffer[4]);
            int VAR_12 = (VAR_4->p_buffer[6] << 4) | (VAR_4->p_buffer[7] >> 4);
            int VAR_13 = ((VAR_4->p_buffer[7] & 0x0f) << 8) | VAR_4->p_buffer[8];
            if (VAR_13 > VAR_12)
                break;
            if (VAR_13 == 0) {
                VAR_5->segment_id = VAR_11;
                VAR_5->segment_size = 0;
                VAR_5->segment_date = VAR_4->i_pts != VAR_2 ? VAR_4->i_pts : VAR_4->i_dts;
            } else {
                if (VAR_5->segment_id != VAR_11 || VAR_5->segment_size <= 0) {
                    VAR_5->segment_id = -1;
                    break;
                }
            }

            int VAR_14 = VAR_7 - 1 - 5 - 4;

            VAR_5->segment_buffer = FUNC_6(VAR_5->segment_buffer,
                                           VAR_5->segment_size + VAR_14);
            FUNC_4(&VAR_5->segment_buffer[VAR_5->segment_size],
                   &VAR_4->p_buffer[9], VAR_14);
            VAR_5->segment_size += VAR_14;

            if (VAR_13 == VAR_12) {
                VAR_10 = FUNC_0(VAR_3,
                                            VAR_5->segment_buffer,
                                            VAR_5->segment_size,
                                            VAR_5->segment_date);
                VAR_5->segment_size = 0;
            }
        } else {
            VAR_10 = FUNC_0(VAR_3,
                                        &VAR_4->p_buffer[4],
                                        VAR_7 - 1 - 4,
                                        VAR_4->i_pts != VAR_2 ? VAR_4->i_pts : VAR_4->i_dts);
        }
        if (VAR_10 != ((void*)0))
            FUNC_3(VAR_3, VAR_10);

        VAR_4->i_buffer -= 3 + VAR_7;
        VAR_4->p_buffer += 3 + VAR_7;
        break;
    }

exit:
    FUNC_2(VAR_4);
    return VAR_1;
}
