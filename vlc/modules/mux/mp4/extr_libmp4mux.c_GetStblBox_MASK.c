
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int vlc_object_t ;
struct TYPE_9__ {scalar_t__ i_cat; } ;
struct TYPE_10__ {unsigned int i_samples_count; TYPE_3__* samples; TYPE_1__ fmt; int i_timescale; scalar_t__ b_hasbframes; } ;
typedef TYPE_2__ mp4mux_trackinfo_t ;
struct TYPE_11__ {int i_pos; int i_size; scalar_t__ i_pts_dts; scalar_t__ i_length; int i_flags; } ;
typedef TYPE_3__ mp4mux_sample_t ;
typedef int int64_t ;
typedef int bo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__*,int*) ;
 int * FUNC_1 (int *,TYPE_2__*,int) ;
 int * FUNC_2 (int *,TYPE_2__*,int) ;
 int * FUNC_3 (int *,TYPE_2__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,unsigned int) ;
 int * FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (int *,char*,unsigned int) ;
 int FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static bo_t *FUNC_14(vlc_object_t *VAR_4, mp4mux_trackinfo_t *VAR_5, bool VAR_6, bool VAR_7)
{

    bo_t *VAR_8 = FUNC_9("stsd", 0, 0);
    if(!VAR_8)
        return ((void*)0);
    FUNC_5(VAR_8, 1);
    if (VAR_5->fmt.i_cat == VAR_0)
        FUNC_10(VAR_8, FUNC_1(VAR_4, VAR_5, VAR_6));
    else if (VAR_5->fmt.i_cat == VAR_3)
        FUNC_10(VAR_8, FUNC_3(VAR_4, VAR_5, VAR_6));
    else if (VAR_5->fmt.i_cat == VAR_2)
        FUNC_10(VAR_8, FUNC_2(VAR_4, VAR_5, VAR_6));


    bo_t *VAR_9;

    if (VAR_7) {

        VAR_9 = FUNC_9("co64", 0, 0);
    } else {

        VAR_9 = FUNC_9("stco", 0, 0);
    }
    if(!VAR_9)
    {
        FUNC_7(VAR_8);
        return ((void*)0);
    }
    FUNC_5(VAR_9, 0);


    bo_t *VAR_10 = FUNC_9("stsc", 0, 0);
    if(!VAR_10)
    {
        FUNC_7(VAR_9);
        FUNC_7(VAR_8);
        return ((void*)0);
    }
    FUNC_5(VAR_10, 0);

    unsigned VAR_11 = 0;
    unsigned VAR_12 = 0, VAR_13 = 0;
    for (unsigned VAR_14 = 0; VAR_14 < VAR_5->i_samples_count; VAR_11++) {
        mp4mux_sample_t *VAR_15 = VAR_5->samples;
        int VAR_16 = VAR_14;

        if (VAR_7)
            FUNC_6(VAR_9, VAR_15[VAR_14].i_pos);
        else
            FUNC_5(VAR_9, VAR_15[VAR_14].i_pos);

        for (; VAR_14 < VAR_5->i_samples_count; VAR_14++)
            if (VAR_14 >= VAR_5->i_samples_count - 1 ||
                    VAR_15[VAR_14].i_pos + VAR_15[VAR_14].i_size != VAR_15[VAR_14+1].i_pos) {
                VAR_14++;
                break;
            }


        if (VAR_12 != VAR_14 - VAR_16) {
            FUNC_5(VAR_10, 1 + VAR_11);
            FUNC_5(VAR_10, VAR_14 - VAR_16) ;
            FUNC_5(VAR_10, 1);
            VAR_12 = VAR_14 - VAR_16;
            VAR_13++;
        }
    }


    FUNC_8(VAR_9, 12, VAR_11);
    if(VAR_4)
        FUNC_12(VAR_4, "created %d chunks (stco)", VAR_11);


    FUNC_8(VAR_10, 12, VAR_13 );


    bo_t *VAR_17 = FUNC_9("stts", 0, 0);
    if(!VAR_17)
    {
        FUNC_7(VAR_8);
        FUNC_7(VAR_9);
        FUNC_7(VAR_10);
        return ((void*)0);
    }
    FUNC_5(VAR_17, 0);

    vlc_tick_t VAR_18 = 0;
    int64_t VAR_19 = 0;
    unsigned VAR_20 = 0;
    for (unsigned VAR_21 = 0; VAR_21 < VAR_5->i_samples_count; VAR_20++) {
        int VAR_22 = VAR_21;

        int64_t VAR_23 = FUNC_0(&VAR_5->samples[VAR_21], VAR_5->i_timescale,
                                                  &VAR_18, &VAR_19);
        for (unsigned VAR_24=VAR_21+1; VAR_24 < VAR_5->i_samples_count; VAR_24++)
        {
            vlc_tick_t VAR_25 = VAR_18;
            int64_t VAR_26 = VAR_19;
            int64_t VAR_27 = FUNC_0(&VAR_5->samples[VAR_24], VAR_5->i_timescale,
                                                          &VAR_25, &VAR_26);
            if( VAR_27 != VAR_23 )
                break;

            VAR_18 = VAR_25;
            VAR_19 = VAR_26;
            VAR_21 = VAR_24;
        }

        FUNC_5(VAR_17, ++VAR_21 - VAR_22);
        FUNC_5(VAR_17, VAR_23);
    }
    FUNC_8(VAR_17, 12, VAR_20);





    bo_t *VAR_28 = ((void*)0);
    if ( VAR_5->b_hasbframes && (VAR_28 = FUNC_9("ctts", 0, 0)) )
    {
        FUNC_5(VAR_28, 0);
        VAR_20 = 0;
        for (unsigned VAR_29 = 0; VAR_29 < VAR_5->i_samples_count; VAR_20++)
        {
            int VAR_30 = VAR_29;
            vlc_tick_t VAR_31 = VAR_5->samples[VAR_29].i_pts_dts;

            for (; VAR_29 < VAR_5->i_samples_count; ++VAR_29)
                if (VAR_29 == VAR_5->i_samples_count || VAR_5->samples[VAR_29].i_pts_dts != VAR_31)
                    break;

            FUNC_5(VAR_28, VAR_29 - VAR_30);
            FUNC_5(VAR_28, FUNC_13(VAR_31, VAR_5->i_timescale) );
        }
        FUNC_8(VAR_28, 12, VAR_20);
    }

    bo_t *VAR_32 = FUNC_9("stsz", 0, 0);
    if(!VAR_32)
    {
        FUNC_7(VAR_8);
        FUNC_7(VAR_9);
        FUNC_7(VAR_17);
        return ((void*)0);
    }
    int VAR_33 = 0;
    for (unsigned VAR_34 = 0; VAR_34 < VAR_5->i_samples_count; VAR_34++)
    {
        if ( VAR_34 == 0 )
            VAR_33 = VAR_5->samples[VAR_34].i_size;
        else if ( VAR_5->samples[VAR_34].i_size != VAR_33 )
        {
            VAR_33 = 0;
            break;
        }
    }
    FUNC_5(VAR_32, VAR_33);
    FUNC_5(VAR_32, VAR_5->i_samples_count);
    if ( VAR_33 == 0 )
    {
        for (unsigned VAR_35 = 0; VAR_35 < VAR_5->i_samples_count; VAR_35++)
            FUNC_5(VAR_32, VAR_5->samples[VAR_35].i_size);
    }


    bo_t *VAR_36 = ((void*)0);
    VAR_20 = 0;
    if ( VAR_5->fmt.i_cat == VAR_3 || VAR_5->fmt.i_cat == VAR_0 )
    {
        vlc_tick_t VAR_37 = -1;
        for (unsigned VAR_38 = 0; VAR_38 < VAR_5->i_samples_count; VAR_38++)
        {
            if ( VAR_37 != -1 )
            {
                VAR_37 += VAR_5->samples[VAR_38].i_length + VAR_5->samples[VAR_38].i_pts_dts;
                if ( VAR_37 < FUNC_4(2) )
                    continue;
            }

            if (VAR_5->samples[VAR_38].i_flags & VAR_1) {
                if (VAR_36 == ((void*)0)) {
                    VAR_36 = FUNC_9("stss", 0, 0);
                    if(!VAR_36)
                        break;
                    FUNC_5(VAR_36, 0);
                }
                FUNC_5(VAR_36, 1 + VAR_38);
                VAR_20++;
                VAR_37 = 0;
            }
        }
    }

    if (VAR_36)
        FUNC_8(VAR_36, 12, VAR_20);


    bo_t *VAR_39 = FUNC_11("stbl");
    if(!VAR_39)
    {
        FUNC_7(VAR_8);
        FUNC_7(VAR_9);
        FUNC_7(VAR_17);
        FUNC_7(VAR_32);
        FUNC_7(VAR_36);
        FUNC_7(VAR_28);
        return ((void*)0);
    }
    FUNC_10(VAR_39, VAR_8);
    FUNC_10(VAR_39, VAR_17);
    if (VAR_36)
        FUNC_10(VAR_39, VAR_36);
    if (VAR_28)
        FUNC_10(VAR_39, VAR_28);
    FUNC_10(VAR_39, VAR_10);
    FUNC_10(VAR_39, VAR_32);
    FUNC_10(VAR_39, VAR_9);

    return VAR_39;
}
