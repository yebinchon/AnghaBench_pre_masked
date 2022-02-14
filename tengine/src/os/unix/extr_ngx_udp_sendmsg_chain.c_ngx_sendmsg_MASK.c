
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct msghdr {int msg_controllen; int ipi6_addr; int ** msg_control; struct in_addr ipi_spec_dst; int msg_iovlen; int msg_iov; scalar_t__ msg_namelen; int msg_name; } ;
struct in_pktinfo {int msg_controllen; int ipi6_addr; int ** msg_control; struct in_addr ipi_spec_dst; int msg_iovlen; int msg_iov; scalar_t__ msg_namelen; int msg_name; } ;
struct in6_pktinfo {int msg_controllen; int ipi6_addr; int ** msg_control; struct in_addr ipi_spec_dst; int msg_iovlen; int msg_iov; scalar_t__ msg_namelen; int msg_name; } ;
struct cmsghdr {void* cmsg_len; int cmsg_type; void* cmsg_level; } ;
typedef int ssize_t ;
struct TYPE_12__ {int size; int count; int iovs; } ;
typedef TYPE_4__ ngx_iovec_t ;
typedef int ngx_err_t ;
struct TYPE_13__ {TYPE_3__* write; int log; int fd; TYPE_2__* local_sockaddr; TYPE_1__* listening; scalar_t__ socklen; int sockaddr; } ;
typedef TYPE_5__ ngx_connection_t ;
typedef int msg_control6 ;
typedef int msg_control ;
struct TYPE_11__ {int error; } ;
struct TYPE_10__ {scalar_t__ sa_family; } ;
struct TYPE_9__ {scalar_t__ wildcard; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_5__*,int,char*) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ,int,char*) ;
 int FUNC_6 (int ,int ,int ,char*,int,int ) ;
 int FUNC_7 (struct msghdr*,int) ;
 int FUNC_8 (int ,struct msghdr*,int ) ;

__attribute__((used)) static ssize_t
FUNC_9(ngx_connection_t *VAR_11, ngx_iovec_t *VAR_12)
{
    ssize_t VAR_13;
    ngx_err_t VAR_14;
    struct msghdr VAR_15;
    FUNC_7(&VAR_15, sizeof(struct msghdr));

    if (VAR_11->socklen) {
        VAR_15.msg_name = VAR_11->sockaddr;
        VAR_15.msg_namelen = VAR_11->socklen;
    }

    VAR_15.msg_iov = VAR_12->iovs;
    VAR_15.msg_iovlen = VAR_12->count;
eintr:

    VAR_13 = FUNC_8(VAR_11->fd, &VAR_15, 0);

    FUNC_6(VAR_9, VAR_11->log, 0,
                   "sendmsg: %z of %uz", VAR_13, VAR_12->size);

    if (VAR_13 == -1) {
        VAR_14 = VAR_10;

        switch (VAR_14) {
        case 129:
            FUNC_5(VAR_9, VAR_11->log, VAR_14,
                           "sendmsg() not ready");
            return VAR_7;

        case 128:
            FUNC_5(VAR_9, VAR_11->log, VAR_14,
                           "sendmsg() was interrupted");
            goto eintr;

        default:
            VAR_11->write->error = 1;
            FUNC_4(VAR_11, VAR_14, "sendmsg() failed");
            return VAR_8;
        }
    }

    return VAR_13;
}
