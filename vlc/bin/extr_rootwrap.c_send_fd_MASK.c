
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {int* iov_base; int iov_len; } ;
struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;
typedef int fd ;
typedef int buf ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_6 (int VAR_3, int VAR_4)
{
    struct msghdr VAR_5;
    struct iovec VAR_6;
    struct cmsghdr *VAR_7;
    char VAR_8[FUNC_3 (sizeof (VAR_4))];
    int VAR_9 = 0;

    VAR_5.msg_name = ((void*)0);
    VAR_5.msg_namelen = 0;
    VAR_5.msg_iov = &VAR_6;
    VAR_5.msg_iovlen = 1;
    VAR_5.msg_control = VAR_8;
    VAR_5.msg_controllen = sizeof (VAR_8);

    VAR_6.iov_base = &VAR_9;
    VAR_6.iov_len = sizeof (VAR_9);

    VAR_7 = FUNC_1 (&VAR_5);
    VAR_7->cmsg_level = VAR_2;
    VAR_7->cmsg_type = VAR_1;
    VAR_7->cmsg_len = FUNC_2 (sizeof (VAR_4));
    FUNC_4 (FUNC_0 (VAR_7), &VAR_4, sizeof (VAR_4));
    VAR_5.msg_controllen = VAR_7->cmsg_len;

    return FUNC_5(VAR_3, &VAR_5, VAR_0) == sizeof (VAR_9) ? 0 : -1;
}
