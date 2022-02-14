
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int stream_t ;
struct TYPE_7__ {int i_size; } ;
typedef TYPE_1__ MP4_Box_t ;


 int * FUNC_0 (int *,TYPE_1__*,size_t,void (*) (TYPE_1__*),int ) ;

__attribute__((used)) static uint8_t *FUNC_1( stream_t *VAR_0, MP4_Box_t *VAR_1,
                                   size_t VAR_2,
                                   void (*VAR_3)( MP4_Box_t * ) )
{
    uint64_t VAR_4 = VAR_1->i_size;
    return FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 );
}
