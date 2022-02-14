
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int stream_t ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ i_object_size; scalar_t__ i_object_pos; TYPE_2__* p_father; } ;
struct TYPE_10__ {TYPE_3__ common; } ;
typedef TYPE_4__ asf_object_t ;
struct TYPE_7__ {scalar_t__ i_object_size; scalar_t__ i_object_pos; } ;
struct TYPE_8__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_3, asf_object_t *VAR_4, uint64_t VAR_5 )
{
    asf_object_t VAR_6;

    int64_t VAR_7 = FUNC_2( VAR_3 );
    if ( VAR_5 && VAR_7 >= 0 && (uint64_t) VAR_7 >= VAR_5 )
    {
        return VAR_2;
    }

    if( VAR_4 == ((void*)0) )
    {
        if( FUNC_0( VAR_3, &VAR_6 ) )
            return VAR_2;

        VAR_4 = &VAR_6;
    }

    if( VAR_4->common.i_object_size <= 0 )
        return VAR_2;

    if( ( VAR_1 - VAR_4->common.i_object_pos ) < VAR_4->common.i_object_size )
        return VAR_2;

    if( VAR_4->common.p_father &&
        VAR_4->common.p_father->common.i_object_size != 0 )
    {
        if( VAR_4->common.p_father->common.i_object_pos +
            VAR_4->common.p_father->common.i_object_size <
                VAR_4->common.i_object_pos + VAR_4->common.i_object_size + VAR_0 )

        {
            return VAR_2;
        }

    }

    return FUNC_1( VAR_3, VAR_4->common.i_object_pos +
                        VAR_4->common.i_object_size );
}
