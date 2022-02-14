
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint32_t ;
struct atomic_operation_t {int dummy; } ;
struct TYPE_5__ {unsigned int i_nb_atomic_operations; int i_overflow_buffer_size; int * p_overflow_buffer; TYPE_2__* p_atomic_operations; } ;
typedef TYPE_1__ filter_sys_t ;
struct TYPE_6__ {int i_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,unsigned int,unsigned int,int,double,double,double,double) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 double FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_9, filter_sys_t * VAR_10
        , unsigned int VAR_11, uint32_t VAR_12
        , unsigned int VAR_13 )
{
    double VAR_14 = FUNC_5( VAR_9, "headphone-dim" );
    double VAR_15 = VAR_14;
    double VAR_16 = -VAR_14/3;
    double VAR_17 = 0;
    unsigned int VAR_18;
    int VAR_19;
    unsigned int VAR_20;

    if( FUNC_4( VAR_9, "headphone-compensate" ) )
    {

        if( VAR_12 & VAR_5 )
        {
            VAR_17 = VAR_16;
        }
        else
        {
            VAR_17 = VAR_15;
        }
    }


    VAR_10->i_nb_atomic_operations = VAR_11 * 2;
    if( VAR_12 & VAR_0 )
    {
        VAR_10->i_nb_atomic_operations += 2;
    }
    VAR_10->p_atomic_operations = FUNC_2( sizeof(struct atomic_operation_t)
            * VAR_10->i_nb_atomic_operations );
    if( VAR_10->p_atomic_operations == ((void*)0) )
        return -1;



    VAR_18 = 0;
    VAR_19 = 0;
    if( VAR_12 & VAR_1 )
    {
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , -VAR_14 , VAR_15 , VAR_17 , 2.0 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }
    if( VAR_12 & VAR_8 )
    {
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , VAR_14 , VAR_15 , VAR_17 , 2.0 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }
    if( VAR_12 & VAR_3 )
    {
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , -VAR_14 , 0 , VAR_17 , 1.5 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }
    if( VAR_12 & VAR_4 )
    {
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , VAR_14 , 0 , VAR_17 , 1.5 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }
    if( VAR_12 & VAR_6 )
    {
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , -VAR_14 , VAR_16 , VAR_17 , 1.5 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }
    if( VAR_12 & VAR_7 )
    {
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , VAR_14 , VAR_16 , VAR_17 , 1.5 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }
    if( VAR_12 & VAR_5 )
    {
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , 0 , -VAR_15 , VAR_17 , 1.5 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }
    if( VAR_12 & VAR_0 )
    {

        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , VAR_14 / 5.0 , VAR_15 , VAR_17 , 0.75 / VAR_11 );
        VAR_18 += 2;
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , -VAR_14 / 5.0 , VAR_15 , VAR_17 , 0.75 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }
    if( VAR_12 & VAR_2 )
    {
        FUNC_0( VAR_10 , VAR_13
                , VAR_18 , VAR_19
                , 0 , VAR_16 , VAR_17 , 5.0 / VAR_11 );
        VAR_18 += 2;
        VAR_19++;
    }



    VAR_10->i_overflow_buffer_size = 0;
    for( VAR_20 = 0 ; VAR_20 < VAR_10->i_nb_atomic_operations ; VAR_20++ )
    {
        if( VAR_10->i_overflow_buffer_size
                < VAR_10->p_atomic_operations[VAR_20].i_delay * 2 * sizeof (float) )
        {
            VAR_10->i_overflow_buffer_size
                = VAR_10->p_atomic_operations[VAR_20].i_delay * 2 * sizeof (float);
        }
    }
    VAR_10->p_overflow_buffer = FUNC_2( VAR_10->i_overflow_buffer_size );
    if( VAR_10->p_overflow_buffer == ((void*)0) )
    {
        FUNC_1( VAR_10->p_atomic_operations );
        return -1;
    }
    FUNC_3( VAR_10->p_overflow_buffer, 0 , VAR_10->i_overflow_buffer_size );

    return 0;
}
