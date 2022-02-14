
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct stat {scalar_t__ st_size; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ offset; int fd; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_1( stream_t *VAR_1 )
{
    access_sys_t *VAR_2 = VAR_1->p_sys;
    struct stat VAR_3;

    if( VAR_2->size >= VAR_2->offset )
        return;


    if( FUNC_0( VAR_2->fd, &VAR_3 ) )
        return;
    if( (uint64_t)VAR_3.st_size <= VAR_0 )
        return;

    VAR_2->size -= VAR_0;
    VAR_0 = VAR_3.st_size;
    VAR_2->size += VAR_0;
}
