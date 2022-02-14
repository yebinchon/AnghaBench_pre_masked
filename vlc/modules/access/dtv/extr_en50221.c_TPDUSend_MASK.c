
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct iovec {void** iov_base; int iov_len; } ;
struct TYPE_3__ {int obj; int fd; } ;
typedef TYPE_1__ cam_t ;


 int FUNC_0 (int,void**,int) ;
 void** FUNC_1 (void**,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct iovec const*,int) ;

__attribute__((used)) static int FUNC_5( cam_t * VAR_3, uint8_t VAR_4, uint8_t VAR_5,
                     const uint8_t *VAR_6, size_t VAR_7 )
{
    uint8_t VAR_8[9], *VAR_9 = VAR_8;

    *(VAR_9++) = VAR_4;
    *(VAR_9++) = VAR_4 + 1;
    *(VAR_9++) = VAR_5;
    VAR_9 = FUNC_1( VAR_9, VAR_7 + 1 );

    *(VAR_9++) = VAR_4 + 1;
    FUNC_0( 1, VAR_8, VAR_9 - VAR_8 );

    const struct iovec VAR_10[2] = {
        { .iov_base = VAR_8, .iov_len = VAR_9 - VAR_8 },
        { .iov_base = (void *)VAR_6, .iov_len = VAR_7 },
    };

    if ( FUNC_4( VAR_3->fd, VAR_10, 2 ) <= 0 )
    {
        FUNC_2( VAR_3->obj, "cannot write to CAM device: %s",
                 FUNC_3(VAR_2) );
        return VAR_0;
    }
    return VAR_1;
}
