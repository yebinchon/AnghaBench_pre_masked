
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_22__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_28__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_mux_t ;
struct TYPE_29__ {unsigned int i_nb_streams; TYPE_5__** pp_streams; int i_mfhd_sequence; } ;
typedef TYPE_4__ sout_mux_sys_t ;
struct TYPE_26__ {TYPE_6__* p_first; } ;
struct TYPE_30__ {scalar_t__ i_written_duration; int tinfo; scalar_t__ b_hasiframes; int towrite; TYPE_22__ read; } ;
typedef TYPE_5__ mp4_stream_t ;
struct TYPE_31__ {TYPE_2__* p_block; struct TYPE_31__* p_next; } ;
typedef TYPE_6__ mp4_fragentry_t ;
struct TYPE_32__ {TYPE_1__* b; } ;
typedef TYPE_7__ bo_t ;
struct TYPE_33__ {scalar_t__ i_cat; } ;
struct TYPE_27__ {scalar_t__ i_length; scalar_t__ i_buffer; int i_flags; scalar_t__ i_dts; scalar_t__ i_pts; } ;
struct TYPE_25__ {int i_flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,int const,unsigned int,int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_22__,TYPE_6__*) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_7__*,int) ;
 int FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,size_t,int) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,int) ;
 TYPE_7__* FUNC_9 (char*,int,int) ;
 int FUNC_10 (TYPE_7__*,TYPE_7__*) ;
 TYPE_7__* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 TYPE_8__* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (scalar_t__,int ) ;

