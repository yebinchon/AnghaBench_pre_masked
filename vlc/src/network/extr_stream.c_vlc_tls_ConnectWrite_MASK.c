
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ops; } ;
typedef TYPE_1__ vlc_tls_t ;
struct TYPE_8__ {int fd; int peerlen; int peer; } ;
typedef TYPE_2__ vlc_tls_socket_t ;
struct msghdr {unsigned int msg_iovlen; struct iovec* msg_iov; int msg_namelen; int msg_name; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct msghdr const*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct iovec const*,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_4(vlc_tls_t *VAR_6,
                                    const struct iovec *VAR_7,unsigned VAR_8)
{

    VAR_6->ops = &VAR_5;
    if (FUNC_1(VAR_6))
        return -1;

    return FUNC_2(VAR_6, VAR_7, VAR_8);
}
