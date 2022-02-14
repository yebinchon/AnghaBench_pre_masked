
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int fd; scalar_t__ offset; int size; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_4, uint64_t VAR_5 )
{
    access_sys_t *VAR_6 = VAR_4->p_sys;


    VAR_5 = FUNC_3( VAR_5, VAR_6->size );

    VAR_6->offset = VAR_5;


    FUNC_1( VAR_4 );


    unsigned VAR_7 = 0;
    while( VAR_7 < VAR_0 - 1 &&
           VAR_5 >= FUNC_0( VAR_7 ) )
    {
        VAR_5 -= FUNC_0( VAR_7 );
        VAR_7++;
    }
    if( !FUNC_2( VAR_4, VAR_7 ) )
        return VAR_2;


    return FUNC_4( VAR_6->fd, VAR_5, VAR_1 ) != -1 ?
        VAR_3 : VAR_2;
}