__attribute__((used)) static bo_t *FUNC_19(sout_mux_t *VAR_12, size_t *VAR_13,
                        vlc_tick_t VAR_14, const uint64_t VAR_15)
{
    sout_mux_sys_t *VAR_16 = VAR_12->p_sys;

    bo_t *VAR_17, *VAR_18;
    size_t VAR_19 = 0;

    *VAR_13 = 0;

    VAR_17 = FUNC_11("moof");
    if(!VAR_17)
        return ((void*)0);



    VAR_18 = FUNC_9("mfhd", 0, 0);
    if(!VAR_18)
    {
        FUNC_5(VAR_17);
        return ((void*)0);
    }
    FUNC_3(VAR_18, VAR_16->i_mfhd_sequence++);

    FUNC_10(VAR_17, VAR_18);

    for (unsigned int VAR_20 = 0; VAR_20 < VAR_16->i_nb_streams; VAR_20++)
    {
        mp4_stream_t *VAR_21 = VAR_16->pp_streams[VAR_20];


        bo_t *VAR_22 = FUNC_11("traf");
        if(!VAR_22)
            continue;
        uint32_t VAR_23 = 0;
        vlc_tick_t VAR_24 = VAR_21->i_written_duration;
        bool VAR_25 = 1;
        bool VAR_26 = 1;
        if ( VAR_21->read.p_first )
        {
            mp4_fragentry_t *VAR_27 = VAR_21->read.p_first->p_next;
            while (VAR_27 && (VAR_26 || VAR_25))
            {

                VAR_26 &= ( VAR_27->p_block->i_length == VAR_21->read.p_first->p_block->i_length );
                VAR_25 &= ( VAR_27->p_block->i_buffer == VAR_21->read.p_first->p_block->i_buffer );
                VAR_27 = VAR_27->p_next;
            }
        }

        uint32_t VAR_28 = 0x0;
        if (VAR_21->read.p_first)
        {

            if (VAR_26 &&
                VAR_21->read.p_first->p_block->i_length !=
                    FUNC_12(VAR_21->tinfo) &&
                VAR_21->read.p_first->p_block->i_length)
                    VAR_28 |= VAR_2;


            if (VAR_25 &&
                VAR_21->read.p_first->p_block->i_buffer !=
                    FUNC_13(VAR_21->tinfo) &&
                VAR_21->read.p_first->p_block->i_buffer)
                    VAR_28 |= VAR_3;
        }
        else
        {

            VAR_28 |= VAR_4;
        }


        bo_t *VAR_29 = FUNC_9("tfhd", 0, VAR_28);
        if(!VAR_29)
        {
            FUNC_5(VAR_22);
            continue;
        }
        FUNC_3(VAR_29, FUNC_15(VAR_21->tinfo));


        if (VAR_28 & VAR_2)
            FUNC_3(VAR_29, FUNC_18(VAR_21->read.p_first->p_block->i_length,
                                                    FUNC_16(VAR_21->tinfo)));


        if (VAR_28 & VAR_3)
            FUNC_3(VAR_29, VAR_21->read.p_first->p_block->i_buffer);

        FUNC_10(VAR_22, VAR_29);


        bo_t *VAR_30 = FUNC_9("tfdt", 1, 0);
        if(!VAR_30)
        {
            FUNC_5(VAR_22);
            continue;
        }
        FUNC_4(VAR_30, FUNC_18(VAR_21->i_written_duration,
                                                FUNC_16(VAR_21->tinfo)) );
        FUNC_10(VAR_22, VAR_30);


        if (VAR_21->read.p_first)
        {
            uint32_t VAR_31 = 0x0;

            if (VAR_21->b_hasiframes && !(VAR_21->read.p_first->p_block->i_flags & VAR_1))
                VAR_31 |= VAR_6;

            if (!VAR_26 ||
                ( !(VAR_28 & VAR_2) &&
                    FUNC_12(VAR_21->tinfo) == 0 ))
                VAR_31 |= VAR_7;

            if (!VAR_25 ||
                ( !(VAR_28 & VAR_3) &&
                  FUNC_13(VAR_21->tinfo) == 0 ))
                VAR_31 |= VAR_8;

            if (FUNC_17(VAR_21->tinfo))
                VAR_31 |= VAR_9;

            if (VAR_19 == 0)
                VAR_31 |= VAR_5;

            bo_t *VAR_32 = FUNC_9("trun", 0, VAR_31);
            if(!VAR_32)
            {
                FUNC_5(VAR_22);
                continue;
            }


            uint32_t VAR_33 = 0;
            vlc_tick_t VAR_34 = VAR_21->i_written_duration;
            mp4_fragentry_t *VAR_35 = VAR_21->read.p_first;
            while(VAR_35)
            {
                if ( VAR_14 && VAR_34 + VAR_35->p_block->i_length > VAR_14 )
                    break;
                VAR_33++;
                VAR_34 += VAR_35->p_block->i_length;
                VAR_35 = VAR_35->p_next;
            }
            FUNC_3(VAR_32, VAR_33);

            if (VAR_31 & VAR_5)
            {
                VAR_19 = FUNC_7(VAR_17) + FUNC_7(VAR_22) + FUNC_7(VAR_32);
                FUNC_3(VAR_32, 0xdeadbeef);
            }

            if (VAR_31 & VAR_6)
                FUNC_3(VAR_32, 1<<16);

            while(VAR_21->read.p_first && VAR_33)
            {
                FUNC_1(VAR_21->read, VAR_35);

                if (VAR_31 & VAR_7)
                    FUNC_3(VAR_32, FUNC_18(VAR_35->p_block->i_length,
                                                            FUNC_16(VAR_21->tinfo)));

                if (VAR_31 & VAR_8)
                    FUNC_3(VAR_32, VAR_35->p_block->i_buffer);

                if (VAR_31 & VAR_9)
                {
                    vlc_tick_t VAR_36 = 0;
                    if ( VAR_35->p_block->i_dts != VAR_11 &&
                         VAR_35->p_block->i_pts > VAR_35->p_block->i_dts )
                    {
                        VAR_36 = VAR_35->p_block->i_pts - VAR_35->p_block->i_dts;
                    }
                    FUNC_3(VAR_32, FUNC_18(VAR_36, FUNC_16(VAR_21->tinfo)));
                }

                *VAR_13 += VAR_35->p_block->i_buffer;

                FUNC_2(VAR_21->towrite, VAR_35);
                VAR_33--;
                VAR_23++;


                if (VAR_21->b_hasiframes && (VAR_35->p_block->i_flags & VAR_1) &&
                    (FUNC_14(VAR_21->tinfo)->i_cat == VAR_10 ||
                     FUNC_14(VAR_21->tinfo)->i_cat == VAR_0))
                {
                    FUNC_0(VAR_21, VAR_15, VAR_20, VAR_23, VAR_24);
                }

                VAR_24 += VAR_35->p_block->i_length;
            }

            FUNC_10(VAR_22, VAR_32);
        }

        FUNC_10(VAR_17, VAR_22);
    }

    if(!VAR_17->b)
    {
        FUNC_5(VAR_17);
        return ((void*)0);
    }

    FUNC_8(VAR_17, FUNC_7(VAR_17));


    if (VAR_19)
    {

        FUNC_6(VAR_17, VAR_19, FUNC_7(VAR_17) + 8);
    }


    VAR_17->b->i_flags |= VAR_1;

    return VAR_17;
}
