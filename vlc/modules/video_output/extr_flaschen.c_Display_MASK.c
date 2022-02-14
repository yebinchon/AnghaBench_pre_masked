
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_11__ {int fd; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_12__ {int i_width; int i_height; } ;
typedef TYPE_4__ video_format_t ;
typedef char uint8_t ;
struct msghdr {int msg_iovlen; int msg_flags; int msg_controllen; int * msg_control; struct iovec* msg_iov; int msg_namelen; int * msg_name; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct TYPE_13__ {TYPE_1__* p; TYPE_4__ format; } ;
typedef TYPE_5__ picture_t ;
typedef int buffer ;
struct TYPE_9__ {char* p_pixels; int i_pitch; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (int ,struct msghdr*,int ) ;
 int FUNC_2 (char*,int,char*,int,int) ;
 long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(vout_display_t *VAR_3, picture_t *VAR_4)
{



    const long VAR_5 = FUNC_3(VAR_1);

    vout_display_sys_t *VAR_6 = VAR_3->sys;
    video_format_t *VAR_7 = &VAR_4->format;
    int VAR_8;

    char VAR_9[64];
    int VAR_10 = FUNC_2(VAR_9, sizeof(VAR_9), "P6\n%d %d\n255\n",
                              VAR_7->i_width, VAR_7->i_height);




    int VAR_11 = 1 + VAR_7->i_height;
    if (FUNC_4(VAR_11 > VAR_5))
        return;

    struct iovec VAR_12[VAR_11];
    VAR_12[0].iov_base = VAR_9;
    VAR_12[0].iov_len = VAR_10;

    uint8_t *VAR_13 = VAR_4->p->p_pixels;
    for (int VAR_14 = 1; VAR_14 < VAR_11; VAR_14++)
    {
        VAR_12[VAR_14].iov_base = VAR_13;
        VAR_12[VAR_14].iov_len = VAR_7->i_width * 3;
        VAR_13 += VAR_4->p->i_pitch;
    }

    struct msghdr VAR_15 = {
        .msg_name = ((void*)0),
        .msg_namelen = 0,
        .msg_iov = VAR_12,
        .msg_iovlen = VAR_11,
        .msg_control = ((void*)0),
        .msg_controllen = 0,
        .msg_flags = 0 };

    VAR_8 = FUNC_1(VAR_6->fd, &VAR_15, 0);
    if (VAR_8 < 0)
        FUNC_0(VAR_3, "sendmsg: error %s in vout display flaschen", FUNC_5(VAR_2));
    else if (VAR_8 < (int)(VAR_10 + VAR_7->i_width * VAR_7->i_height * 3))
        FUNC_0(VAR_3, "sendmsg only sent %d bytes in vout display flaschen", VAR_8);

}
