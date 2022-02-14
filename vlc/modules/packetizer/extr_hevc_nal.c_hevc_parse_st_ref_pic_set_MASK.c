
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int nal_ue_t ;
typedef int nal_u1_t ;
struct TYPE_3__ {unsigned int num_delta_pocs; } ;
typedef TYPE_1__ hevc_short_term_ref_pic_set_t ;
typedef int bs_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4( bs_t *VAR_0, unsigned VAR_1,
                                       unsigned VAR_2,
                                       hevc_short_term_ref_pic_set_t *VAR_3 )
{
    if( VAR_1 && FUNC_1( VAR_0 ) )
    {
        nal_ue_t VAR_4 = 0;
        if( VAR_1 == VAR_2 )
        {
            VAR_4 = FUNC_2( VAR_0 );
            if( VAR_4 >= VAR_1 )
                return 0;
        }
        if(VAR_4 == VAR_1)
            return 0;

        nal_u1_t VAR_5 = FUNC_1( VAR_0 );
        nal_ue_t VAR_6 = FUNC_2( VAR_0 );
        unsigned VAR_7 = VAR_1 - VAR_4 - 1;
        int VAR_8 = ( 1 - ( VAR_5 << 1 ) ) * ( VAR_6 + 1 );
        FUNC_0(VAR_8);

        unsigned VAR_9 = VAR_3[VAR_7].num_delta_pocs;
        VAR_3[VAR_1].num_delta_pocs = 0;
        for( unsigned VAR_10=0; VAR_10<= VAR_9; VAR_10++ )
        {
            if( ! FUNC_1( VAR_0 ) )
            {
                if( FUNC_1( VAR_0 ) )
                    VAR_3[VAR_1].num_delta_pocs++;
            }
            else
                VAR_3[VAR_1].num_delta_pocs++;
        }
    }
    else
    {
        nal_ue_t VAR_11 = FUNC_2( VAR_0 );
        nal_ue_t VAR_12 = FUNC_2( VAR_0 );
        if( FUNC_3( VAR_0 ) < (VAR_11 + VAR_12) * 2 )
            return 0;
        for(unsigned int VAR_13=0; VAR_13<VAR_11; VAR_13++)
        {
            (void) FUNC_2( VAR_0 );
            (void) FUNC_1( VAR_0 );
        }
        for(unsigned int VAR_14=0; VAR_14<VAR_12; VAR_14++)
        {
            (void) FUNC_2( VAR_0 );
            (void) FUNC_1( VAR_0 );
        }
        VAR_3[VAR_1].num_delta_pocs = VAR_12 + VAR_11;
    }

    return 1;
}
