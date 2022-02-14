
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct stat {int st_size; } ;
struct TYPE_2__ {int f; } ;
struct reader {TYPE_1__ u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct stat*) ;

__attribute__((used)) static uint64_t
FUNC_3( struct reader *VAR_0 )
{
    struct stat VAR_1;
    int VAR_2 = FUNC_1( VAR_0->u.f );

    FUNC_0( VAR_2 >= 0 );
    FUNC_0( FUNC_2( VAR_2, &VAR_1 ) != -1 );

    return VAR_1.st_size;
}
