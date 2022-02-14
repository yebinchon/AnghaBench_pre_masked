
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int stream_t ;
struct TYPE_5__ {struct TYPE_5__* p_first; struct TYPE_5__* p_last; } ;
typedef TYPE_1__ MP4_Box_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int ,int) ;

__attribute__((used)) static int FUNC_4( stream_t *VAR_0, MP4_Box_t *VAR_1,
                                         uint8_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4 )
{
    if(!VAR_1)
        return 0;
    stream_t *VAR_5 = FUNC_3( VAR_0, VAR_2, VAR_3,
                                                  1 );
    if( !VAR_5 )
        return 0;
    MP4_Box_t *VAR_6 = VAR_1->p_last;
    FUNC_1( VAR_5, VAR_1, ((void*)0) );
    FUNC_2( VAR_5 );

    if( VAR_1 )
    {
        MP4_Box_t *VAR_7 = VAR_6 ? VAR_6 : VAR_1->p_first;
        FUNC_0(VAR_7, VAR_4);
    }

    return 1;
}
