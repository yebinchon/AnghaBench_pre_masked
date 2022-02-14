
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uio_seg_t ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct inode {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int cred_t ;


 int FUNC_0 (struct inode*,struct iovec*,size_t,int,int *,int ,int,int *,int ) ;

inline ssize_t
FUNC_1(struct inode *VAR_0, const char *VAR_1, size_t VAR_2, loff_t *VAR_3,
    uio_seg_t VAR_4, int VAR_5, cred_t *VAR_6)
{
 struct iovec VAR_7;

 VAR_7.iov_base = (void *)VAR_1;
 VAR_7.iov_len = VAR_2;

 return (FUNC_0(VAR_0, &VAR_7, VAR_2, 1, VAR_3, VAR_4,
     VAR_5, VAR_6, 0));
}
