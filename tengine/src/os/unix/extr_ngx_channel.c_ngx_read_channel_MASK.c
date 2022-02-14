
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msghdr {int msg_iovlen; int msg_controllen; int msg_accrightslen; int msg_flags; void* msg_accrights; void* msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {char* iov_base; size_t iov_len; } ;
struct cmsghdr {scalar_t__ cmsg_len; scalar_t__ cmsg_type; int cmsg_level; } ;
typedef int ssize_t ;
typedef scalar_t__ socklen_t ;
typedef int ngx_socket_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_3__ {scalar_t__ command; int fd; } ;
typedef TYPE_1__ ngx_channel_t ;
typedef int cmsg ;
typedef void* caddr_t ;


 int FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,int *,int ,char*) ;
 int FUNC_4 (int ,int *,scalar_t__,char*,...) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int ,struct msghdr*,int ) ;

ngx_int_t
FUNC_7(ngx_socket_t VAR_11, ngx_channel_t *VAR_12, size_t VAR_13, ngx_log_t *VAR_14)
{
    ssize_t VAR_15;
    ngx_err_t VAR_16;
    struct iovec VAR_17[1];
    struct msghdr VAR_18;







    int VAR_19;


    VAR_17[0].iov_base = (char *) VAR_12;
    VAR_17[0].iov_len = VAR_13;

    VAR_18.msg_name = ((void*)0);
    VAR_18.msg_namelen = 0;
    VAR_18.msg_iov = VAR_17;
    VAR_18.msg_iovlen = 1;





    VAR_18.msg_accrights = (caddr_t) &VAR_19;
    VAR_18.msg_accrightslen = sizeof(int);


    VAR_15 = FUNC_6(VAR_11, &VAR_18, 0);

    if (VAR_15 == -1) {
        VAR_16 = VAR_10;
        if (VAR_16 == VAR_4) {
            return VAR_2;
        }

        FUNC_4(VAR_6, VAR_14, VAR_16, "recvmsg() failed");
        return VAR_5;
    }

    if (VAR_15 == 0) {
        FUNC_3(VAR_7, VAR_14, 0, "recvmsg() returned zero");
        return VAR_5;
    }

    if ((size_t) VAR_15 < sizeof(ngx_channel_t)) {
        FUNC_4(VAR_6, VAR_14, 0,
                      "recvmsg() returned not enough data: %z", VAR_15);
        return VAR_5;
    }
    if (VAR_12->command == VAR_3) {
        if (VAR_18.msg_accrightslen != sizeof(int)) {
            FUNC_4(VAR_6, VAR_14, 0,
                          "recvmsg() returned no ancillary data");
            return VAR_5;
        }

        VAR_12->fd = VAR_19;
    }



    return VAR_15;
}
