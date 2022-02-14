
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {unsigned long uio_iovcnt; int uio_loffset; size_t uio_resid; size_t uio_skip; int uio_limit; int uio_segflg; struct iovec const* uio_iov; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_2__ uio_t ;
typedef int uio_seg_t ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int fstrans_cookie_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,TYPE_2__*,int,int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct inode *VAR_2, const struct iovec *VAR_3, size_t VAR_4,
    unsigned long VAR_5, loff_t *VAR_6, uio_seg_t VAR_7, int VAR_8,
    cred_t *VAR_9, size_t VAR_10)
{
 ssize_t VAR_11;
 uio_t VAR_12 = { 0 , 0 };
 int VAR_13;
 fstrans_cookie_t VAR_14;

 if (VAR_8 & VAR_1)
  *VAR_6 = FUNC_0(VAR_2);

 VAR_12.uio_iov = VAR_3;
 VAR_12.uio_iovcnt = VAR_5;
 VAR_12.uio_loffset = *VAR_6;
 VAR_12.uio_segflg = VAR_7;
 VAR_12.uio_limit = VAR_0;
 VAR_12.uio_resid = VAR_4;
 VAR_12.uio_skip = VAR_10;

 VAR_14 = FUNC_1();
 VAR_13 = -FUNC_3(VAR_2, &VAR_12, VAR_8, VAR_9);
 FUNC_2(VAR_14);
 if (VAR_13 < 0)
  return (VAR_13);

 VAR_11 = VAR_4 - VAR_12.uio_resid;
 *VAR_6 += VAR_11;

 return (VAR_11);
}
