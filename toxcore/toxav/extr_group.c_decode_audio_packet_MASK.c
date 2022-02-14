
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int length; int * data; } ;
typedef TYPE_2__ int16_t ;
struct TYPE_16__ {int userdata; TYPE_1__* g_c; int (* audio_data ) (int ,int,int,TYPE_2__*,int,int,unsigned int,int ) ;} ;
struct TYPE_15__ {int decoder_channels; int last_packet_samples; int * audio_decoder; int buffer; } ;
struct TYPE_13__ {int m; } ;
typedef TYPE_3__ Group_Peer_AV ;
typedef TYPE_2__ Group_Audio_Packet ;
typedef TYPE_5__ Group_AV ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ,int*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int ,TYPE_2__*,int,int) ;
 int * FUNC_5 (unsigned int,int,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int,int,TYPE_2__*,int,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_11(Group_AV *VAR_2, Group_Peer_AV *VAR_3, int VAR_4, int VAR_5)
{
    if (!VAR_2 || !VAR_3)
        return -1;

    int VAR_6;
    Group_Audio_Packet *VAR_7 = FUNC_1(VAR_3->buffer, &VAR_6);

    if (VAR_6 == 0)
        return -1;

    int16_t *VAR_8 = ((void*)0);
    int VAR_9 = 0;

    unsigned int VAR_10 = 48000;

    if (VAR_6 == 1) {
        int VAR_11 = FUNC_8(VAR_7->data);

        if (VAR_11 == VAR_0) {
            FUNC_2(VAR_7);
            return -1;
        }

        if (VAR_11 != 1 && VAR_11 != 2) {
            FUNC_2(VAR_7);
            return -1;
        }

        if (VAR_11 != VAR_3->decoder_channels) {
            if (VAR_3->audio_decoder) {
                FUNC_6(VAR_3->audio_decoder);
                VAR_3->audio_decoder = ((void*)0);
            }

            int VAR_12;
            VAR_3->audio_decoder = FUNC_5(VAR_10, VAR_11, &VAR_12);

            if (VAR_12 != VAR_1) {
                FUNC_0("Error while starting audio decoder: %s", FUNC_9(VAR_12));
                FUNC_2(VAR_7);
                return -1;
            }

            VAR_3->decoder_channels = VAR_11;
        }

        int VAR_13 = FUNC_7(VAR_3->audio_decoder, VAR_7->data, VAR_7->length);

        VAR_8 = FUNC_3(VAR_13 * VAR_3->decoder_channels * sizeof(int16_t));

        if (!VAR_8) {
            FUNC_2(VAR_7);
            return -1;
        }

        VAR_9 = FUNC_4(VAR_3->audio_decoder, VAR_7->data, VAR_7->length, VAR_8, VAR_13, 0);
        FUNC_2(VAR_7);

        if (VAR_9 <= 0)
            return -1;

        VAR_3->last_packet_samples = VAR_9;
    } else {
        if (!VAR_3->audio_decoder)
            return -1;

        if (!VAR_3->last_packet_samples)
            return -1;

        VAR_8 = FUNC_3(VAR_3->last_packet_samples * VAR_3->decoder_channels * sizeof(int16_t));

        if (!VAR_8) {
            FUNC_2(VAR_7);
            return -1;
        }

        VAR_9 = FUNC_4(VAR_3->audio_decoder, ((void*)0), 0, VAR_8, VAR_3->last_packet_samples, 1);

        if (VAR_9 <= 0)
            return -1;

    }

    if (VAR_8) {

        if (VAR_2->audio_data)
            VAR_2->audio_data(VAR_2->g_c->m, VAR_4, VAR_5, VAR_8, VAR_9,
                                 VAR_3->decoder_channels, VAR_10, VAR_2->userdata);

        FUNC_2(VAR_8);
        return 0;
    }

    return -1;
}
