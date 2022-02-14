
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {int* iov_base; int iov_len; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; scalar_t__ cmsg_len; } ;
typedef int fd ;
typedef int buf ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 scalar_t__ FUNC_2 (int) ;
 struct cmsghdr* FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_7 (int VAR_3)
{
    struct msghdr VAR_4;
    struct iovec VAR_5;
    struct cmsghdr *VAR_6;
    int VAR_7, VAR_8;
    char VAR_9[FUNC_4 (sizeof (VAR_8))];

    VAR_4.msg_name = ((void*)0);
    VAR_4.msg_namelen = 0;
    VAR_4.msg_iov = &VAR_5;
    VAR_4.msg_iovlen = 1;
    VAR_4.msg_control = VAR_9;
    VAR_4.msg_controllen = sizeof (VAR_9);

    VAR_5.iov_base = &VAR_7;
    VAR_5.iov_len = sizeof (VAR_7);

    if (FUNC_6 (VAR_3, &VAR_4, 0) != sizeof (VAR_7))
        return -1;

    for (VAR_6 = FUNC_1 (&VAR_4); VAR_6 != ((void*)0);
         VAR_6 = FUNC_3 (&VAR_4, VAR_6))
    {
        if ((VAR_6->cmsg_level == VAR_1)
         && (VAR_6->cmsg_type == VAR_0)
         && (VAR_6->cmsg_len >= FUNC_2 (sizeof (VAR_8))))
        {
            FUNC_5 (&VAR_8, FUNC_0 (VAR_6), sizeof (VAR_8));
            return VAR_8;
        }
    }

    VAR_2 = VAR_7;
    return -1;
}
