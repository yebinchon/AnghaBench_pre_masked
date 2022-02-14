
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int stream_t ;
struct TYPE_10__ {scalar_t__ length; scalar_t__ start; } ;
typedef TYPE_1__ mtrk_t ;
typedef int int32_t ;
struct TYPE_11__ {TYPE_3__* p_sys; int * s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_12__ {unsigned int ppqn; int pts; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int *,unsigned int,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*,char*) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (int *,int*,int) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static
int FUNC_11 (demux_t *VAR_2, mtrk_t *VAR_3)
{
    stream_t *VAR_4 = VAR_2->s;
    demux_sys_t *VAR_5 = VAR_2->p_sys;
    uint8_t *VAR_6;
    uint8_t VAR_7;
    int32_t VAR_8;
    int VAR_9 = 0;

    if (FUNC_9 (VAR_4, &VAR_7, 1) != 1)
        return -1;

    VAR_8 = FUNC_1 (VAR_4);
    if (VAR_8 < 0)
        return -1;

    VAR_6 = FUNC_4 (VAR_8 + 1);
    if ((VAR_6 == ((void*)0))
     || (FUNC_9 (VAR_4, VAR_6, VAR_8) != VAR_8))
    {
        FUNC_3 (VAR_6);
        return -1;
    }

    VAR_6[VAR_8] = '\0';

    switch (VAR_7)
    {
        case 0x00:
            break;

        case 0x01:
            FUNC_0 ((char *)VAR_6);
            FUNC_7 (VAR_2, "Text      : %s", (char *)VAR_6);
            break;

        case 0x02:
            FUNC_0 ((char *)VAR_6);
            FUNC_7 (VAR_2, "Copyright : %s", (char *)VAR_6);
            break;

        case 0x03:
            FUNC_0 ((char *)VAR_6);
            FUNC_7 (VAR_2, "Track name: %s", (char *)VAR_6);
            break;

        case 0x04:
            FUNC_0 ((char *)VAR_6);
            FUNC_7 (VAR_2, "Instrument: %s", (char *)VAR_6);
            break;

        case 0x05:

            break;

        case 0x06:
            FUNC_0 ((char *)VAR_6);
            FUNC_7 (VAR_2, "Marker    : %s", (char *)VAR_6);
            break;

        case 0x07:
            FUNC_0 ((char *)VAR_6);
            FUNC_7 (VAR_2, "Cue point : %s", (char *)VAR_6);
            break;

        case 0x08:
            FUNC_0 ((char *)VAR_6);
            FUNC_7 (VAR_2, "Patch name: %s", (char *)VAR_6);
            break;

        case 0x09:
            FUNC_0 ((char *)VAR_6);
            FUNC_5 (VAR_2, "MIDI port : %s", (char *)VAR_6);
            break;

        case 0x2F:
            if (VAR_3->start + VAR_3->length != FUNC_10 (VAR_4))
            {
                FUNC_6 (VAR_2, "misplaced end of track");
                VAR_9 = -1;
            }
            break;

        case 0x51:
            if (VAR_8 == 3)
            {
                uint32_t VAR_10 = (VAR_6[0] << 16)
                               | (VAR_6[1] << 8) | VAR_6[2];
                unsigned VAR_11 = 60 * 1000000 / (VAR_10 ? VAR_10 : 1);
                FUNC_5 (VAR_2, "tempo: %uus/qn -> %u BPM",
                         (unsigned)VAR_10, VAR_11);

                if (VAR_11 < VAR_1)
                {
                    FUNC_8 (VAR_2, "tempo too slow -> %u BPM", VAR_1);
                    VAR_11 = VAR_1;
                }
                else
                if (VAR_11 > VAR_0)
                {
                    FUNC_8 (VAR_2, "tempo too fast -> %u BPM", VAR_0);
                    VAR_11 = VAR_0;
                }
                FUNC_2 (&VAR_5->pts, VAR_5->ppqn * VAR_11, 60);
            }
            else
                VAR_9 = -1;
            break;

        case 0x54:
            if (VAR_8 == 5)
                FUNC_8 (VAR_2, "SMPTE offset not implemented");
            else
                VAR_9 = -1;
            break;

        case 0x58:
            if (VAR_8 == 4)
                ;
            else
                VAR_9 = -1;
            break;

        case 0x59:
            if (VAR_8 != 2)
                FUNC_8(VAR_2, "invalid key signature");
            break;

        case 0x7f:
            FUNC_5 (VAR_2, "ignored proprietary SMF Meta Event (%d bytes)",
                     VAR_8);
            break;

        default:
            FUNC_8 (VAR_2, "unknown SMF Meta Event type 0x%02X (%d bytes)",
                      VAR_7, VAR_8);
    }

    FUNC_3 (VAR_6);
    return VAR_9;
}
