
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_11__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int int64_t ;
struct TYPE_32__ {int s; int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_33__ {unsigned int i_track; scalar_t__ i_time; scalar_t__ i_read_increment; scalar_t__ i_length; int i_movi_lastchunk_pos; int i_movi_begin; TYPE_7__** track; scalar_t__ b_seekable; scalar_t__ b_interleaved; scalar_t__ b_fastseekable; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_34__ {int i_flags; scalar_t__ i_pts; } ;
typedef TYPE_5__ block_t ;
struct TYPE_35__ {int b_ok; int i_posf; int i_toread; } ;
typedef TYPE_6__ avi_track_toread_t ;
struct TYPE_29__ {size_t i_size; TYPE_2__* p_entry; } ;
struct TYPE_30__ {scalar_t__ i_cat; int i_codec; } ;
struct TYPE_36__ {int b_activated; int b_eof; size_t i_idxposc; scalar_t__ i_idxposb; int i_samplesize; int i_blockno; int i_blocksize; TYPE_11__ idx; TYPE_1__ fmt; scalar_t__ p_es_dv_audio; scalar_t__ p_es; } ;
typedef TYPE_7__ avi_track_t ;
struct TYPE_37__ {unsigned int i_stream; scalar_t__ i_cat; int i_size; int i_pos; int i_peek; int i_fourcc; } ;
typedef TYPE_8__ avi_packet_t ;
struct TYPE_38__ {int i_length; int i_lengthtotal; int i_pos; int i_flags; int i_id; } ;
typedef TYPE_9__ avi_entry_t ;
struct TYPE_31__ {int i_pos; scalar_t__ i_length; int i_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 void* FUNC_3 (TYPE_7__*,scalar_t__) ;
 int FUNC_4 (TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_7__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_10 (TYPE_3__*,TYPE_7__*,int,size_t) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,int) ;
 size_t FUNC_14 (scalar_t__,size_t) ;
 int FUNC_15 (TYPE_11__*,int*,TYPE_9__*) ;
 int FUNC_16 (int ,int ,scalar_t__,int*) ;
 int FUNC_17 (int ,scalar_t__) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_19 (int ,int) ;

__attribute__((used)) static int FUNC_20( demux_t *VAR_10 )
{
    demux_sys_t *VAR_11 = VAR_10->p_sys;

    unsigned int VAR_12 = 0;
    unsigned int VAR_13;

    avi_track_toread_t VAR_14[100];



    for( VAR_13 = 0; VAR_13 < VAR_11->i_track; VAR_13++ )
    {
        avi_track_t *VAR_15 = VAR_11->track[VAR_13];
        bool VAR_16 = 0;

        FUNC_16( VAR_10->out, VAR_4, VAR_15->p_es, &VAR_16 );
        if( VAR_15->p_es_dv_audio )
        {
            bool VAR_17 = 0;
            FUNC_16( VAR_10->out, VAR_4, VAR_15->p_es_dv_audio, &VAR_17 );
            VAR_16 |= VAR_17;
        }
        if( VAR_16 && !VAR_15->b_activated )
        {
            if( VAR_11->b_seekable)
            {
                FUNC_8( VAR_10, VAR_13, VAR_11->i_time );
            }
            VAR_15->b_activated = 1;
        }
        else if( !VAR_16 && VAR_15->b_activated )
        {
            VAR_15->b_activated = 0;
        }
        if( VAR_16 )
        {
            VAR_12++;
        }
    }

    if( VAR_12 <= 0 )
    {
        VAR_11->i_time += VAR_11->i_read_increment;
        if( VAR_11->i_length != 0 )
        {
            if( VAR_11->i_time >= VAR_11->i_length )
                return VAR_7;
            return VAR_8;
        }
        FUNC_18( VAR_10, "no track selected, exiting..." );
        return VAR_7;
    }


    FUNC_17( VAR_10->out, VAR_9 + VAR_11->i_time );
    VAR_11->i_time += VAR_11->i_read_increment;


    for( VAR_13 = 0; VAR_13 < VAR_11->i_track; VAR_13++ )
    {
        avi_track_t *VAR_18 = VAR_11->track[VAR_13];

        VAR_14[VAR_13].b_ok = VAR_18->b_activated && !VAR_18->b_eof;
        if( VAR_18->i_idxposc < VAR_18->idx.i_size )
        {
            VAR_14[VAR_13].i_posf = VAR_18->idx.p_entry[VAR_18->i_idxposc].i_pos;
           if( VAR_18->i_idxposb > 0 )
           {
                VAR_14[VAR_13].i_posf += 8 + VAR_18->i_idxposb;
           }
        }
        else
        {
            VAR_14[VAR_13].i_posf = -1;
        }

        vlc_tick_t VAR_19 = VAR_11->i_time - FUNC_2( VAR_18 );

        if( VAR_18->i_samplesize )
        {
            VAR_14[VAR_13].i_toread = FUNC_3( VAR_18, VAR_19 );
        }
        else if ( VAR_19 > FUNC_12(-2) )
        {
            int64_t VAR_20 = FUNC_4( VAR_18, VAR_19 );
            if( VAR_19 > 0 && FUNC_0( VAR_18, VAR_20 ) < VAR_19 )
            {


                VAR_20++;
            }
            VAR_14[VAR_13].i_toread = VAR_20;
        }
        else
            VAR_14[VAR_13].i_toread = -1;
    }

    for( ;; )
    {
        avi_track_t *VAR_21;
        bool VAR_22;
        block_t *VAR_23;
        int64_t VAR_24;
        unsigned int VAR_25;
        size_t VAR_26;


        for( VAR_25 = 0, VAR_22 = 1, VAR_24 = -1; VAR_25 < VAR_11->i_track; VAR_25++ )
        {
            if( !VAR_14[VAR_25].b_ok ||
                ( VAR_11->b_fastseekable && VAR_11->b_interleaved &&
                  FUNC_0( VAR_11->track[VAR_25], VAR_14[VAR_25].i_toread ) <= -VAR_11->i_read_increment ) )
            {
                continue;
            }

            if( VAR_14[VAR_25].i_toread > 0 )
            {
                VAR_22 = 0;

                if( VAR_14[VAR_25].i_posf > 0 )
                {
                    if( VAR_24 == -1 || VAR_24 > VAR_14[VAR_25].i_posf )
                    {
                        VAR_13 = VAR_25;
                        VAR_24 = VAR_14[VAR_25].i_posf;
                    }
                }
            }
        }

        if( VAR_22 )
        {
            for( VAR_25 = 0; VAR_25 < VAR_11->i_track; VAR_25++ )
            {
                if( VAR_14[VAR_25].b_ok && VAR_14[VAR_25].i_toread >= 0 )
                    return VAR_8;
            }
            FUNC_18( VAR_10, "all tracks have failed, exiting..." );
            return VAR_7;
        }

        if( VAR_24 == -1 )
        {
            unsigned short VAR_27 = 0;



            if( VAR_11->b_seekable && VAR_11->i_movi_lastchunk_pos >= VAR_11->i_movi_begin + 12 )
            {
                if (FUNC_19(VAR_10->s, VAR_11->i_movi_lastchunk_pos))
                    return VAR_6;

                if( FUNC_6( VAR_10 ) )
                {
                    return( FUNC_9( VAR_10 ) ? 0 : 1 );
                }
            }
            else
            {
                if (FUNC_19(VAR_10->s, VAR_11->i_movi_begin + 12))
                    return VAR_6;
            }

            for( ;; )
            {
                avi_packet_t VAR_28;

                if( FUNC_5( VAR_10, &VAR_28 ) )
                {
                    FUNC_18( VAR_10,
                             "cannot get packet header, track disabled" );
                    return( FUNC_9( VAR_10 ) ? 0 : 1 );
                }
                if( VAR_28.i_stream >= VAR_11->i_track ||
                    ( VAR_28.i_cat != VAR_0 && VAR_28.i_cat != VAR_5 ) )
                {
                    if( FUNC_6( VAR_10 ) )
                    {
                        FUNC_18( VAR_10,
                                  "cannot skip packet, track disabled" );
                        return( FUNC_9( VAR_10 ) ? 0 : 1 );
                    }

                    if( !++VAR_27 )
                         FUNC_18( VAR_10, "don't seem to find any data..." );
                    continue;
                }
                else
                {
                    VAR_13 = VAR_28.i_stream;
                    VAR_21 = VAR_11->track[VAR_13];


                    avi_entry_t VAR_29;
                    VAR_29.i_id = VAR_28.i_fourcc;
                    VAR_29.i_flags = FUNC_1(VAR_21->fmt.i_codec, VAR_28.i_peek);
                    VAR_29.i_pos = VAR_28.i_pos;
                    VAR_29.i_length = VAR_28.i_size;
                    VAR_29.i_lengthtotal = VAR_29.i_length;
                    FUNC_15( &VAR_21->idx, &VAR_11->i_movi_lastchunk_pos, &VAR_29 );


                    if( FUNC_0( VAR_21, VAR_14[VAR_13].i_toread ) > -VAR_11->i_read_increment )
                    {
                        break;
                    }
                    else
                    {
                        if( FUNC_6( VAR_10 ) )
                        {
                            FUNC_18( VAR_10,
                                      "cannot skip packet, track disabled" );
                            return( FUNC_9( VAR_10 ) ? 0 : 1 );
                        }
                    }
                }
            }

        }
        else
        {
            if (FUNC_19(VAR_10->s, VAR_24))
                return VAR_6;
        }


        VAR_21 = VAR_11->track[VAR_13];


        if( VAR_21->i_samplesize )
        {
            int64_t VAR_30;

            if( ( VAR_30 = VAR_14[VAR_13].i_toread ) <= 0 )
            {
                if( VAR_21->i_samplesize > 1 )
                {
                    VAR_30 = VAR_21->i_samplesize;
                }
                else
                {
                    VAR_30 = FUNC_3( VAR_21, FUNC_11(20) );
                    VAR_30 = FUNC_13( VAR_30, 100 );
                }
            }
            VAR_26 = FUNC_14( VAR_21->idx.p_entry[VAR_21->i_idxposc].i_length -
                                VAR_21->i_idxposb,
                            (size_t) VAR_30 );
        }
        else
        {
            VAR_26 = VAR_21->idx.p_entry[VAR_21->i_idxposc].i_length;
        }

        if( VAR_21->i_idxposb == 0 )
        {
            VAR_26 += 8;
        }

        if( ( VAR_23 = FUNC_10( VAR_10, VAR_21,
                        ( VAR_21->i_idxposb == 0 ) ? 8 : 0, VAR_26 ) )==((void*)0) )
        {
            FUNC_18( VAR_10, "failed reading data" );
            VAR_21->b_eof = 0;
            VAR_14[VAR_13].b_ok = 0;
            continue;
        }

        VAR_23->i_pts = VAR_9 + FUNC_2( VAR_21 );
        if( VAR_21->idx.p_entry[VAR_21->i_idxposc].i_flags&VAR_1 )
        {
            VAR_23->i_flags = VAR_2;
        }
        else
        {
            VAR_23->i_flags = VAR_3;
        }


        if( VAR_21->i_samplesize )
        {
            if( VAR_21->i_idxposb == 0 )
            {
                VAR_26 -= 8;
            }
            VAR_14[VAR_13].i_toread -= VAR_26;
            VAR_21->i_idxposb += VAR_26;
            if( VAR_21->i_idxposb >=
                    VAR_21->idx.p_entry[VAR_21->i_idxposc].i_length )
            {
                VAR_21->i_idxposb = 0;
                VAR_21->i_idxposc++;
            }
        }
        else
        {
            int VAR_31 = VAR_21->idx.p_entry[VAR_21->i_idxposc].i_length;

            VAR_21->i_idxposc++;
            if( VAR_21->fmt.i_cat == VAR_0 )
            {
                VAR_21->i_blockno += VAR_21->i_blocksize > 0 ? ( VAR_31 + VAR_21->i_blocksize - 1 ) / VAR_21->i_blocksize : 1;
            }
            VAR_14[VAR_13].i_toread--;
        }

        if( VAR_21->i_idxposc < VAR_21->idx.i_size)
        {
            VAR_14[VAR_13].i_posf =
                VAR_21->idx.p_entry[VAR_21->i_idxposc].i_pos;
            if( VAR_21->i_idxposb > 0 )
            {
                VAR_14[VAR_13].i_posf += 8 + VAR_21->i_idxposb;
            }

        }
        else
        {
            VAR_14[VAR_13].i_posf = -1;
        }

        FUNC_7( VAR_10, VAR_21, VAR_23 );
    }
}
