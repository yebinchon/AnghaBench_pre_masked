
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int stream_t ;
struct TYPE_9__ {scalar_t__ i_size; scalar_t__ i_pos; } ;
typedef TYPE_1__ MP4_Box_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static MP4_Box_t *FUNC_3( stream_t *VAR_0, MP4_Box_t *VAR_1,
                                    int(*VAR_2)(stream_t *, MP4_Box_t *) )
{
    MP4_Box_t *VAR_3 = FUNC_1( VAR_0, VAR_1 );
    if( !VAR_3 )
        return ((void*)0);

    if( VAR_2( VAR_0, VAR_3 ) != 1 )
    {
        uint64_t VAR_4 = VAR_3->i_pos + VAR_3->i_size;
        FUNC_0( VAR_3 );
        FUNC_2( VAR_0, VAR_4 );
        return ((void*)0);
    }
    return VAR_3;
}
