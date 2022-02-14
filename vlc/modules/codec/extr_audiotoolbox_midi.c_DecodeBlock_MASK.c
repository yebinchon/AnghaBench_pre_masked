
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_20__ {int outputUnit; int end_date; int synthUnit; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_21__ {int i_flags; scalar_t__ i_pts; int i_buffer; int* p_buffer; int i_length; } ;
typedef TYPE_4__ block_t ;
typedef int UInt32 ;
struct TYPE_23__ {int mNumberBuffers; TYPE_1__* mBuffers; } ;
struct TYPE_22__ {int mWordClockTime; int mFlags; } ;
struct TYPE_18__ {int mNumberChannels; unsigned int mDataByteSize; int* mData; } ;
typedef scalar_t__ OSStatus ;
typedef int Float32 ;
typedef TYPE_5__ AudioTimeStamp ;
typedef TYPE_6__ AudioBufferList ;


 scalar_t__ FUNC_0 (int ,int *,TYPE_5__*,int ,unsigned int,TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int,int,int,int ) ;
 int FUNC_3 (int ,int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,scalar_t__) ;
 TYPE_4__* FUNC_8 (TYPE_2__*,unsigned int) ;
 int FUNC_9 (TYPE_2__*,TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_2__*,char*,...) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_11 (decoder_t *VAR_7, block_t *VAR_8)
{
    decoder_sys_t *VAR_9 = VAR_7->p_sys;
    block_t *VAR_10 = ((void*)0);
    OSStatus VAR_11 = VAR_6;

    if (VAR_8 == ((void*)0))
        return VAR_3;

    if (VAR_8->i_flags & (VAR_1|VAR_0)) {
        FUNC_1(VAR_7);
        if (VAR_8->i_flags & VAR_0) {
            FUNC_4(VAR_8);
            return VAR_3;
        }
    }

    if ( VAR_8->i_pts != VAR_4 &&
         FUNC_5(&VAR_9->end_date) == VAR_4 ) {
        FUNC_7(&VAR_9->end_date, VAR_8->i_pts);
    } else if (VAR_8->i_pts < FUNC_5(&VAR_9->end_date)) {
        FUNC_10(VAR_7, "MIDI message in the past?");
        goto drop;
    }

    if (VAR_8->i_buffer < 1)
        goto drop;

    uint8_t VAR_12 = VAR_8->p_buffer[0];
    uint8_t VAR_13 = (VAR_8->i_buffer > 1) ? (VAR_8->p_buffer[1]) : 0;
    uint8_t VAR_14 = (VAR_8->i_buffer > 2) ? (VAR_8->p_buffer[2]) : 0;

    switch (VAR_12 & 0xF0)
    {
        case 133:
        case 132:
        case 130:
        case 134:
        case 129:
        case 135:
        case 131:
            FUNC_2(VAR_9->synthUnit, VAR_12, VAR_13, VAR_14, 0);
        break;

        case 128:
            if (VAR_8->i_buffer < VAR_2)
                FUNC_3(VAR_9->synthUnit, VAR_8->p_buffer, (UInt32)VAR_8->i_buffer);
        break;

        default:
            FUNC_10(VAR_7, "unhandled MIDI event: %x", VAR_12 & 0xF0);
        break;
    }




    unsigned VAR_15 =
       (VAR_8->i_pts - FUNC_5(&VAR_9->end_date)) * 441 / 10000;

    if (VAR_15 == 0)
        goto drop;

    VAR_10 = FUNC_8(VAR_7, VAR_15);
    if (VAR_10 == ((void*)0))
        goto drop;

    VAR_10->i_pts = FUNC_5(&VAR_9->end_date );
    VAR_10->i_length = FUNC_6(&VAR_9->end_date, VAR_15)
                      - VAR_10->i_pts;


    AudioTimeStamp VAR_16 = {};
    VAR_16.mFlags = VAR_5;
    VAR_16.mWordClockTime = VAR_10->i_pts;


    AudioBufferList VAR_17;
    VAR_17.mNumberBuffers = 1;
    VAR_17.mBuffers[0].mNumberChannels = 2;
    VAR_17.mBuffers[0].mDataByteSize = VAR_15 * sizeof(Float32) * 2;
    VAR_17.mBuffers[0].mData = VAR_10->p_buffer;

    VAR_11 = FUNC_0(VAR_9->outputUnit,
                             ((void*)0),
                             &VAR_16, 0,
                             VAR_15, &VAR_17);

    if (VAR_11 != VAR_6) {
        FUNC_10(VAR_7, "rendering audio unit failed: %i", VAR_11);
        FUNC_4(VAR_10);
        VAR_10 = ((void*)0);
    }

drop:
    FUNC_4(VAR_8);
    if (VAR_10 != ((void*)0))
        FUNC_9(VAR_7, VAR_10);
    return VAR_3;
}
