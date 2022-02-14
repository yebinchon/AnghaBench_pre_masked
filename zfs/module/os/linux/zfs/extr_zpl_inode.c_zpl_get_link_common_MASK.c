
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {int uio_iovcnt; void* uio_resid; int uio_segflg; struct iovec* uio_iov; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_2__ uio_t ;
struct iovec {char* iov_base; void* iov_len; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int fstrans_cookie_t ;
typedef int cred_t ;


 int * FUNC_0 () ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,void*) ;
 char* FUNC_4 (void*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_8(struct dentry *VAR_3, struct inode *VAR_4, char **VAR_5)
{
 fstrans_cookie_t VAR_6;
 cred_t *VAR_7 = FUNC_0();
 struct iovec VAR_8;
 uio_t VAR_9 = { 0 , 0 };
 int VAR_10;

 FUNC_2(VAR_7);
 *VAR_5 = ((void*)0);
 VAR_8.iov_len = VAR_1;
 VAR_8.iov_base = FUNC_4(VAR_1, VAR_0);

 VAR_9.uio_iov = &VAR_8;
 VAR_9.uio_iovcnt = 1;
 VAR_9.uio_segflg = VAR_2;
 VAR_9.uio_resid = (VAR_1 - 1);

 VAR_6 = FUNC_5();
 VAR_10 = -FUNC_7(VAR_4, &VAR_9, VAR_7);
 FUNC_6(VAR_6);
 FUNC_1(VAR_7);

 if (VAR_10)
  FUNC_3(VAR_8.iov_base, VAR_1);
 else
  *VAR_5 = VAR_8.iov_base;

 return (VAR_10);
}
